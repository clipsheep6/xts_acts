import mediaLibrary from '@ohos.multimedia.medialibrary';


import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'


describe('GET_MEDIA_AUDIO_VIDEO_IMAGE_ALBUM.test.js', function () {
console.info("mediaLibrary Instance before");
const media = mediaLibrary.getMediaLibraryHelper();
console.info("mediaLibrary Instance after");

//var URI;
//var name;
//var result1;
//var name_URI;
//var albumName;
//var albumId;
var i;

const imagespath = {
selections: 'onelevel/images',
selectionArgs:['imagealbum'],
};
const BMP = {
selections: 'onelevel/images/BMP',
selectionArgs:['imagealbum'],
};
const GIF = {
selections: 'onelevel/images/GIF',
selectionArgs:['imagealbum'],
};
const JPG = {
selections: 'onelevel/images/JPG',
selectionArgs:['imagealbum'],
};
const PNG = {
selections: 'onelevel/images/PNG',
selectionArgs:['imagealbum'],
};
const RAW = {
selections: 'onelevel/images/RAW',
selectionArgs:['imagealbum'],
};
const HEIF = {
selections: 'onelevel/images/HEIF',
selectionArgs:['imagealbum'],
};
const SVG = {
selections: 'onelevel/images/SVG',
selectionArgs:['imagealbum'],
};
const WEBP = {
selections: 'onelevel/images/WEBP',
selectionArgs:['imagealbum'],
};
const audiopath = {
selections: 'onelevel/audio',
selectionArgs:['videoalbum'],
};
const WAV = {
selections: "onelevel/audio/WAV",
selectionArgs:['audioalbum'],
};
const AAC = {
selections: "onelevel/audio/AAC",
selectionArgs:['audioalbum'],
};
const MP3 = {
selections: "onelevel/audio/MP3",
selectionArgs:['audioalbum'],
};
const FLAC = {
selections: "onelevel/audio/FLAC",
selectionArgs:['audioalbum'],
};
const OGG = {
selections: "onelevel/audio/OGG",
selectionArgs:['audioalbum'],
};
const videopath = {
selections: "onelevel/video",
selectionArgs:['audioalbum'],
};
const V3GP = {
selections: 'onelevel/video/3GP',
selectionArgs:['videoalbum'],
};
const MOV = {
selections: 'onelevel/video/MOV',
selectionArgs:['videoalbum'],
};
const MPG = {
elections: 'onelevel/video/MPG',
selectionArgs:['videoalbum'],
};
const WEBM = {
selections: 'onelevel/video/WEBM',
selectionArgs:['videoalbum'],
};
const MP4 = {
selections: 'onelevel/video/MP4',
selectionArgs:['videoalbum'],
};
const mediapath = {
selections: 'onelevel/media',
selectionArgs:['audioalbum'],
};
const videoalbumpath = {
selections: 'onelevel/videoalbum',
selectionArgs:['videoalbum'],
};
const imagealbumpath = {
selections: 'onelevel/imagealbum',
selectionArgs:['videoalbum'],
};
const EMPTYPATH = {
selections: 'onelevel/emptypath',
selectionArgs:['audioalbum'],
};
const nonexistantpath = {
selections: 'NonExistant',
selectionArgs:['audioalbum'],
};
const createaudioasyncmp3path = {
selections: 'onelevel/createaudio/async/mp3',
selectionArgs:['audioalbum'],
};
const createaudioasyncMP3path = {
selections: 'onelevel/createaudio/async/MP3',
selectionArgs:['audioalbum'],
};
const createaudioasyncwavpath = {
selections: 'onelevel/createaudio/async/wav',
selectionArgs:['audioalbum'],
};
const createaudioasyncWAVpath = {
selections: 'onelevel/createaudio/async/WAV',
selectionArgs:['audioalbum'],
};
const createaudioasyncaacpath = {
selections: 'onelevel/createaudio/async/aac',
selectionArgs:['audioalbum'],
};
const createaudioasyncAACpath = {
selections: 'onelevel/createaudio/async/AAC',
selectionArgs:['audioalbum'],
};
const createaudioasyncflacpath = {
selections: 'onelevel/createaudio/async/flac',
selectionArgs:['audioalbum'],
};
const createaudioasyncFLACpath = {
selections: 'onelevel/createaudio/async/FLAC',
selectionArgs:['audioalbum'],
};
const createaudioasyncoggpath = {
selections: 'onelevel/createaudio/async/ogg',
selectionArgs:['audioalbum'],
};
const createaudioasyncOGGpath = {
selections: 'onelevel/createaudio/async/OGG',
selectionArgs:['audioalbum'],
};
const createaudiopromisemp3path = {
selections: 'onelevel/createaudio/promise/mp3',
selectionArgs:['audioalbum'],
};
const createaudiopromiseMP3path = {
selections: 'onelevel/createaudio/promise/MP3',
selectionArgs:['audioalbum'],
};
const createaudiopromisewavpath = {
selections: 'onelevel/createaudio/promise/wav',
selectionArgs:['audioalbum'],
};
const createaudiopromiseWAVpath = {
selections: 'onelevel/createaudio/promise/WAV',
selectionArgs:['audioalbum'],
};
const createaudiopromiseaacpath = {
selections: 'onelevel/createaudio/promise/aac',
selectionArgs:['audioalbum'],
};
const createaudiopromiseAACpath = {
selections: 'onelevel/createaudio/promise/AAC',
selectionArgs:['audioalbum'],
};
const createaudiopromiseflacpath = {
selections: 'onelevel/createaudio/promise/flac',
selectionArgs:['audioalbum'],
};
const createaudiopromiseFLACpath = {
selections: 'onelevel/createaudio/promise/FLAC',
selectionArgs:['audioalbum'],
};
const createaudiopromiseoggpath = {
selections: 'onelevel/createaudio/promise/ogg',
selectionArgs:['audioalbum'],
};
const createaudiopromiseOGGpath = {
selections: 'onelevel/createaudio/promise/OGG',
selectionArgs:['audioalbum'],
};
const createaudiononamepath = {
selections: 'onelevel/createaudio/noname',
selectionArgs:['audioalbum'],
};
const createvideopath = {
selections: 'onelevel/createvideo',
selectionArgs:['videoalbum'],
};
const createimagepath = {
selections: 'onelevel/createimage',
selectionArgs:['imagealbum'],
};
const createimageasyncbmppath = {
selections: 'onelevel/createimage/async/bmp',
selectionArgs:['audioalbum'],
};
const createimageasyncBPMpath = {
selections: 'onelevel/createimage/async/BMP',
selectionArgs:['audioalbum'],
};
const createimageasyncjpgpath = {
selections: 'onelevel/createimage/async/jpg',
selectionArgs:['audioalbum'],
};
const createimageasyncJPGpath = {
selections: 'onelevel/createimage/async/JPG',
selectionArgs:['audioalbum'],
};
const createimageasyncpngpath = {
selections: 'onelevel/createimage/async/png',
selectionArgs:['audioalbum'],
};
const createimageasyncPNGpath = {
selections: 'onelevel/createimage/async/PNG',
selectionArgs:['audioalbum'],
};
const createimageasyncgifpath = {
selections: 'onelevel/createimage/async/gif',
selectionArgs:['audioalbum'],
};
const createimageasyncGIFpath = {
selections: 'onelevel/createimage/async/GIF',
selectionArgs:['audioalbum'],
};
const createimageasyncrawpath = {
selections: 'onelevel/createimage/async/raw',
selectionArgs:['audioalbum'],
};
const createimageasyncRAWpath = {
selections: 'onelevel/createimage/async/RAW',
selectionArgs:['audioalbum'],
};
const createimageasyncheifpath = {
selections: 'onelevel/createimage/async/heif',
selectionArgs:['audioalbum'],
};
const createimageasyncHEIFpath = {
selections: 'onelevel/createimage/async/HEIF',
selectionArgs:['audioalbum'],
};
const createimageasyncwebppath = {
selections: 'onelevel/createimage/async/webp',
selectionArgs:['audioalbum'],
};
const createimageasyncWEBPpath = {
selections: 'onelevel/createimage/async/WEBP',
selectionArgs:['audioalbum'],
};
const createimageasyncsvgpath = {
selections: 'onelevel/createimage/async/svg',
selectionArgs:['audioalbum'],
};
const createimageasyncSVGpath = {
selections: 'onelevel/createimage/async/SVG',
selectionArgs:['audioalbum'],
}
const createimagepromisebmppath = {
selections: 'onelevel/createimage/promise/bmp',
selectionArgs:['audioalbum'],
};
const createimagepromiseBPMpath = {
selections: 'onelevel/createimage/promise/BMP',
selectionArgs:['audioalbum'],
};
const createimagepromisejpgpath = {
selections: 'onelevel/createimage/promise/jpg',
selectionArgs:['audioalbum'],
};
const createimagepromiseJPGpath = {
selections: 'onelevel/createimage/promise/JPG',
selectionArgs:['audioalbum'],
};
const createimagepromisepngpath = {
selections: 'onelevel/createimage/promise/png',
selectionArgs:['audioalbum'],
};
const createimagepromisePNGpath = {
selections: 'onelevel/createimage/promise/PNG',
selectionArgs:['audioalbum'],
};
const createimagepromisegifpath = {
selections: 'onelevel/createimage/promise/gif',
selectionArgs:['audioalbum'],
};
const createimagepromiseGIFpath = {
selections: 'onelevel/createimage/promise/GIF',
selectionArgs:['audioalbum'],
};
const createimagepromiserawpath = {
selections: 'onelevel/createimage/promise/raw',
selectionArgs:['audioalbum'],
};
const createimagepromiseRAWpath = {
selections: 'onelevel/createimage/promise/RAW',
selectionArgs:['audioalbum'],
};
const createimagepromiseheifpath = {
selections: 'onelevel/createimage/promise/heif',
selectionArgs:['audioalbum'],
};
const createimagepromiseHEIFpath = {
selections: 'onelevel/createimage/promise/HEIF',
selectionArgs:['audioalbum'],
};
const createimagepromisewebppath = {
selections: 'onelevel/createimage/promise/webp',
selectionArgs:['audioalbum'],
};
const createimagepromiseWEBPpath = {
selections: 'onelevel/createimage/promise/WEBP',
selectionArgs:['audioalbum'],
};
const createimagepromisesvgpath = {
selections: 'onelevel/createimage/promise/svg',
selectionArgs:['audioalbum'],
};
const createimagepromiseSVGpath = {
selections: 'onelevel/createimage/promise/SVG',
selectionArgs:['audioalbum'],
};
const createimagenonamepath = {
    selections: 'onelevel/createimage/noname',
    selectionArgs:['audioalbum'],
};
const createvideoasync3gppath = {
selections: 'onelevel/createvideo/async/3gp',
selectionArgs:['audioalbum'],
};
const createvideoasync3GPpath = {
selections: 'onelevel/createvideo/async/3GP',
selectionArgs:['audioalbum'],
};
const createvideoasyncmovpath = {
selections: 'onelevel/createvideo/async/mov',
selectionArgs:['audioalbum'],
};
const createvideoasyncMOVpath = {
selections: 'onelevel/createvideo/async/MOV',
selectionArgs:['audioalbum'],
};
const createvideoasyncmpgpath = {
selections: 'onelevel/createvideo/async/mpg',
selectionArgs:['audioalbum'],
};
const createvideoasyncMPGpath = {
selections: 'onelevel/createvideo/async/MPG',
selectionArgs:['audioalbum'],
};
const createvideoasyncmp4path = {
selections: 'onelevel/createvideo/async/mp4',
selectionArgs:['audioalbum'],
};
const createvideoasyncMP4path = {
selections: 'onelevel/createvideo/async/MP4',
selectionArgs:['audioalbum'],
};
const createvideoasyncmkvpath = {
selections: 'onelevel/createvideo/async/mkv',
selectionArgs:['audioalbum'],
};
const createvideoasyncMKVpath = {
selections: 'onelevel/createvideo/async/MKV',
selectionArgs:['audioalbum'],
};
const createvideoasyncwebmpath = {
selections: 'onelevel/createvideo/async/webm',
selectionArgs:['audioalbum'],
};
const createvideoasyncWEBMpath = {
selections: 'onelevel/createvideo/async/WEBM',
selectionArgs:['audioalbum'],
};
const createvideopromise3gppath = {
selections: 'onelevel/createvideo/promise/3gp',
selectionArgs:['audioalbum'],
};
const createvideopromise3GPpath = {
selections: 'onelevel/createvideo/promise/3GP',
selectionArgs:['audioalbum'],
};
const createvideopromisemovpath = {
selections: 'onelevel/createvideo/promise/mov',
selectionArgs:['audioalbum'],
};
const createvideopromiseMOVpath = {
selections: 'onelevel/createvideo/promise/MOV',
selectionArgs:['audioalbum'],
};
const createvideopromisempgpath = {
selections: 'onelevel/createvideo/promise/mpg',
selectionArgs:['audioalbum'],
};
const createvideopromiseMPGpath = {
selections: 'onelevel/createvideo/promise/MPG',
selectionArgs:['audioalbum'],
};
const createvideopromisemp4path = {
selections: 'onelevel/createvideo/promise/mp4',
selectionArgs:['audioalbum'],
};
const createvideopromiseMP4path = {
selections: 'onelevel/createvideo/promise/MP4',
selectionArgs:['audioalbum'],
};
const createvideopromisemkvpath = {
selections: 'onelevel/createvideo/promise/mkv',
selectionArgs:['audioalbum'],
};
const createvideopromiseMKVpath = {
selections: 'onelevel/createvideo/promise/MKV',
selectionArgs:['audioalbum'],
};
const createvideopromisewebmpath = {
selections: 'onelevel/createvideo/promise/webm',
selectionArgs:['audioalbum'],
};
const createvideopromiseWEBMpath = {
selections: 'onelevel/createvideo/promise/WEBM',
selectionArgs:['audioalbum'],
};
const modifyaudioasyncpath = {
selections: 'onelevel/modifyaudio/async',
selectionArgs:['audioalbum'],
};
const modifyimageasyncpath = {
selections: 'onelevel/modifyimage/async',
selectionArgs:['audioalbum'],
};
const modifyvideoasyncpath = {
selections: 'onelevel/modifyvideo/async',
selectionArgs:['audioalbum'],
};
const modifyalbumasyncpath = {
selections: 'onelevel/modifyalbum/async',
selectionArgs:['audioalbum'],
};
const modifyaudioapromisepath = {
selections: 'onelevel/modifyaudio/promise',
selectionArgs:['audioalbum'],
};
const modifyimagepromisepath = {
selections: 'onelevel/modifyimage/promise/',
selectionArgs:['audioalbum'],
};
const modifyvideopromisepath = {
selections: 'onelevel/modifyvideo/promise/',
selectionArgs:['audioalbum'],
};
const modifyalbumpromisepath = {
selections: 'onelevel/modifyalbum/promise/',
selectionArgs:['audioalbum'],
};
const deletealbumasyncpath = {
selections: 'onelevel/deletealbum/async/',
selectionArgs:['audioalbum'],
};
const deleteaudioasyncpath = {
selections: 'onelevel/deleteaudio/async/',
selectionArgs:['audioalbum'],
};
const deleteimageasyncpath = {
selections: 'onelevel/deleteimage/async/',
selectionArgs:['audioalbum'],
};
const deletevideoasyncpath = {
selections: 'onelevel/deletevideo/async/',
selectionArgs:['audioalbum'],
};
const deletealbumpromisepath = {
selections: 'onelevel/deletealbum/promise/',
selectionArgs:['audioalbum'],
};
const deleteaudiopromisepath = {
selections: 'onelevel/deleteaudio/promise/',
selectionArgs:['audioalbum'],
};
const deleteimagepromisepath = {
selections: 'onelevel/deleteimage/promise/',
selectionArgs:['audioalbum'],
};
const deletevideopromisepath = {
selections: 'onelevel/deletevideo/promise/',
selectionArgs:['audioalbum'],
};
const modifyimagealbumasyncpath = {
selections: 'onelevel/modifyimagealbum/async/',
selectionArgs:['audioalbum'],
};
const modifyimagealbumpromisepath = {
selections: 'onelevel/modifyimagealbum/promise/',
selectionArgs:['audioalbum'],
};
const modifyvideoalbumpromisepath = {
selections: 'onelevel/modifyvideoalbum/promise/',
selectionArgs:['audioalbum'],
};
const modifyvideoalbumasyncpath = {
selections: 'onelevel/modifyvideoalbum/async/',
selectionArgs:['audioalbum'],
};

beforeAll(function () {
})
beforeEach(function () {
})
afterEach(function () {
})
afterAll(function () {
})

/* *
* @tc.number   : GETMEDIA_ASYNC_WITHOUT_FETCH_01
* @tc.name     :Get all MEDIA asset from system [AsyncCallBack]
* @tc.desc     :Get MEDIA asset from system
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETMEDIA_ASYNC_WITHOUT_FETCH_01', 0,async function (done) {
	console.info("MediaLibraryTest: starting getmediaassets async without fetch test case 001");
	media.getMediaAssets((error, value)=> {
		console.info("MediaLibraryTest: before undefined");
		if (value != undefined){
			console.info("MediaLibraryTest: inside undefined");
			value.forEach(getMediaData);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETMEDIA_ASYNC_WITHOUT_FETCH_01: PASS');
		} else if (value == undefined){
			expect(false).assertTrue();
			console.info('MediaLibraryTest: There are no  files under /data/media folder');
			console.info('MediaLibraryTest:  GETMEDIA_ASYNC_WITHOUT_FETCH_01: FAIL');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETMEDIA_ASYNC_WITH_FETCH_02
* @tc.name     :Get all MEDIA asset details from folder "data/media/onelevel/media"
* @tc.desc     :Get MEDIA asset details from folder "data/media/onelevel/media"
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETMEDIA_ASYNC_WITH_FETCH_02', 0, async function (done) {
	media.getMediaAssets(mediapath, (error, value)=> {
		if (value == undefined){
			console.info('MediaLibraryTest: There are no  files under' + mediapath  );
			expect(false).assertTrue();
			console.info('MediaLibraryTest:  GETMEDIA_ASYNC_WITH_FETCH_02: FAIL');
		} else if (value != undefined){
			console.info("MediaLibraryTest: mediapath after is :" + mediapath);
			value.forEach(getMediaData);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETMEDIA_ASYNC_WITH_FETCH_02: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETMEDIA_ASYNC_NONEXISTANT_FETCH_OPTIONS_05
* @tc.name     :Get all MEDIA asset details from folder "data/onelevel/media"
* @tc.desc     :Get MEDIA asset details from folder "data/onelevel/media"
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETMEDIA_ASYNC_NONEXISTANT_FETCH_OPTIONS_05', 0, async function (done) {
	media.getMediaAssets( nonexistantpath, (error, value)=> {
		console.info('MediaLibraryTest: getMediaAssets returned value' + value);
		if (value == undefined){
			console.info('MediaLibraryTest: getMediaAssets returned undefiened' + value);
			console.info('MediaLibraryTest: There are no  files under' + nonexistantpath  );
			expect(true).assertTrue();
			console.info('MediaLibraryTest: GETMEDIA_ASYNC_NONEXISTANT_FETCH_OPTIONS_05: PASS')
		} else if (value != undefined){
			console.info("MediaLibraryTest: mediapath after is :" + nonexistantpath);
			console.info('MediaLibraryTest: GETMEDIA_ASYNC_NONEXISTANT_FETCH_OPTIONS_05: FAIL');
			expect(false).assertTrue();
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETMEDIA_ASYNC_EMPTY_FETCH_OPTIONS_07
* @tc.name     :Get all MEDIA asset details from folder "data/media/onelevel/emptypath"
* @tc.desc     :Get MEDIA asset details from folder "data/media/onelevel/emptypath"
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it('GETMEDIA_ASYNC_EMPTY_FETCH_OPTIONS_07', 0, async function (done) {
	console.info("MediaLibraryTest:  GETMEDIA_ASYNC__EMPTY_FETCH_OPTIONS_PROVIDED_07");
	media.getMediaAssets(EMPTYPATH, (error, value)=> {
		console.info('MediaLibraryTest: getMediaAssets returned an value' + value);
		if (value == undefined){
			console.info('MediaLibraryTest: getMediaAssets returned undefined' + value);
			console.info('MediaLibraryTest: There are no  files under' + mediapath  );
			expect(true).assertTrue();
			console.info('MediaLibraryTest: GETMEDIA_ASYNC_EMPTY_FETCH_OPTIONS_07: PASS');
		} else if (value != undefined){
			console.info("MediaLibraryTest: mediapath after is :" + mediapath);
			value.forEach(getMediaData);
			expect(false).assertTrue();
			console.info('MediaLibraryTest: GETMEDIA_ASYNC_EMPTY_FETCH_OPTIONS_07: FAIL');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETMEDIA_PROMISE_WITHOUT_FETCH_03
* @tc.name     :Get all MEDIA asset details from folder "/data/media/onelevel" with fetch options
[Promise + fetch options]
* @tc.desc     :Get MEDIA asset details from system
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETMEDIA_PROMISE_WITHOUT_FETCH_03', 0, async function (done) {
	const promise = media.getMediaAssets();
	promise.then(async function(data){
		console.info('MediaLibraryTest: Promise successful: getMediaAssets3 returns '+ data.length);
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no Media files in' + '/data/media'  );
			expect(false).assertTrue();
		} else if (data != undefined){
			data.forEach(getMediaData);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETMEDIA_PROMISE_WITHOUT_FETCH_03:  PASS');
		}
	});
	await promise;
	done ();
})
/* *
* @tc.number   : GETMEDIA_PROMISE_WITH_FETCH_04
* @tc.name     :Get all MEDIA asset details from folder "/data/media/onelevel/media"
* @tc.desc     :Get MEDIA asset details from system
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETMEDIA_PROMISE_WITH_FETCH_04', 0, async function (done) {
	const promise = media.getMediaAssets(mediapath);
	promise.then(async function(data){
		if (data == undefined) {
		console.info('MediaLibraryTest: There are no Media files in' + mediapath  );
		expect(false).assertTrue();
		console.info('MediaLibraryTest:  GETMEDIA_PROMISE_WITH_FETCH_04:  FAIL');
	} else if (data != undefined){
		console.info("MediaLibraryTest: mediapath after is :" + mediapath);
		data.forEach(getMediaData);
		console.info('MediaLibraryTest:  GETMEDIA_PROMISE_WITH_FETCH_04:  PASS');
	}
	});
	await promise;
	done();
})
/* * IMAGE ASSETS TEST SCRIPTS
* @tc.number   : GETIMAGE_ASYNC_WITHOUT_FETCH_01
* @tc.name     :Get all Image asset from /data/media [Async calback]
* @tc.desc     :Get all Image asset from /data/media [Async calback]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_ASYNC_WITHOUT_FETCH_01', 0, async function (done) {
	media.getImageAssets((error, value)=> {
		if (value == undefined){
			console.info(' MediaLibraryTest: There are no images under /data/media folder');
			expect(false).assertTrue();
		} else if (value != undefined){
			value.forEach(getImageData);
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITHOUT_FETCH_01: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETIMAGE_ASYNC_WITHOUT_FETCH_BMP_01
* @tc.name     :Get all Image asset from /data/media [Async calback] and check for BMP file
* @tc.desc     :Get all Image asset from /data/media [Async calback] and check for BMP file
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_ASYNC_WITHOUT_FETCH_BMP_01', 0, async function (done) {
	media.getImageAssets((error, value)=> {
		if (value == undefined){
			console.info(' MediaLibraryTest: There are no images under /data/media folder');
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITHOUT_FETCH_BMP_01: FAIL');
		} else if (value != undefined){
			console.info(' MediaLibraryTest:value is :' + value);
			value.forEach(getImageDataBmp);
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITHOUT_FETCH_BMP_01: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETIMAGE_ASYNC_WITHOUT_FETCH_GIF_02
* @tc.name     :Get all Image asset from /data/media [Async calback] and check for GIF file
* @tc.desc     :Get all Image asset from /data/media [Async calback] and check for GIF file
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_ASYNC_WITHOUT_FETCH_GIF_02', 0, async function (done) {
	media.getImageAssets((error, value)=> {
		if (value == undefined){
			console.info(' MediaLibraryTest: There are no images under /data/media folder');
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITHOUT_FETCH_GIF_02: FAIL');
		} else if (value != undefined){
			value.forEach(getImageDataGif);
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITHOUT_FETCH_GIF_02: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETIMAGE_ASYNC_WITHOUT_FETCH_JPG_03
* @tc.name     :Get all Image asset from /data/media [Async calback] and check for JPG file
* @tc.desc     :Get all Image asset from /data/media [Async calback] and check for JPG file
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_ASYNC_WITHOUT_FETCH_JPG_03', 0, async function (done) {
	media.getImageAssets((error, value)=> {
		if (value == undefined){
			console.info(' MediaLibraryTest: There are no images under /data/media folder');
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITHOUT_FETCH_JPG_03: FAIL');
		} else if (value != undefined){
			value.forEach(getImageDataJpg);
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITHOUT_FETCH_JPG_03: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETIMAGE_ASYNC_WITHOUT_FETCH_PNG_04
* @tc.name     :Get all Image asset from /data/media [Async calback] and check for PNG file
* @tc.desc     :Get all Image asset from /data/media [Async calback] and check for PNG file
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_ASYNC_WITHOUT_FETCH_PNG_04', 0, async function (done) {
	media.getImageAssets((error, value)=> {
		if (value == undefined){
			console.info(' MediaLibraryTest: There are no images under /data/media folder');
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITHOUT_FETCH_PNG_04: FAIL');
		} else if (value != undefined){
			value.forEach(getImageDataPng);
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITHOUT_FETCH_PNG_04: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETIMAGE_ASYNC_WITHOUT_FETCH_RAW_05
* @tc.name     :Get all Image asset from /data/media [Async calback] and check for RAW file
* @tc.desc     :Get all Image asset from /data/media [Async calback] and check for RAW file
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_ASYNC_WITHOUT_FETCH_RAW_05', 0, async function (done) {
	media.getImageAssets((error, value)=> {
		if (value == undefined){
			console.info(' MediaLibraryTest: There are no images under /data/media folder');
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITHOUT_FETCH_RAW_05: FAIL');
		} else if (value != undefined){
			value.forEach(getImageDataRaw);
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITHOUT_FETCH_RAW_05: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETIMAGE_ASYNC_WITHOUT_FETCH_HEIF_06
* @tc.name     :Get all Image asset from /data/media [Async calback] and check for HEIF file
* @tc.desc     :Get all Image asset from /data/media [Async calback] and check for HEIF file
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_ASYNC_WITHOUT_FETCH_HEIF_06', 0, async function (done) {
	media.getImageAssets((error, value)=> {
		if (value == undefined){
			console.info(' MediaLibraryTest: There are no images under /data/media folder');
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITHOUT_FETCH_HEIF_06: FAIL');
		} else if (value != undefined){
			value.forEach(getImageDataHeif);
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITHOUT_FETCH_HEIF_06: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETIMAGE_ASYNC_WITHOUT_FETCH_SVG_07
* @tc.name     :Get all Image asset from /data/media [Async calback] and check for SVG file
* @tc.desc     :Get all Image asset from /data/media [Async calback] and check for SVG file
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_ASYNC_WITHOUT_FETCH_SVG_07', 0, async function (done) {
	media.getImageAssets((error, value)=> {
		if (value == undefined){
			console.info(' MediaLibraryTest: There are no images under /data/media folder');
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITHOUT_FETCH_SVG_07: FAIL');
		} else if (value != undefined){
			value.forEach(getImageDataSvg);
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITHOUT_FETCH_SVG_07: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETIMAGE_ASYNC_WITHOUT_FETCH_WEBP_08
* @tc.name     :Get all Image asset from /data/media [Async calback] and check for WEBP file
* @tc.desc     :Get all Image asset from /data/media [Async calback] and check for WEBP file
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_ASYNC_WITHOUT_FETCH_WEBP_08', 0, async function (done) {
	media.getImageAssets((error, value)=> {
		if (value == undefined){
			console.info(' MediaLibraryTest: There are no images under /data/media folder');
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITHOUT_FETCH_WEBP_08: FAIL');
		} else if (value != undefined){
			value.forEach(getImageDataWebp);
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITHOUT_FETCH_WEBP_08: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETIMAGE_ASYNC_WITH_FETCH_02
* @tc.name     :Get all Image asset details from /data/media/onelevel/images
* @tc.desc     :Get all Image asset details from /data/media/onelevel/images
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_ASYNC_WITH_FETCH_02', 0, async function (done) {
	media.getImageAssets(imagespath,(error, value)=> {
		if (value == undefined){
			console.info(' MediaLibraryTest: There are no images in' + imagespath.selections);
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITH_FETCH_02: FAIL');
		}
		else if (value != undefined){
			value.forEach(getImageData);
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITH_FETCH_02: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETIMAGE_ASYNC_WITH_FETCH_BMP_01
* @tc.name     :Get all Image asset details from /data/media/onelevel/images
* @tc.desc     :Get all Image asset details from /data/media/onelevel/images
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_ASYNC_WITH_FETCH_BMP_01', 0, async function (done) {
	media.getImageAssets(BMP,(error, value)=> {
		if (value == undefined){
			console.info(' MediaLibraryTest: There are no images in' + BMP.selections);
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITH_FETCH_BMP_01: FAIL');
		} else if (value != undefined){
			value.forEach(getImageDataBmp);
			console.info(' MediaLibraryTest: There are BMP images in' + BMP.selections);
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITH_FETCH_BMP_01: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETIMAGE_ASYNC_WITH_FETCH_GIF_02
* @tc.name     :Get all Image asset details from /data/media/onelevel/images   and check GIF
* @tc.desc     :Get all Image asset details from /data/media/onelevel/images   and check GIF
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_ASYNC_WITH_FETCH_GIF_02', 0, async function (done) {
	media.getImageAssets(GIF,(error, value)=> {
		if (value == undefined){
			console.info(' MediaLibraryTest: There are no images in' + GIF.selections);
			expect().assertFail();
		} else if (value != undefined){
			value.forEach(getImageDataGif);
			expect(true).assertTrue();
			console.info(' MediaLibraryTest: There are GIF images in' + GIF.selections);
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITH_FETCH_GIF_02: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETIMAGE_ASYNC_WITH_FETCH_JPG_03
* @tc.name     :Get all Image asset details from /data/media/onelevel/images   and check GIF
* @tc.desc     :Get all Image asset details from /data/media/onelevel/images   and check GIF
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_ASYNC_WITH_FETCH_JPG_03', 0, async function (done) {
	media.getImageAssets(JPG,(error, value)=> {
		if (value == undefined){
			console.info(' MediaLibraryTest: There are no images in' + JPG.selections  );
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITH_FETCH_JPG_03: FAIL');
		} else if (value != undefined){
			value.forEach(getImageDataJpg);
			console.info(' MediaLibraryTest: There are JPG images in' + JPG.selections  );
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITH_FETCH_JPG_03: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETIMAGE_ASYNC_WITH_FETCH_PNG_04
* @tc.name     :Get all Image asset details from /data/media/onelevel/images   and check PNG
* @tc.desc     :Get all Image asset details from /data/media/onelevel/images   and check PNG
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_ASYNC_WITH_FETCH_PNG_04', 0, async function (done) {
	media.getImageAssets(PNG,(error, value)=> {
		if (value == undefined){
			console.info(' MediaLibraryTest: There are no images in' + PNG.selections  );
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITH_FETCH_PNG_04: FAIL');
		} else if (value != undefined){
			value.forEach(getImageDataPng);
			console.info(' MediaLibraryTest: There are PNG images in' + PNG.selections  );
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITH_FETCH_PNG_04: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETIMAGE_ASYNC_WITH_FETCH_RAW_05
* @tc.name     :Get all Image asset details from /data/media/onelevel/images   and check RAW
* @tc.desc     :Get all Image asset details from /data/media/onelevel/images   and check RAW
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_ASYNC_WITH_FETCH_RAW_05', 0, async function (done) {
	media.getImageAssets(RAW,(error, value)=> {
		if (value == undefined){
			console.info(' MediaLibraryTest: There are no images in' + RAW.selections  );
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITH_FETCH_RAW_05: FAIL');
		} else if (value != undefined){
			value.forEach(getImageDataRaw);
			console.info(' MediaLibraryTest: There are RAW images in' + RAW.selections  );
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITH_FETCH_RAW_05: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETIMAGE_ASYNC_WITH_FETCH_HEIF_06
* @tc.name     :Get all Image asset details from /data/media/onelevel/images   and check HEIF
* @tc.desc     :Get all Image asset details from /data/media/onelevel/images   and check HEIF
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_ASYNC_WITH_FETCH_HEIF_06', 0, async function (done) {
	media.getImageAssets(HEIF,(error, value)=> {
		if (value == undefined){
			console.info(' MediaLibraryTest: There are no images in' + HEIF.selections  );
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITH_FETCH_HEIF_06: FAIL');
		} else if (value != undefined){
			value.forEach(getImageDataHeif);
			console.info(' MediaLibraryTest: There are HEIF images in' + HEIF.selections  );
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITH_FETCH_HEIF_06: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETIMAGE_ASYNC_WITH_FETCH_SVG_07
* @tc.name     :Get all Image asset details from /data/media/onelevel/images   and check SVG
* @tc.desc     :Get all Image asset details from /data/media/onelevel/images   and check SVG
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_ASYNC_WITH_FETCH_SVG_07', 0, async function (done) {
	media.getImageAssets(SVG,(error, value)=> {
		if (value == undefined){
			console.info(' MediaLibraryTest: There are no images in' + SVG.selections  );
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITH_FETCH_SVG_07: FAIL');
		} else if (value != undefined){
			value.forEach(getImageDataSvg);
			console.info(' MediaLibraryTest: There are SVG images in' + SVG.selections  );
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITH_FETCH_SVG_07: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETIMAGE_ASYNC_WITH_FETCH_WEBP_08
* @tc.name     :Get all Image asset details from /data/media/onelevel/images   and check WEBP
* @tc.desc     :Get all Image asset details from /data/media/onelevel/images   and check WEBP
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_ASYNC_WITH_FETCH_WEBP_08', 0, async function (done) {
	media.getImageAssets(WEBP,(error, value)=> {
		if (value == undefined){
			console.info(' MediaLibraryTest: There are no images in' + WEBP.selections  );
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITH_FETCH_WEBP_08: FAIL');
		} else if (value != undefined){
			value.forEach(getImageDataWebp);
			console.info(' MediaLibraryTest: There are WEBP images in' + WEBP.selections  );
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETIMAGE_ASYNC_WITH_FETCH_WEBP_08: PASS');
		}
	done();
	});
	done();
})
/* *
* @tc.number   : GETIMAGE_PROMISE_WITH_FETCH_03
* @tc.name     :Get all Image asset details from system with Promise and media fetch options
* @tc.desc     :Get image asset details from system
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_PROMISE_WITH_FETCH_03', 0, async function (done) {
	const promise = media.getImageAssets(mediapath);
	promise.then(function(data){
		if (data == undefined) {
			console.info(' MediaLibraryTest: There are no images in' + mediapath.selections);
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETIMAGE_PROMISE_WITH_FETCH_03:  PASS');
		} else if (data != undefined){
			console.info(' MediaLibraryTest: There are images in' + mediapath.selections  );
			data.forEach(getImageData);
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETIMAGE_PROMISE_WITH_FETCH_03:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETIMAGE_PROMISE_WITHOUT_FETCH_04
* @tc.name     :Get all Image asset details from system with Promise without media fetch options
* @tc.desc     :Get all Image asset details from system with Promise without media fetch options
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_PROMISE_WITHOUT_FETCH_04', 0, async function (done) {
	const promise = media.getImageAssets();
	promise.then(function(data){
		if (data == undefined) {
			console.info(' MediaLibraryTest: There are no images in' + '/data/media'  );
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETIMAGE_PROMISE_WITHOUT_FETCH_04:  FAIL');
		} else if (data != undefined){
			data.forEach(getImageData);
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETIMAGE_PROMISE_WITHOUT_FETCH_04:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETIMAGE_PROMISE_WITHOUT_FETCH_BMP_01
* @tc.name     :Get all Image asset details from system with Promise without media fetch options
* @tc.desc     :Get all Image asset details from system with Promise without media fetch options
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_PROMISE_WITHOUT_FETCH_BMP_01', 0, async function (done) {
	const promise = media.getImageAssets();
	promise.then(function(data){
		if (data == undefined) {
			console.info(' MediaLibraryTest: There are no images in' + '/data/media'  );
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETIMAGE_PROMISE_WITHOUT_FETCH_BMP_01:  FAIL');
		} else if (data != undefined){
			data.forEach(getImageDataBmp);
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETIMAGE_PROMISE_WITHOUT_FETCH_BMP_01:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETIMAGE_PROMISE_WITHOUT_FETCH_GIF_02
* @tc.name     :Get all Image asset details from system with Promise without media fetch options
* @tc.desc     :Get all Image asset details from system with Promise without media fetch options
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_PROMISE_WITHOUT_FETCH_GIF_02', 0, async function (done) {
	const promise = media.getImageAssets();
	promise.then(function(data){
		if (data == undefined) {
			console.info(' MediaLibraryTest: There are no images in' + '/data/media'  );
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETIMAGE_PROMISE_WITHOUT_FETCH_GIF_02:  FAIL');
		} else if (data != undefined){
			data.forEach(getImageDataGif);
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETIMAGE_PROMISE_WITHOUT_FETCH_GIF_02:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETIMAGE_PROMISE_WITHOUT_FETCH_JPG_03
* @tc.name     :Get all Image asset details from system with Promise without media fetch options
* @tc.desc     :Get all Image asset details from system with Promise without media fetch options
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_PROMISE_WITHOUT_FETCH_JPG_03', 0, async function (done) {
	const promise = media.getImageAssets();
	promise.then(function(data){
		if (data == undefined) {
			console.info(' MediaLibraryTest: There are no images in' + '/data/media'  );
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETIMAGE_PROMISE_WITHOUT_FETCH_JPG_03:  FAIL');
		} else if (data != undefined){
			data.forEach(getImageDataJpg);
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETIMAGE_PROMISE_WITHOUT_FETCH_JPG_03:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETIMAGE_PROMISE_WITHOUT_FETCH_PNG_04
* @tc.name     :Get all Image asset details from system with Promise without media fetch options
* @tc.desc     :Get all Image asset details from system with Promise without media fetch options
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_PROMISE_WITHOUT_FETCH_PNG_04', 0, async function (done) {
	const promise = media.getImageAssets();
	promise.then(function(data){
		if (data == undefined) {
			console.info(' MediaLibraryTest: There are no images in' + '/data/media'  );
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETIMAGE_PROMISE_WITHOUT_FETCH_PNG_04:  FAIL');
		} else if (data != undefined){
			data.forEach(getImageDataPng);
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETIMAGE_PROMISE_WITHOUT_FETCH_PNG_04:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETIMAGE_PROMISE_WITHOUT_FETCH_RAW_05
* @tc.name     :Get all Image asset details from system with Promise without media fetch options
* @tc.desc     :Get all Image asset details from system with Promise without media fetch options
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_PROMISE_WITHOUT_FETCH_RAW_05', 0, async function (done) {
	const promise = media.getImageAssets();
	promise.then(function(data){
		if (data == undefined) {
			console.info(' MediaLibraryTest: There are no images in' + '/data/media'  );
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETIMAGE_PROMISE_WITHOUT_FETCH_RAW_05:  FAIL');
		} else if (data != undefined){
			data.forEach(getImageDataRaw);
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETIMAGE_PROMISE_WITHOUT_FETCH_RAW_05:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETIMAGE_PROMISE_WITHOUT_FETCH_HEIF_06
* @tc.name     :Get all Image asset details from system with Promise without media fetch options
* @tc.desc     :Get all Image asset details from system with Promise without media fetch options
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_PROMISE_WITHOUT_FETCH_HEIF_06', 0, async function (done) {
	const promise = media.getImageAssets();
	promise.then(function(data){
		if (data == undefined) {
			console.info(' MediaLibraryTest: There are no images in' + '/data/media'  );
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETIMAGE_PROMISE_WITHOUT_FETCH_HEIF_06:  FAIL');
		} else if (data != undefined){
			data.forEach(getImageDataHeif);
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETIMAGE_PROMISE_WITHOUT_FETCH_HEIF_06:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETIMAGE_PROMISE_WITHOUT_FETCH_SVG_07
* @tc.name     :Get all Image asset details from system with Promise without media fetch options
* @tc.desc     :Get all Image asset details from system with Promise without media fetch options
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_PROMISE_WITHOUT_FETCH_SVG_07', 0, async function (done) {
	const promise = media.getImageAssets();
	promise.then(function(data){
		if (data == undefined) {
			console.info(' MediaLibraryTest: There are no images in' + '/data/media'  );
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETIMAGE_PROMISE_WITHOUT_FETCH_SVG_07:  FAIL');
		} else if (data != undefined){
			data.forEach(getImageDataSvg);
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETIMAGE_PROMISE_WITHOUT_FETCH_SVG_07:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETIMAGE_PROMISE_WITHOUT_FETCH_WEBP_08
* @tc.name     :Get all Image asset details from system with Promise without media fetch options
* @tc.desc     :Get all Image asset details from system with Promise without media fetch options
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_PROMISE_WITHOUT_FETCH_WEBP_08', 0, async function (done) {
	const promise = media.getImageAssets();
	promise.then(function(data){
		if (data == undefined) {
			console.info(' MediaLibraryTest: There are no images in' + '/data/media'  );
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETIMAGE_PROMISE_WITHOUT_FETCH_WEBP_08:  FAIL');
		} else if (data != undefined){
			data.forEach(getImageDataWebp);
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETIMAGE_PROMISE_WITHOUT_FETCH_WEBP_08:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETIMAGE_PROMISE_IN_EMPTYPATH_05
* @tc.name     :Get all Image asset details from system with Promise and media fetch options
* @tc.desc     :Get image asset details from system
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_PROMISE_IN_EMPTYPATH_05', 0, async function (done) {
	const promise = media.getImageAssets(EMPTYPATH);
	promise.then(function(data){
		if (data == undefined) {
			console.info(' MediaLibraryTest: There are no images in' + EMPTYPATH.selections);
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETIMAGE_PROMISE_IN_EMPTYPATH_05:  PASS');
		} else if (data != undefined){
			console.info(' MediaLibraryTest: Promise successful: DATA VALUE IS '+ data);
			console.info(' MediaLibraryTest: There are images in' + EMPTYPATH.selections);
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETIMAGE_PROMISE_IN_EMPTYPATH_05:  FAIL');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETIMAGE_CHECK_MIME_MEDIA_TYPE_IMAGE_WITHFETCH_01
* @tc.name     :Get all Image asset details from images folder and check for MIME and MEDIA type
* @tc.desc     :Get all Image asset details from images folder and check for MIME and MEDIA type
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_CHECK_MIME_MEDIA_TYPE_IMAGE_WITHFETCH_01', 0, async function (done) {
	const promise = media.getImageAssets(imagespath);
	promise.then(function(data){
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no audio files in' + imagespath.selections);
			expect().assertFail();
			console.info('MediaLibraryTest: GETIMAGE_CHECK_MIME_MEDIA_TYPE_IMAGE_WITHFETCH_01:  FAIL');
		} else if (data != undefined){
			console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
			data.forEach(getImageDataCheckMimeMediaType);
			expect(true).assertTrue();
			console.info('MediaLibraryTest: GETIMAGE_CHECK_MIME_MEDIA_TYPE_IMAGE_WITHFETCH_01:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETIMAGE_CHECK_MIME_MEDIA_TYPE_BMP_02
* @tc.name     :Get all Image asset details in BMP directory and check for mimetype and media type
* @tc.desc     :Get all Image asset details in BMP directory and check for mimetype and media type
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_CHECK_MIME_MEDIA_TYPE_BMP_02', 0, async function (done) {
	const promise = media.getImageAssets(BMP);
	promise.then(function(data){
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no image files in' + BMP.selections );
			expect().assertFail();
			console.info('MediaLibraryTest:  GETIMAGE_CHECK_MIME_MEDIA_TYPE_BMP_02:  FAIL');
		} else if (data != undefined){
			console.info('MediaLibraryTest: Promise successful: getImageAssets3 returns '+ data.length);
			data.forEach(getBMPImageDataCheckMimeMediaType);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETIMAGE_CHECK_MIME_MEDIA_TYPE_BMP_02:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETIMAGE_CHECK_MIME_MEDIA_TYPE_GIF_03
* @tc.name     :Get all Image asset details in GIF directory and check for mimetype and media type
* @tc.desc     :Get all Image asset details in GIF directory and check for mimetype and media type
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_CHECK_MIME_MEDIA_TYPE_GIF_03', 0, async function (done) {
	const promise = media.getImageAssets(GIF);
	promise.then(function(data){
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no image files in' + GIF.selections  );
			expect().assertFail();
			console.info('MediaLibraryTest:  GETIMAGE_CHECK_MIME_MEDIA_TYPE_GIF_03:  FAIL');
		} else if (data != undefined){
			console.info('MediaLibraryTest: Promise successful: getImageAssets3 returns '+ data.length);
			data.forEach(getGIFImageDataCheckMimeMediaType);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETIMAGE_CHECK_MIME_MEDIA_TYPE_GIF_03:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETIMAGE_CHECK_MIME_MEDIA_TYPE_JPG_04
* @tc.name     :Get all Image asset details in JPG directory and check for mimetype and media type
* @tc.desc     :Get all Image asset details in JPG directory and check for mimetype and media type
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_CHECK_MIME_MEDIA_TYPE_JPG_04', 0, async function (done) {
	const promise = media.getImageAssets(JPG);
	promise.then(function(data){
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no image files in' + JPG.selections  );
			expect().assertFail();
			console.info('MediaLibraryTest:  GETIMAGE_CHECK_MIME_MEDIA_TYPE_JPG_04:  FAIL');
		} else if (data != undefined){
			console.info('MediaLibraryTest: Promise successful: getImageAssets3 returns '+ data.length);
			data.forEach(getJPGImageDataCheckMimeMediaType);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETIMAGE_CHECK_MIME_MEDIA_TYPE_JPG_04:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETIMAGE_CHECK_MIME_MEDIA_TYPE_PNG_05
* @tc.name     :Get all Image asset details in PNG directory and check for mimetype and media type
* @tc.desc     :Get all Image asset details in PNG directory and check for mimetype and media type
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_CHECK_MIME_MEDIA_TYPE_PNG_05', 0, async function (done) {
	const promise = media.getImageAssets(PNG);
	promise.then(function(data){
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no image files in' + PNG.selections  );
			expect().assertFail();
			console.info('MediaLibraryTest:  GETIMAGE_CHECK_MIME_MEDIA_TYPE_PNG_05:  FAIL');
		} else if (data != undefined){
			console.info('MediaLibraryTest: Promise successful: getImageAssets3 returns '+ data.length);
			data.forEach(getPNGImageDataCheckMimeMediaType);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETIMAGE_CHECK_MIME_MEDIA_TYPE_PNG_05:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETIMAGE_CHECK_MIME_MEDIA_TYPE_RAW_06
* @tc.name     :Get all Image asset details in RAW directory and check for mimetype and media type
* @tc.desc     :Get all Image asset details in RAW directory and check for mimetype and media type
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_CHECK_MIME_MEDIA_TYPE_RAW_06', 0, async function (done) {
	const promise = media.getImageAssets(RAW);
	promise.then(function(data){
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no image files in' + RAW.selections  );
			expect().assertFail();
			console.info('MediaLibraryTest:  GETIMAGE_CHECK_MIME_MEDIA_TYPE_RAW_06:  FAIL');
		} else if (data != undefined){
			console.info('MediaLibraryTest: Promise successful: getImageAssets3 returns '+ data.length);
			data.forEach(getRawImageDataCheckMimeMediaType);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETIMAGE_CHECK_MIME_MEDIA_TYPE_RAW_06:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETIMAGE_CHECK_MIME_MEDIA_TYPE_HEIF_07
* @tc.name     :Get all Image asset details in HEIF directory and check for mimetype and media type
* @tc.desc     :Get all Image asset details in HEIF directory and check for mimetype and media type
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_CHECK_MIME_MEDIA_TYPE_HEIF_07', 0, async function (done) {
	const promise = media.getImageAssets(HEIF);
	promise.then(function(data){
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no image files in' + HEIF.selections  );
			expect().assertFail();
			console.info('MediaLibraryTest:  GETIMAGE_CHECK_MIME_MEDIA_TYPE_HEIF_07:  FAIL');
		} else if (data != undefined){
			console.info('MediaLibraryTest: Promise successful: getImageAssets3 returns '+ data.length);
			data.forEach(getHeifImageDataCheckMimeMediaType);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETIMAGE_CHECK_MIME_MEDIA_TYPE_HEIF_07:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETIMAGE_CHECK_MIME_MEDIA_TYPE_SVG_08
* @tc.name     :Get all Image asset details in SVG directory and check for mimetype and media type
* @tc.desc     :Get all Image asset details in SVG directory and check for mimetype and media type
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_CHECK_MIME_MEDIA_TYPE_SVG_08', 0, async function (done) {
	const promise = media.getImageAssets(SVG);
	promise.then(function(data){
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no image files in' + SVG.selections  );
			expect().assertFail();
			console.info('MediaLibraryTest:  GETIMAGE_CHECK_MIME_MEDIA_TYPE_SVG_08:  FAIL');
		} else if (data != undefined){
			console.info('MediaLibraryTest: Promise successful: getImageAssets3 returns '+ data.length);
			data.forEach(getSvgImageDataCheckMimeMediaType);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETIMAGE_CHECK_MIME_MEDIA_TYPE_SVG_08:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETIMAGE_CHECK_MIME_MEDIA_TYPE_WEBP_09
* @tc.name     :Get all Image asset details in WEBP directory and check for mimetype and media type
* @tc.desc     :Get all Image asset details in WEBP directory and check for mimetype and media type
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGE_CHECK_MIME_MEDIA_TYPE_WEBP_09', 0, async function (done) {
	const promise = media.getImageAssets(WEBP);
	promise.then(function(data){
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no image files in' + WEBP.selections  );
			expect().assertFail();
			console.info('MediaLibraryTest:  GETIMAGE_CHECK_MIME_MEDIA_TYPE_WEBP_09:  FAIL');
		} else if (data != undefined){
			console.info('MediaLibraryTest: Promise successful: getImageAssets3 returns '+ data.length);
			data.forEach(getWebpImageDataCheckMimeMediaType);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETIMAGE_CHECK_MIME_MEDIA_TYPE_WEBP_09:  PASS');
		}
	});
	await promise;
	done();
})
/* * AUDIO ASSETS TEST SCRIPTS
* @tc.number   : GETAUDIO_ASYNC_WITHOUT_FETCH_01
* @tc.name     :Get all AUDIO asset from /data/media [Async callback]
* @tc.desc     :Get AUDIO asset from system
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_ASYNC_WITHOUT_FETCH_01', 0, async function (done) {
	media.getAudioAssets((error, value1)=> {
	if (value1 == undefined){
		console.info('MediaLibraryTest: There are no audio files under /data/media folder');
		expect().assertFail();
		console.info('MediaLibraryTest:  GETAUDIO_ASYNC_WITHOUT_FETCH_01: FAIL');
	} else if (value1 != undefined){
		console.info('MediaLibraryTest: getAudioAssets1 returns '+ value1.length);
		value1.forEach(getAudioData);
		expect(true).assertTrue();
		console.info('MediaLibraryTest:  GETAUDIO_ASYNC_WITHOUT_FETCH_01: PASS');
	}
	done();
	});
	done();
})
/* *
* @tc.number   : GETAUDIO_ASYNC_WITHOUT_FETCH_WAV_01
* @tc.name     :Get all AUDIO asset from /data/media and check whether its a wav file [Async callback]
* @tc.desc     :Get all AUDIO asset from /data/media and check whether its a wav file [Async callback]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_ASYNC_WITHOUT_FETCH_WAV_01', 0, async function (done) {
	media.getAudioAssets((error, value1)=> {
		if (value1 == undefined){
			console.info('MediaLibraryTest: There are no audio files under /data/media folder');
			expect().assertFail();
			console.info('MediaLibraryTest:  GETAUDIO_ASYNC_WITHOUT_FETCH_WAV_01: FAIL');
		} else if (value1 != undefined){
			console.info('MediaLibraryTest: getAudioAssets1 returns '+ value1.length);
			value1.forEach(getAudioDatawav);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETAUDIO_ASYNC_WITHOUT_FETCH_WAV_01: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETAUDIO_ASYNC_WITHOUT_FETCH_AAC_02
* @tc.name     :Get all AUDIO asset from /data/media and check whether its aac file [Async callback]
* @tc.desc     :Get all AUDIO asset from /data/media and check whether its aac file [Async callback]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_ASYNC_WITHOUT_FETCH_AAC_02', 0, async function (done) {
	media.getAudioAssets((error, value1)=> {
		if (value1 == undefined){
			console.info('MediaLibraryTest: There are no audio files under /data/media folder');
			expect().assertFail();
			console.info('MediaLibraryTest:  GETAUDIO_ASYNC_WITHOUT_FETCH_AAC_02: FAIL');
		} else if (value1 != undefined){
			console.info('MediaLibraryTest: getAudioAssets1 returns '+ value1.length);
			value1.forEach(getAudioDataAac);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETAUDIO_ASYNC_WITHOUT_FETCH_AAC_02: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETAUDIO_ASYNC_WITHOUT_FETCH_FLAC_04
* @tc.name     :Get all AUDIO asset from /data/media and check whether its flac file [Async callback]
* @tc.desc     :Get all AUDIO asset from /data/media and check whether its flac file [Async callback]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_ASYNC_WITHOUT_FETCH_FLAC_04', 0, async function (done) {
	media.getAudioAssets((error, value1)=> {
		if (value1 == undefined){
			console.info('MediaLibraryTest: There are no audio files under /data/media folder');
			expect().assertFail();
			console.info('MediaLibraryTest:  GETAUDIO_ASYNC_WITHOUT_FETCH_FLAC_04: FAIL');
		} else if (value1 != undefined){
			console.info('MediaLibraryTest: getAudioAssets1 returns '+ value1.length);
			value1.forEach(getAudioDataFlac);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETAUDIO_ASYNC_WITHOUT_FETCH_FLAC_04: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETAUDIO_ASYNC_WITHOUT_FETCH_MP3_03
* @tc.name     :Get all AUDIO asset from /data/media and check whether its mp3 file [Async callback]
* @tc.desc     :Get all AUDIO asset from /data/media and check whether its mp3 file [Async callback]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_ASYNC_WITHOUT_FETCH_MP3_03', 0, async function (done) {
	media.getAudioAssets((error, value1)=> {
		if (value1 == undefined){
			console.info('MediaLibraryTest: There are no audio files under /data/media folder');
			expect().assertFail();
			console.info('MediaLibraryTest:  GETAUDIO_ASYNC_WITHOUT_FETCH_MP3_03: FAIL');
		} else if (value1 != undefined){
			console.info('MediaLibraryTest: getAudioAssets1 returns '+ value1.length);
			value1.forEach(getAudioDataMp3);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETAUDIO_ASYNC_WITHOUT_FETCH_MP3_03: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETAUDIO_ASYNC_WITHOUT_FETCH_OGG_05
* @tc.name     :Get all AUDIO asset from /data/media and check whether its OGG file [Async callback]
* @tc.desc     :Get all AUDIO asset from /data/media and check whether its OGG file [Async callback]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_ASYNC_WITHOUT_FETCH_0GG_05', 0, async function (done) {
	media.getAudioAssets((error, value1)=> {
		if (value1 == undefined){
			console.info('MediaLibraryTest: There are no audio files under /data/media folder');
			expect().assertFail();
			console.info('MediaLibraryTest:  GETAUDIO_ASYNC_WITHOUT_FETCH_OGG_05: FAIL');
		} else if (value1 != undefined){
			console.info('MediaLibraryTest: getAudioAssets1 returns '+ value1.length);
			value1.forEach(getAudioDataOGG);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETAUDIO_ASYNC_WITHOUT_FETCH_OGG_05: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETAUDIO_ASYNC_WITH_FETCH_02
* @tc.name     :Get all Audio asset details from fetch options [ ]
* @tc.desc     :Get all Audio asset details from fetch options [ ]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_ASYNC_WITH_FETCH_02', 0, async function (done) {
	media.getAudioAssets(audiopath, (error, value)=> {
		if (value == undefined){
			console.info('MediaLibraryTest: There are no audio files under' + audiopath.selections  );
			expect().assertFail();
			console.info('MediaLibraryTest:  GETAUDIO_ASYNC_WITH_FETCH_02: FAIL');
		} else if (value != undefined){
			console.info('MediaLibraryTest: getAudioAssets2 returns '+ value.length);
			value.forEach(getAudioData);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETAUDIO_ASYNC_WITH_FETCH_02: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETAUDIO_ASYNC_WITH_FETCH_WAV_01
* @tc.name     :Get all Audio asset details from fetch options
* @tc.desc     :Get all Audio asset details from fetch options
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_ASYC_FETCH_WAV_01', 0, async function (done) {
	media.getAudioAssets(WAV, (error, value)=> {
		if (value == undefined){
			console.info('MediaLibraryTest: There are no audio files under' + WAV.selections  );
			expect().assertFail();
			console.info('MediaLibraryTest:  GETAUDIO_ASYC_FETCH_WAV_01: FAIL');
		} else if (value != undefined){
			console.info('MediaLibraryTest: getAudioAssets2 returns '+ value.length);
			value.forEach(getAudioDatawav);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETAUDIO_ASYC_FETCH_WAV_01: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETAUDIO_ASYNC_WITH_FETCH_AAC_02
* @tc.name     :Get all Audio asset details from fetch options  & check for aac file
* @tc.desc     :Get all Audio asset details from fetch options  & check for aac file
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_ASYNC_WITH_FETCH_AAC_02', 0, async function (done) {
	media.getAudioAssets(AAC, (error, value)=> {
		if (value == undefined){
			console.info('MediaLibraryTest: There are no audio files under' + AAC.selections);
			expect().assertFail();
			console.info('MediaLibraryTest:  GETAUDIO_ASYNC_WITH_FETCH_AAC_02: FAIL');
		} else if (value != undefined){
			console.info('MediaLibraryTest: getAudioAssets2 returns '+ value.length);
			value.forEach(getAudioDataAac);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETAUDIO_ASYNC_WITH_FETCH_AAC_02: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETAUDIO_ASYNC_WITH_FETCH_MP3_03
* @tc.name     :Get all Audio asset details from fetch options  & check for mp3 file
* @tc.desc     :Get all Audio asset details from fetch options & check for mp3 file
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_ASYNC_WITH_FETCH_MP3_03', 0, async function (done) {
	media.getAudioAssets(MP3, (error, value)=> {
		if (value == undefined){
			console.info('MediaLibraryTest: There are no audio files under' + MP3.selections);
			expect().assertFail();
			console.info('MediaLibraryTest:  GETAUDIO_ASYNC_WITH_FETCH_MP3_03: FAIL');
		} else if (value != undefined){
			console.info('MediaLibraryTest: getAudioAssets2 returns '+ value.length);
			value.forEach(getAudioDataMp3);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETAUDIO_ASYNC_WITH_FETCH_MP3_03: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETAUDIO_ASYNC_WITH_FETCH_FLAC_04
* @tc.name     :Get all Audio asset details from fetch options [ ] & check for flac file
* @tc.desc     :Get all Audio asset details from fetch options [ ] & check for flac file
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_ASYNC_WITH_FETCH_FLAC_04', 0, async function (done) {
	media.getAudioAssets(FLAC, (error, value)=> {
		if (value == undefined){
			console.info('MediaLibraryTest: There are no audio files under' + FLAC.selections  );
			expect().assertFail();
			console.info('MediaLibraryTest:  GETAUDIO_ASYNC_WITH_FETCH_FLAC_04: FAIL');
		} else if (value != undefined){
			console.info('MediaLibraryTest: getAudioAssets2 returns '+ value.length);
			value.forEach(getAudioDataFlac);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETAUDIO_ASYNC_WITH_FETCH_FLAC_04: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETAUDIO_ASYNC_WITH_FETCH_0GG_05
* @tc.name     :Get all Audio asset details from fetch options [ ] & check for flac file
* @tc.desc     :Get all Audio asset details from fetch options [ ] & check for flac file
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_ASYNC_WITH_FETCH_0GG_05', 0, async function (done) {
	media.getAudioAssets(OGG, (error, value)=> {
		if (value == undefined){
			console.info('MediaLibraryTest: There are no audio files under' + OGG.selections  );
			expect().assertFail();
			console.info('MediaLibraryTest:  GETAUDIO_ASYNC_WITH_FETCH_0GG_05: FAIL');
		} else if (value != undefined){
			console.info('MediaLibraryTest: getAudioAssets2 returns '+ value.length);
			value.forEach(getAudioDataOGG);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETAUDIO_ASYNC_WITH_FETCH_0GG_05: PASS');
		}
		done();
	});
	done();
})
/*
//* *
* @tc.number   : GET_AUDIO_ASSETS_WITH_FETCH_03
* @tc.name     :Get all Audio asset details from system with Promise and fetch options from
specific folder (/data/media/onelevel/audio)
* @tc.desc     :Get all Audio asset details from system with Promise and fetch options from
specific folder (/data/media/onelevel/audio)
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GET_AUDIO_ASSETS_WITH_FETCH_03', 0, async function (done) {
	const promise = media.getAudioAssets(audiopath);
	promise.then(function(data){
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no audio files in' + audiopath.selections);
			expect().assertFail();
			console.info('MediaLibraryTest:  GET_AUDIO_ASSETS_WITH_FETCH_03:  FAIL');
		} else if (data != undefined){
			console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
			data.forEach(getAudioData);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GET_AUDIO_ASSETS_WITH_FETCH_03:  PASS');
		}
	});
	await promise;
	done ();
})
/* *
* @tc.number   : GETAUDIO_PROMISE_WITHFETCH_WAV_01
* @tc.name     :Get all Audio asset details from media/data/onelevel/audio using Promise with
fetch options and check for wav file
* @tc.desc     :Get all Audio asset details from media/data/onelevel/audio using Promise with
fetch options and check for wav file
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_PROMISE_WITHFETCH_WAV_01', 0, async function (done) {
	const promise = media.getAudioAssets(WAV);
	promise.then(function(data){
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no audio files in' + WAV.selections  );
			expect().assertFail();
			console.info('MediaLibraryTest:  GETAUDIO_PROMISE_WITHFETCH_WAV_01:  FAIL');
		} else if (data != undefined){
			console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
			data.forEach(getAudioDatawav);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETAUDIO_PROMISE_WITHFETCH_WAV_01:  PASS');
		}
	});
	await promise;
	done ();
})
/* *
* @tc.number   : GETAUDIO_PROMISE_WITHFETCH_AAC_02
* @tc.name     :Get all Audio asset details from media/data/onelevel/audio using Promise with
fetch options and check for aac file
* @tc.desc     :Get all Audio asset details from media/data/onelevel/audio using Promise with
fetch options and check for aac file
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_PROMISE_WITHFETCH_AAC_02', 0, async function (done) {
	const promise = media.getAudioAssets(AAC);
	promise.then(function(data){
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no audio files in' + AAC.selections  );
			expect().assertFail();
			console.info('MediaLibraryTest:  GETAUDIO_PROMISE_WITHFETCH_AAC_02:  FAIL');
		} else if (data != undefined){
			console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
			data.forEach(getAudioDataAac);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETAUDIO_PROMISE_WITHFETCH_AAC_02:  PASS');
		}
	});
	await promise;
	done ();
})
/* *
* @tc.number   : GETAUDIO_PROMISE_WITHFETCH_MP3_03
* @tc.name     :Get all Audio asset details from media/data/onelevel/audio using Promise with
fetch options and check for mp3 file
* @tc.desc     :Get all Audio asset details from media/data/onelevel/audio using Promise with
fetch options and check for mp3 file
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_PROMISE_WITHFETCH_MP3_03', 0, async function (done) {
	const promise = media.getAudioAssets(MP3);
	promise.then(function(data){
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no audio files in' + MP3.selections  );
			expect().assertFail();
			console.info('MediaLibraryTest:  GETAUDIO_PROMISE_WITHFETCH_MP3_03:  FAIL');
		} else if (data != undefined){
			console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
			data.forEach(getAudioDataMp3);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETAUDIO_PROMISE_WITHFETCH_MP3_03:  PASS');
		}
	});
	await promise;
	done ();
})
/* *
* @tc.number   : GETAUDIO_PROMISE_WITHFETCH_FLAC_04
* @tc.name     :Get all Audio asset details from media/data/onelevel using Promise with
fetch options and check for flac file
* @tc.desc     :Get all Audio asset details from media/data/onelevel using Promise with
fetch options and check for flac file
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_PROMISE_WITHFETCH_FLAC_04', 0, async function (done) {
	const promise = media.getAudioAssets(FLAC);
	promise.then(function(data){
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no audio files in' + FLAC.selections  );
			expect().assertFail();
			console.info('MediaLibraryTest:  GETAUDIO_PROMISE_WITHFETCH_FLAC_04:  FAIL');
		} else if (data != undefined){
			console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
			data.forEach(getAudioDataFlac);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETAUDIO_PROMISE_WITHFETCH_FLAC_04:  PASS');
		}
	});
	await promise;
	done ();
})
/* *
* @tc.number   : GETAUDIO_PROMISE_WITHFETCH_OGG_05
* @tc.name     :Get all Audio asset details from media/data/onelevel using Promise with
fetch options and check for flac file
* @tc.desc     :Get all Audio asset details from media/data/onelevel using Promise with
fetch options and check for flac file
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_PROMISE_WITHFETCH_OGG_05', 0, async function (done) {
	const promise = media.getAudioAssets(OGG);
	promise.then(function(data){
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no audio files in' + OGG.selections  );
			expect().assertFail();
			console.info('MediaLibraryTest:  GETAUDIO_PROMISE_WITHFETCH_OGG_05:  FAIL');
		} else if (data != undefined){
			console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
			data.forEach(getAudioDataFlac);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETAUDIO_PROMISE_WITHFETCH_OGG_05:  PASS');
		}
	});
	await promise;
	done ();
})
/* *
* @tc.number   : GET_AUDIO_ASSETS_WITHOUT_FETCH_04
* @tc.name     :Get all Audio asset details   using promise without fetch options
* @tc.desc     :Get all Audio asset details   using promise without fetch options
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_04', 0, async function (done) {
	const promise = media.getAudioAssets();
	promise.then(function(data1){
		if (data1 == undefined) {
			console.info('MediaLibraryTest: There are no audio files in' + '/data/media'  );
			expect().assertFail();
			console.info('MediaLibraryTest:  GET_AUDIO_ASSETS_WITHOUT_FETCH_04:  FAIL');
		} else if (data1 != undefined){
			console.info('MediaLibraryTest: Promise successful: getAudioAssets4 returns '+ data1.length);
			data1.forEach(getAudioData);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GET_AUDIO_ASSETS_WITHOUT_FETCH_04:  PASS');
		}
	});
	await promise;
	done ();
})
/* *
* @tc.number   : GETAUDIO_PROMISE_OUT_FETCH_WAV_01
* @tc.name     :Get all Audio asset details   using promise without fetch options and check for wav file
* @tc.desc     :Get all Audio asset details   using promise without fetch options and check for wav file
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_PROMISE_OUT_FETCH_WAV_01', 0, async function (done) {
	const promise = media.getAudioAssets();
	promise.then(function(data1){
		if (data1 == undefined) {
			console.info('MediaLibraryTest: There are no audio files in' + '/data/media'  );
			expect().assertFail();
			console.info('MediaLibraryTest:  GETAUDIO_PROMISE_OUT_FETCH_WAV_01:  FAIL');
		} else if (data1 != undefined){
			console.info('MediaLibraryTest: Promise successful: getAudioAssets4 returns '+ data1.length);
			data1.forEach(getAudioDatawav);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETAUDIO_PROMISE_OUT_FETCH_WAV_01:  PASS');
		}
	});
	await promise;
	done ();
})
/* *
* @tc.number   : GETAUDIO_PROMISE_OUT_FETCH_AAC_02
* @tc.name     :Get all Audio asset details  using promise without fetch options & check for aac file
* @tc.desc     :Get all Audio asset details  using promise without fetch options & check for aac file
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_PROMISE_OUT_FETCH_AAC_02', 0, async function (done) {
	const promise = media.getAudioAssets();
	promise.then(function(data1){
		if (data1 == undefined) {
			console.info('MediaLibraryTest: There are no audio files in' + '/data/media'  );
			expect().assertFail();
			console.info('MediaLibraryTest:  GETAUDIO_PROMISE_OUT_FETCH_AAC_02:  FAIL');
		} else if (data1 != undefined){
			console.info('MediaLibraryTest: Promise successful: getAudioAssets4 returns '+ data1.length);
			data1.forEach(getAudioDataAac);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETAUDIO_PROMISE_OUT_FETCH_AAC_02:  PASS');
		}
	});
	await promise;
	done ();
})
/* *
* @tc.number   : GETAUDIO_PROMISE_OUT_FETCH_MP3_03
* @tc.name     :Get all Audio asset details   using promise without fetch options and check for MP3 file
* @tc.desc     :Get all Audio asset details   using promise without fetch options and check for MP3 file
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_PROMISE_OUT_FETCH_MP3_03', 0, async function (done) {
	const promise = media.getAudioAssets();
	promise.then(function(data1){
		if (data1 == undefined) {
			console.info('MediaLibraryTest: There are no audio files in' + '/data/media'  );
			expect().assertFail();
			console.info('MediaLibraryTest:  GETAUDIO_PROMISE_OUT_FETCH_MP3_03:  FAIL');
		} else if (data1 != undefined){
			console.info('MediaLibraryTest: Promise successful: getAudioAssets4 returns '+ data1.length);
			data1.forEach(getAudioDataMp3);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETAUDIO_PROMISE_OUT_FETCH_MP3_03:  PASS');
		}
	});
	await promise;
	done ();
})
/* *
* @tc.number   : GETAUDIO_PROMISE_OUT_FETCH_FLAC_04
* @tc.name     :Get all Audio asset details   using promise without fetch options and check for FLAC file
* @tc.desc     :Get all Audio asset details   using promise without fetch options and check for FLAC file
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_PROMISE_OUT_FETCH_FLAC_04', 0, async function (done) {
	const promise = media.getAudioAssets();
	promise.then(function(data1){
		if (data1 == undefined) {
			console.info('MediaLibraryTest: There are no audio files in' + '/data/media'  );
			expect().assertFail();
			console.info('MediaLibraryTest:  GETAUDIO_PROMISE_OUT_FETCH_FLAC_04:  FAIL');
		} else if (data1 != undefined){
			console.info('MediaLibraryTest: Promise successful: getAudioAssets4 returns '+ data1.length);
			data1.forEach(getAudioDataFlac);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETAUDIO_PROMISE_OUT_FETCH_FLAC_04:  PASS');
		}
	});
	await promise;
	done ();
})
/* *
* @tc.number   : GETAUDIO_PROMISE_OUT_FETCH_OGG_05
* @tc.name     :Get all Audio asset details   using promise without fetch options and check for FLAC file
* @tc.desc     :Get all Audio asset details   using promise without fetch options and check for FLAC file
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_PROMISE_OUT_FETCH_OGG_05', 0, async function (done) {
	const promise = media.getAudioAssets();
	promise.then(function(data1){
		if (data1 == undefined) {
			console.info('MediaLibraryTest: There are no audio files in' + '/data/media'  );
			expect().assertFail();
			console.info('MediaLibraryTest:  GETAUDIO_PROMISE_OUT_FETCH_OGG_05:  FAIL');
		} else if (data1 != undefined){
			console.info('MediaLibraryTest: Promise successful: getAudioAssets4 returns '+ data1.length);
			data1.forEach(getAudioDataOGG);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETAUDIO_PROMISE_OUT_FETCH_OGG_05:  PASS');
		}
	});
	await promise;
	done ();
})
/* *
* @tc.number   : GET_AUDIO_ASSETS_NONEXISTANT_PATH_05
* @tc.name     :Get all Audio asset details from system in Nonexistent folder
* @tc.desc     :Get Audio asset details from system in Nonexistent folder
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_05', 0, async function (done) {
	const promise = media.getAudioAssets(nonexistantpath);
	promise.then(function(data){
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no audio files in' + nonexistantpath.selections  );
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GET_AUDIO_ASSETS_NONEXISTANT_PATH_05:  PASS');
		} else if (data != undefined){
			expect().assertFail();
			console.info('MediaLibraryTest:  GET_AUDIO_ASSETS_NONEXISTANT_PATH_05:  FAIL');
		}
	});
	await promise;
	done ();
})
/* *
* @tc.number   : GETAUDIO_CHECK_MIME_MEDIA_TYPE_AUDIO__01
* @tc.name     :Get all Audio asset details in audio directory and check for mimetype and media type
* @tc.desc     :Get all Audio asset details in audio directory and check for mimetype and media type
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_CHECK_MIME_MEDIA_TYPE_AUDIO__01', 0, async function (done) {
	const promise = media.getAudioAssets(audiopath);
	promise.then(function(data){
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no audio files in' + audiopath.selections  );
			expect().assertFail();
			console.info('MediaLibraryTest:  GETAUDIO_CHECK_MIME_MEDIA_TYPE_AUDIO__01:  FAIL');
		} else if (data != undefined){
			console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
			data.forEach(getAudioDataCheckMimeMediaType);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETAUDIO_CHECK_MIME_MEDIA_TYPE_AUDIO__01:  PASS');
		}
	});
	await promise;
	done ();
})
/* *
* @tc.number   : GETAUDIO_CHECK_MIME_MEDIA_TYPE_WAV__02
* @tc.name     :Get all Audio asset details in audio directory and check for mimetype and media type
* @tc.desc     :Get all Audio asset details in audio directory and check for mimetype and media type
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_CHECK_MIME_MEDIA_TYPE_WAV__02', 0, async function (done) {
	const promise = media.getAudioAssets(WAV);
	promise.then(function(data){
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no audio files in' + WAV.selections  );
			expect().assertFail();
			console.info('MediaLibraryTest: testcase_S GETAUDIO_CHECK_MIME_MEDIA_TYPE_WAV__02:  FAIL');
		} else if (data != undefined){
			console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
			data.forEach(getAudioDatawavCheckMimeMediaType);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETAUDIO_CHECK_MIME_MEDIA_TYPE_WAV__02:  PASS');
		}
	});
	await promise;
	done ();
})
/* *
* @tc.number   : GETAUDIO_CHECK_MIME_MEDIA_TYPE_AAC__03
* @tc.name     :Get all Audio asset details in audio directory and check for mimetype and media type
* @tc.desc     :Get all Audio asset details in audio directory and check for mimetype and media type
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_CHECK_MIME_MEDIA_TYPE_AAC__03', 0, async function (done) {
	const promise = media.getAudioAssets(AAC);
	promise.then(function(data){
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no audio files in' + AAC.selections  );
			expect().assertFail();
			console.info('MediaLibraryTest:  GETAUDIO_CHECK_MIME_MEDIA_TYPE_AAC__03:  FAIL');
		} else if (data != undefined){
			console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
			data.forEach(getAudioDataAacCheckMimeMediaType);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETAUDIO_CHECK_MIME_MEDIA_TYPE_AAC__03:  PASS');
		}
	});
	await promise;
	done ();
})
/* *
* @tc.number   : GETAUDIO_CHECK_MIME_MEDIA_TYPE_MP3__04
* @tc.name     :Get all Audio asset details in audio directory and check for mimetype and media type
* @tc.desc     :Get all Audio asset details in audio directory and check for mimetype and media type
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_CHECK_MIME_MEDIA_TYPE_MP3__04', 0, async function (done) {
	const promise = media.getAudioAssets(MP3);
	promise.then(function(data){
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no audio files in' + MP3.selections  );
			expect().assertFail();
			console.info('MediaLibraryTest:  GETAUDIO_CHECK_MIME_MEDIA_TYPE_MP3__04:  FAIL');
		} else if (data != undefined){
			console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
			data.forEach(getAudioDataMp3CheckMimeMediaType);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETAUDIO_CHECK_MIME_MEDIA_TYPE_MP3__04:  PASS');
		}
	});
	await promise;
	done ();
})
/* *
* @tc.number   : GETAUDIO_CHECK_MIME_MEDIA_TYPE_FLAC__05
* @tc.name     :Get all Audio asset details in audio directory and check for mimetype and media type
* @tc.desc     :Get all Audio asset details in audio directory and check for mimetype and media type
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_CHECK_MIME_MEDIA_TYPE_FLAC__05', 0, async function (done) {
	const promise = media.getAudioAssets(FLAC);
	promise.then(function(data){
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no audio files in' + FLAC.selections  );
			expect().assertFail();
			console.info('MediaLibraryTest:  GETAUDIO_CHECK_MIME_MEDIA_TYPE_FLAC__05:  FAIL');
		} else if (data != undefined){
			console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
			data.forEach(getAudioDataFlacCheckMimeMediaType);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETAUDIO_CHECK_MIME_MEDIA_TYPE_FLAC__05:  PASS');
		}
	});
	await promise;
	done ();
})
/* *
* @tc.number   : GETAUDIO_CHECK_MIME_MEDIA_TYPE_OGG__06
* @tc.name     :Get all Audio asset details in audio directory and check for mimetype and media type
* @tc.desc     :Get all Audio asset details in audio directory and check for mimetype and media type
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETAUDIO_CHECK_MIME_MEDIA_TYPE_OGG__06', 0, async function (done) {
	const promise = media.getAudioAssets(OGG);
	promise.then(function(data){
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no audio files in' + OGG.selections  );
			expect().assertFail();
			console.info('MediaLibraryTest:  GETAUDIO_CHECK_MIME_MEDIA_TYPE_OGG__06:  FAIL');
		} else if (data != undefined){
			console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
			data.forEach(getAudioDataFlacCheckMimeMediaType);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETAUDIO_CHECK_MIME_MEDIA_TYPE_OGG__06:  PASS');
		}
	});
	await promise;
	done ();
})
/* * VIDEO ASSETS TEST SCRIPTS
* @tc.number   : GETVIDEO_ASYNC_WITHOUT_FETCH_01
* @tc.name     :Get all VIDEO asset from /data/media using async callback
* @tc.desc     :Get all VIDEO asset from /data/media using async callback
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_ASYNC_WITHOUT_FETCH_01', 0, async function (done) {
	media.getVideoAssets((error, value)=> {
		if (value == undefined){
			console.info('MediaLibraryTest: There are no video files under /data/media folder');
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_ASYNC_WITHOUT_FETCH_01:FAIL');
		} else if (value != undefined){
			value.forEach(getVideoData);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_ASYNC_WITHOUT_FETCH_01:PASS');
		}
	done();
	});
	done();
})
/* *
* @tc.number   : GETVIDEO_ASYNC_WITHOUT_FETCH_3PG_01
* @tc.name     :Get all VIDEO asset from /data/media using async callback and check 3gp file metadata
* @tc.desc     :Get all VIDEO asset from /data/media using async callback and check 3gp file metadata
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_ASYNC_WITHOUT_FETCH_3PG_01', 0, async function (done) {
	media.getVideoAssets((error, value)=> {
		if (value == undefined){
			console.info('MediaLibraryTest: There are no video files under /data/media folder');
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_ASYNC_WITHOUT_FETCH_3PG_01:FAIL');
		} else if (value != undefined){
			value.forEach(getVideoData3gp);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_ASYNC_WITHOUT_FETCH_3PG_01:PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETVIDEO_ASYNC_WITHOUT_FETCH_MOV_01
* @tc.name     :Get all VIDEO asset from /data/media using async callback and check MOV file metadata
* @tc.desc     :Get all VIDEO asset from /data/media using async callback and check MOV file metadata
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_ASYNC_WITHOUT_FETCH_MOV_02', 0, async function (done) {
	media.getVideoAssets((error, value)=> {
		if (value == undefined){
			console.info('MediaLibraryTest: There are no video files under /data/media folder');
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_ASYNC_WITHOUT_FETCH_MOV_02:FAIL');
		} else if (value != undefined){
			value.forEach(getVideoDataMov);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_ASYNC_WITHOUT_FETCH_MOV_02:PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETVIDEO_ASYNC_WITHOUT_FETCH_MP4_03
* @tc.name     :Get all VIDEO asset from /data/media using async callback and check MP4 file metadata
* @tc.desc     :Get all VIDEO asset from /data/media using async callback and check MP4 file metadata
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_ASYNC_WITHOUT_FETCH_MP4_03', 0, async function (done) {
	media.getVideoAssets((error, value)=> {
		if (value == undefined){
			console.info('MediaLibraryTest: There are no video files under /data/media folder');
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_ASYNC_WITHOUT_FETCH_MP4_03:FAIL');
		} else if (value != undefined){
			value.forEach(getVideoDataMP4);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_ASYNC_WITHOUT_FETCH_MP4_03:PASS');
		}
	done();
	});
	done();
})
/* *
* @tc.number   : GETVIDEO_ASYNC_WITHOUT_FETCH_MPG_04
* @tc.name     :Get all VIDEO asset from /data/media using async callback and check MPG file metadata
* @tc.desc     :Get all VIDEO asset from /data/media using async callback and check MPG file metadata
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_ASYNC_WITHOUT_FETCH_MPG_04', 0, async function (done) {
	media.getVideoAssets((error, value)=> {
		if (value == undefined){
			console.info('MediaLibraryTest: There are no video files under /data/media folder');
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_ASYNC_WITHOUT_FETCH_MPG_04:FAIL');
		} else if (value != undefined){
			value.forEach(getVideoDataMpg);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_ASYNC_WITHOUT_FETCH_MPG_04:PASS');
		}
	done();
	});
	done();
})
/* *
* @tc.number   : GETVIDEO_ASYNC_WITHOUT_FETCH_WEBM_05
* @tc.name     :Get all VIDEO asset from /data/media using async callback and check WEBM file metadata
* @tc.desc     :Get all VIDEO asset from /data/media using async callback and check WEBM file metadata
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_ASYNC_WITHOUT_FETCH_WEBM_05', 0, async function (done) {
	media.getVideoAssets((error, value)=> {
		if (value == undefined){
			console.info('MediaLibraryTest: There are no video files under /data/media folder');
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_ASYNC_WITHOUT_FETCH_WEBM_05:FAIL');
		} else if (value != undefined){
			value.forEach(getVideoDataWebm);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_ASYNC_WITHOUT_FETCH_WEBM_05:PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETVIDEO_ASYNC__FETCH_02
* @tc.name     :Get all VIDEO asset details from system data/media/onelevel/Video
* @tc.desc     :Get VIDEO asset details from system
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_ASYNC__FETCH_02', 0, async function (done) {
	media.getVideoAssets(videopath, (error, value) => {
		if (value == undefined) {
			console.info('MediaLibraryTest: There are no video files under ' + videopath.selections);
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_02: FAIL');
		} else if (value != undefined) {
			value.forEach(getVideoData);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_02: PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETVIDEO_ASYNC__FETCH_3PG_01
* @tc.name     :Get all VIDEO asset from /data/media using async callback and check 3gp file metadata
* @tc.desc     :Get all VIDEO asset from /data/media using async callback and check 3gp file metadata
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_ASYNC__FETCH_3PG_01', 0, async function (done) {
	media.getVideoAssets(V3GP, (error, value) => {
		if (value == undefined) {
			console.info('MediaLibraryTest: There are no video files under' + V3GP.selections);
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_ASYNC__FETCH_3PG_01:FAIL');
		} else if (value != undefined) {
			value.forEach(getVideoData3gp);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_ASYNC__FETCH_3PG_01:PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETVIDEO_ASYNC__FETCH_MOV_02
* @tc.name     :Get all VIDEO asset from /data/media using async callback and check MOV file metadata
* @tc.desc     :Get all VIDEO asset from /data/media using async callback and check MOV file metadata
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_ASYNC__FETCH_MOV_02', 0, async function (done) {
	media.getVideoAssets(MOV, (error, value) => {
		if (value == undefined) {
			console.info('MediaLibraryTest: There are no video files under /data/media folder');
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_ASYNC__FETCH_MOV_02:FAIL');
		} else if (value != undefined) {
			value.forEach(getVideoDataMov);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_ASYNC__FETCH_MOV_02:PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETVIDEO_ASYNC__FETCH_MP4_03
* @tc.name     :Get all VIDEO asset from /data/media using async callback and check MP4 file metadata
* @tc.desc     :Get all VIDEO asset from /data/media using async callback and check MP4 file metadata
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_ASYNC__FETCH_MP4_03', 0, async function (done) {
	media.getVideoAssets(MP4, (error, value) => {
		if (value == undefined) {
			console.info('MediaLibraryTest: There are no video files under /data/media folder');
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_ASYNC__FETCH_MP4_03:FAIL');
		} else if (value != undefined) {
			value.forEach(getVideoDataMP4);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_ASYNC__FETCH_MP4_03:PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETVIDEO_ASYNC__FETCH_MPG_04
* @tc.name     :Get all VIDEO asset from /data/media using async callback and check MPG file metadata
* @tc.desc     :Get all VIDEO asset from /data/media using async callback and check MPG file metadata
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_ASYNC__FETCH_MPG_04', 0, async function (done) {
	media.getVideoAssets(MPG, (error, value) => {
		if (value == undefined) {
			console.info('MediaLibraryTest: There are no video files under /data/media folder');
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_ASYNC__FETCH_MPG_04:FAIL');
		} else if (value != undefined) {
			value.forEach(getVideoDataMpg);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_ASYNC__FETCH_MPG_04:PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETVIDEO_ASYNC__FETCH_WEBM_05
* @tc.name     :Get all VIDEO asset from /data/media using async callback and check WEBM file metadata
* @tc.desc     :Get all VIDEO asset from /data/media using async callback and check WEBM file metadata
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_ASYNC__FETCH_WEBM_05', 0, async function (done) {
	media.getVideoAssets(WEBM, (error, value) => {
		if (value == undefined) {
			console.info('MediaibraryTest: There are no video files in' + WEBM.selections);
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_PROMISE__FETCH_WEBM_05:  FAIL');
		} else if (value != undefined) {
			value.forEach(getVideoDataMP4);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_PROMISE__FETCH_WEBM_05:  PASS');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETVIDEO_PROMISE__FETCH_03
* @tc.name     :Get all VIDEO asset details from system with fetch options using promise
* @tc.desc     :Get VIDEO asset details from system
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_PROMISE__FETCH_03', 0, async function (done) {
	const promise = media.getVideoAssets(videopath);
	promise.then(function (data) {
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no video files in' + videopath.selections);
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_PROMISE__FETCH_03:  FAIL');
		} else if (data != undefined) {
			data.forEach(getVideoData);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_PROMISE__FETCH_03:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETVIDEO_PROMISE__FETCH_3PG_01
* @tc.name     :Get all VIDEO asset from /data/media using promise and check 3gp file metadata
* @tc.desc     :Get all VIDEO asset from /data/media using promise and check 3gp file metadata
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_PROMISE__FETCH_3PG_01', 0, async function (done) {
	const promise = media.getVideoAssets(V3GP);
	promise.then(function (data) {
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no video files in' + V3GP.selections);
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_PROMISE__FETCH_3PG_01:  FAIL');
		} else if (data != undefined) {
			data.forEach(getVideoData3gp);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_PROMISE__FETCH_3PG_01:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETVIDEO_PROMISE__FETCH_MOV_02
* @tc.name     :Get all VIDEO asset from /data/media using async callback and check MOV file metadata
* @tc.desc     :Get all VIDEO asset from /data/media using async callback and check MOV file metadata
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_PROMISE__FETCH_MOV_02', 0, async function (done) {
	const promise = media.getVideoAssets(MOV);
	promise.then(function (data) {
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no video files in' + MOV.selections);
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_PROMISE__FETCH_MOV_02:  FAIL');
		} else if (data != undefined) {
			data.forEach(getVideoDataMov);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_PROMISE__FETCH_MOV_02:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETVIDEO_PROMISE__FETCH_MP4_03
* @tc.name     :Get all VIDEO asset from /data/media using promise  and check MP4 file metadata
* @tc.desc     :Get all VIDEO asset from /data/media using promise  and check MP4 file metadata
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_PROMISE__FETCH_MP4_03', 0, async function (done) {
	const promise = media.getVideoAssets(MP4);
	promise.then(function (data) {
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no video files in' + MP4.selections);
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_PROMISE__FETCH_MP4_03:  FAIL');
		} else if (data != undefined) {
			data.forEach(getVideoDataMP4);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_PROMISE__FETCH_MP4_03:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETVIDEO_PROMISE__FETCH_MPG_04
* @tc.name     :Get all VIDEO asset from /data/media using promise and check MPG file metadata
* @tc.desc     :Get all VIDEO asset from /data/media using promise and check MPG file metadata
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_PROMISE__FETCH_MPG_04', 0, async function (done) {
	const promise = media.getVideoAssets(MPG);
	promise.then(function (data) {
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no video files in' + MPG.selections);
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_PROMISE__FETCH_MPG_04:  FAIL');
		} else if (data != undefined) {
			data.forEach(getVideoDataMP4);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_PROMISE__FETCH_MPG_04:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETVIDEO_PROMISE__FETCH_WEBM_05
* @tc.name     :Get all VIDEO asset from /data/media using promise and check WEBM file metadata
* @tc.desc     :Get all VIDEO asset from /data/media using promise and check WEBM file metadata
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_PROMISE__FETCH_WEBM_05', 0, async function (done) {
	const promise = media.getVideoAssets(WEBM);
	promise.then(function (data) {
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no video files under /data/media folder');
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_PROMISE__FETCH_WEBM_05:FAIL');
		} else if (data != undefined) {
			data.forEach(getVideoDataWebm);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_PROMISE__FETCH_WEBM_05:PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETVIDEO_PROMISE_OUT_FETCH_04
* @tc.name     :Get all VIDEO asset details from system without fetchoptions using promise
* @tc.desc     :Get all VIDEO asset details from system without fetchoptions using promise
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_PROMISE_OUT_FETCH_04', 0, async function (done) {
	const promise = media.getVideoAssets();
	promise.then(function (data) {
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no video files in' + '/data/media');
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_PROMISE_OUT_FETCH_04:  FAIL');
		} else if (data != undefined) {
			data.forEach(getVideoData);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_PROMISE_OUT_FETCH_04:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETVIDEO_PROMISE_OUT_FETCH_3PG_01
* @tc.name     :Get all VIDEO asset from /data/media using promise and check 3gp file metadata
* @tc.desc     :Get all VIDEO asset from /data/media using promise and check 3gp file metadata
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_PROMISE_OUT_FETCH_3PG_01', 0, async function (done) {
	const promise = media.getVideoAssets();
	promise.then(function (data) {
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no video files in' + '/data/media');
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_PROMISE_OUT_FETCH_3PG_01:  FAIL')
		} else if (data != undefined) {
			data.forEach(getVideoData3gp);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_PROMISE_OUT_FETCH_3PG_01:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETVIDEO_PROMISE_OUT_FETCH_MOV_02
* @tc.name     :Get all VIDEO asset from /data/media using async callback and check MOV file metadata
* @tc.desc     :Get all VIDEO asset from /data/media using async callback and check MOV file metadata
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_PROMISE_OUT_FETCH_MOV_02', 0, async function (done) {
	const promise = media.getVideoAssets();
	promise.then(function (data) {
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no video files in' + '/data/media');
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_PROMISE_OUT_FETCH_MOV_02:  FAIL');
		} else if (data != undefined) {
			data.forEach(getVideoDataMov);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_PROMISE_OUT_FETCH_MOV_02:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETVIDEO_PROMISE_OUT_FETCH_MP4_03
* @tc.name     :Get all VIDEO asset from /data/media using promise  and check MP4 file metadata
* @tc.desc     :Get all VIDEO asset from /data/media using promise  and check MP4 file metadata
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_PROMISE_OUT_FETCH_MP4_03', 0, async function (done) {
	const promise = media.getVideoAssets();
	promise.then(function (data) {
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no video files in' + '/data/media');
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_PROMISE_OUT_FETCH_MP4_03:  FAIL');
		} else if (data != undefined) {
			data.forEach(getVideoDataMP4);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_PROMISE_OUT_FETCH_MP4_03:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETVIDEO_PROMISE_OUT_FETCH_MPG_04
* @tc.name     :Get all VIDEO asset from /data/media using promise and check MPG file metadata
* @tc.desc     :Get all VIDEO asset from /data/media using promise and check MPG file metadata
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_PROMISE_OUT_FETCH_MPG_04', 0, async function (done) {
	const promise = media.getVideoAssets();
	promise.then(function (data) {
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no video files in' + '/data/media');
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_PROMISE_OUT_FETCH_MPG_04:  FAIL');
		} else if (data != undefined) {
			data.forEach(getVideoDataMP4);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_PROMISE_OUT_FETCH_MPG_04:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETVIDEO_PROMISE_OUT_FETCH_WEBM_05
* @tc.name     :Get all VIDEO asset from /data/media using promise and check WEBM file metadata
* @tc.desc     :Get all VIDEO asset from /data/media using promise and check WEBM file metadata
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_PROMISE__FETCH_WEBM_05', 0, async function (done) {
	const promise = media.getVideoAssets();
	promise.then(function (data) {
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no video files in' + '/data/media');
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_PROMISE_OUT_FETCH_WEBM_04:  FAIL');
		} else if (data != undefined) {
			data.forEach(getVideoDataMP4);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_PROMISE_OUT_FETCH_WEBM_04:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETVIDEO_CHECK_MIME_MEDIA_TYPE_VIDEO__01
* @tc.name     :Get all VIDEO asset details from VIDEO directory and check for MIME amd MEDIA types
* @tc.desc     :Get all VIDEO asset details from VIDEO directory and check for MIME amd MEDIA types
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_CHECK_MIME_MEDIA_TYPE_VIDEO__01', 0, async function (done) {
	const promise = media.getVideoAssets(videopath);
	promise.then(function (data) {
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no audio files in' + videopath.selections);
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_CHECK_MIME_MEDIA_TYPE_VIDEO__01:  FAIL');
		} else if (data != undefined) {
			console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns ' + data.length);
			data.forEach(getVideoDataCheckMimeMediaType);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_CHECK_MIME_MEDIA_TYPE_VIDEO__01:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETVIDEO_CHECK_MIME_MEDIA_TYPE_3GP__02
* @tc.name     :Get all VIDEO asset details from 3GP directory and check for MIME amd MEDIA types
* @tc.desc     :Get all VIDEO asset details from 3GP directory and check for MIME amd MEDIA types
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_CHECK_MIME_MEDIA_TYPE_3GP__02', 0, async function (done) {
	const promise = media.getVideoAssets(V3GP);
	promise.then(function (data) {
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no audio files in' + V3GP.selectsions);
			expect().assertFail();
            console.info('MediaLibraryTest:  GETVIDEO_CHECK_MIME_MEDIA_TYPE_3GP__02:  FAIL');
		} else if (data != undefined) {
			console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns ' + data.length);
			data.forEach(getAudioData3gpCheckMimeMediaType);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_CHECK_MIME_MEDIA_TYPE_3GP__02:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETVIDEO_CHECK_MIME_MEDIA_TYPE_MOV__03
* @tc.name     :Get all VIDEO asset details from MOV directory and check for MIME amd MEDIA types
* @tc.desc     :Get all VIDEO asset details from MOV directory and check for MIME amd MEDIA types
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_CHECK_MIME_MEDIA_TYPE_MOV__03', 0, async function (done) {
	const promise = media.getVideoAssets(MOV);
	promise.then(function (data) {
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no audio files in' + MOV.selections);
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_CHECK_MIME_MEDIA_TYPE_MOV__03:  FAIL');
		} else if (data != undefined) {
			console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns ' + data.length);
			data.forEach(getAudioDataMOVCheckMimeMediaType);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_CHECK_MIME_MEDIA_TYPE_MOV__03:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETVIDEO_CHECK_MIME_MEDIA_TYPE_MP4__04
* @tc.name     :Get all VIDEO asset details from MP4 directory and check for MIME amd MEDIA types
* @tc.desc     :Get all VIDEO asset details from MP4 directory and check for MIME amd MEDIA types
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_CHECK_MIME_MEDIA_TYPE_MP4__04', 0, async function (done) {
	const promise = media.getVideoAssets(MP4);
	promise.then(function (data) {
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no audio files in' + MP4.selections);
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_CHECK_MIME_MEDIA_TYPE_MP4__04:  FAIL');
		} else if (data != undefined) {
			console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns ' + data.length);
			data.forEach(getAudioDataMP4CheckMimeMediaType);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_CHECK_MIME_MEDIA_TYPE_MP4__04:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETVIDEO_CHECK_MIME_MEDIA_TYPE_MPG__05
* @tc.name     :Get all VIDEO asset details from MPG directory and check for MIME amd MEDIA types
* @tc.desc     :Get all VIDEO asset details from MPG directory and check for MIME amd MEDIA types
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_CHECK_MIME_MEDIA_TYPE_MPG__05', 0, async function (done) {
	const promise = media.getVideoAssets(MPG);
	promise.then(function (data) {
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no audio files in' + MPG.selections);
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_CHECK_MIME_MEDIA_TYPE_MPG__05:  PASS');
		} else if (data != undefined) {
			console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns ' + data.length);
			data.forEach(getAudioDataMPGCheckMimeMediaType);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_CHECK_MIME_MEDIA_TYPE_MPG__05:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETVIDEO_CHECK_MIME_MEDIA_TYPE_WEBM__06
* @tc.name     :Get all VIDEO asset details from WEBM directory and check for MIME amd MEDIA types
* @tc.desc     :Get all VIDEO asset details from WEBM directory and check for MIME amd MEDIA types
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_CHECK_MIME_MEDIA_TYPE_WEBM__06', 0, async function (done) {
	const promise = media.getVideoAssets(WEBM);
	promise.then(function (data) {
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no audio files in' + WEBM.selections);
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_CHECK_MIME_MEDIA_TYPE_MPG__06:  FAIL');
		} else if (data != undefined) {
			console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns ' + data.length);
			data.forEach(getAudioDataWEBMCheckMimeMediaType);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_CHECK_MIME_MEDIA_TYPE_MPG__06:  PASS');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETMEDIA_ASYNC__EMPTY_FETCH_OPTIONS_PROVIDED_07
* @tc.name     :Get all MEDIA asset details from folder "data/media/onelevel"
* @tc.desc     :Get MEDIA asset details from folder "data/media/onelevel"
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_ASYNC__EMPTY_FETCH_OPTIONS_PROVIDED_07', 0, async function (done) {
	console.info("MediaLibraryTest:  GETVIDEO_ASYNC__EMPTY_FETCH_OPTIONS_PROVIDED_07");
	media.getVideoAssets(EMPTYPATH, (error, value) => {
		console.info('MediaLibraryTest: getMediaAssets2 returns ' + value.length);
		if (value == undefined) {
			console.info('MediaLibraryTest: getVideoAssets returned undefined' + value);
			console.info('MediaLibraryTest: There are no  files under' + EMPTYPATH.selections);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_ASYNC__EMPTY_FETCH_OPTIONS_PROVIDED_07: PASS');
		} else if (value != undefined) {
			console.info("MediaLibraryTest: mediapath after is :" + EMPTYPATH.selections);
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_ASYNC__EMPTY_FETCH_OPTIONS_PROVIDED_07: FAIL');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETMEDIA_ASYNC__EMPTY_FETCH_OPTIONS_PROVIDED_07
* @tc.name     :Get all MEDIA asset details from folder "data/media/onelevel"
* @tc.desc     :Get MEDIA asset details from folder "data/media/onelevel"
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_ASYNC__NONEXISTANT_FETCH_OPTIONS_PROVIDED_08', 0, async function (done) {
	console.info("MediaLibraryTest:  GETVIDEO_ASYNC__NONEXISTANT_FETCH_OPTIONS_PROVIDED_08");
	media.getVideoAssets(nonexistantpath, (error, value) => {
		console.info('MediaLibraryTest: getMediaAssets2 returns ' + value.length);
		if (value == undefined) {
			console.info('MediaLibraryTest: getVideoAssets returned undefined' + value);
			console.info('MediaLibraryTest: There are no  files under' + nonexistantpath.selections);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEO_ASYNC__NONEXISTANT_FETCH_OPTIONS_PROVIDED_08: PASS');
		} else if (value != undefined) {
			console.info("MediaLibraryTest: mediapath after is :" + nonexistantpath.selections);
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEO_ASYNC__NONEXISTANT_FETCH_OPTIONS_PROVIDED_08: FAIL');
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETVIDEO_PROMISE_EMPTY__05
* @tc.name     :Get all Image asset details from system with Promise and media fetch options
* @tc.desc     :Get image asset details from system
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_PROMISE_EMPTY__05', 0, async function (done) {
	const promise = media.getVideoAssets(EMPTYPATH);
	promise.then(function (data) {
		if (data == undefined) {
			console.info(' MediaLibraryTest: There are no videos in' + EMPTYPATH.selections);
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETVIDEO_PROMISE_EMPTY__05:  PASS');
		} else if (data != undefined) {
			console.info(' MediaLibraryTest: Promise successful: DATA VALUE IS ' + data);
			console.info(' MediaLibraryTest: There are videos in' + EMPTYPATH.selections);
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETVIDEO_PROMISE_EMPTY__05:  FAIL');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETVIDEO_PROMISE_NONEXISTANT__06
* @tc.name     :Get all Image asset details from system with Promise and media fetch options
* @tc.desc     :Get image asset details from system
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEO_PROMISE_NONEXISTANT__06', 0, async function (done) {
	const promise = media.getVideoAssets(nonexistantpath);
	promise.then(function (data) {
		if (data == undefined) {
			console.info(' MediaLibraryTest: There are no videos in' + nonexistantpath.selections);
			expect(true).assertTrue();
			console.info(' MediaLibraryTest:  GETVIDEO_PROMISE_NONEXISTANT__06:  PASS');
		} else if (data != undefined) {
			console.info(' MediaLibraryTest: Promise successful: DATA VALUE IS ' + data);
			console.info(' MediaLibraryTest: There are videos in' + nonexistantpath.selections);
			expect().assertFail();
			console.info(' MediaLibraryTest:  GETVIDEO_PROMISE_NONEXISTANT__06:  FAIL');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETVIDEOALBUM_ASYNC_WITH_FETCH_01
* @tc.name     :Get all details of video album using async callback + get album name and album id
* @tc.desc     :Get all details of video album using async callback + get album name and album id
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEOALBUM_ASYNC_WITH_FETCH_01', 0, async function (done) {
	media.getVideoAlbums(videoalbumpath, (error, value) => {
		if (value == undefined) {
			console.info('MediaLibraryTest: There are no video files in ' + videoalbumpath.selections);
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEOALBUM_ASYNC_WITH_FETCH_01:FAIL ')
		} else if (value != undefined) {
			for (i = 0; i < value.length; i++) {
				var albumName = value[i].albumName;
				console.info('MediaLibraryTest: albumName for videoAlbums1  :' + albumName);
				var albumId = value[i].albumId;
				console.info('MediaLibraryTest: albumId for videoAlbums1 :' + albumId);
				expect(true).assertTrue();
				console.info('MediaLibraryTest:  GETVIDEOALBUM_ASYNC_WITH_FETCH_01:PASS ')
			}
		}
	done();
	});
	done();
})
/* *
* @tc.number   : GETVIDEOALBUM_ASYNC_WITHOUT_FETCH_01
* @tc.name     :Get all details of video album using async callback + get album name and album id
* @tc.desc     :Get all details of video album using async callback + get album name and album id
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEOALBUM_ASYNC_WITHOUT_FETCH_01', 0, async function (done) {
	media.getVideoAlbums((error, value) => {
		if (value == undefined) {
			console.info('MediaLibraryTest: There are no video files in ' + 'data/media');
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEOALBUM_ASYNC_WITHOUT_FETCH_01:FAIL ');
		} else if (value != undefined) {
			for (i = 0; i < value.length; i++) {
				var albumName = value[i].albumName;
				console.info('MediaLibraryTest: albumName for videoAlbums1  :' + albumName);
				var albumId = value[i].albumId;
				console.info('MediaLibraryTest: albumId for videoAlbums1 :' + albumId);
				expect(true).assertTrue();
				console.info('MediaLibraryTest:  GETVIDEOALBUM_ASYNC_WITHOUT_FETCH_01:PASS ');
			}
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GET_IMAGEALBUM_ASYNC_WITH_FETCH_01
* @tc.name     :Get all details of image album using async callback + get album name and album id
* @tc.desc     :Get all details of image album using async callback + get album name and album id
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GET_IMAGEALBUM_ASYNC_WITH_FETCH_01', 0, async function (done) {
	media.getImageAlbums(imagealbumpath, (error, value) => {
		if (value == undefined) {
			console.info('MediaLibraryTest: There are no video files in ' + imagealbumpath.selections);
			expect().assertFail();
			console.info('MediaLibraryTest:  GET_IMAGEALBUM_ASYNC_WITH_FETCH_01:FAIL ');
		} else if (value != undefined) {
			for (i = 0; i < value.length; i++) {
				var albumName = value[i].albumName;
				console.info('MediaLibraryTest: albumName for IMAGEAlbums1  :' + albumName);
				var albumId = value[i].albumId;
				console.info('MediaLibraryTest: albumId for IMAGEAlbums1 :' + albumId);
				expect(true).assertTrue();
				console.info('MediaLibraryTest:  GET_IMAGEALBUM_ASYNC_WITH_FETCH_01:PASS ');
			}
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETIMAGEALBUM_ASYNC_WITHOUT_FETCH_01
* @tc.name     :Get all details of image album using async callback + get album name and album id
* @tc.desc     :Get all details of image album using async callback + get album name and album id
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGEALBUM_ASYNC_WITHOUT_FETCH_01', 0, async function (done) {
	media.getImageAlbums((error, value) => {
		if (value == undefined) {
			console.info('MediaLibraryTest: There are no image files in ' + 'data/media');
			expect().assertFail();
			console.info('MediaLibraryTest:  GETIMAGEALBUM_ASYNC_WITHOUT_FETCH_01:FAIL ');
		} else if (value != undefined) {
			for (i = 0; i < value.length; i++) {
				var albumName = value[i].albumName;
				console.info('MediaLibraryTest: albumName for imageAlbums1  :' + albumName);
				var albumId = value[i].albumId;
				console.info('MediaLibraryTest: albumId for imageAlbums1 :' + albumId);
				expect(true).assertTrue();
				console.info('MediaLibraryTest:  GETIMAGEALBUM_ASYNC_WITHOUT_FETCH_01:PASS ');
		}
	}
	done();
	});
	done();
})
/* *
* @tc.number   : GETVIDEOALBUM_ASYNC_WITH_FETCH_EMPTYPATH_01
* @tc.name     :Get all details of video album using async callback + get album name and album id
* @tc.desc     :Get all details of video album using async callback + get album name and album id
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEOALBUM_ASYNC_WITH_FETCH_EMPTYPATH_01', 0, async function (done) {
	media.getVideoAlbums(EMPTYPATH, (error, value) => {
		if (value == undefined) {
			console.info('MediaLibraryTest: There are no video files in ' + EMPTYPATH.selections);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEOALBUM_ASYNC__FETCH_EMPTYPATH_01:PASS ');
		} else if (value != undefined) {
			for (i = 0; i < value.length; i++) {
				var albumName = value[i].albumName;
				console.info('MediaLibraryTest: albumName for videoAlbums1  :' + albumName);
				var albumId = value[i].albumId;
				console.info('MediaLibraryTest: albumId for videoAlbums1 :' + albumId);
				expect().assertFail();
				console.info('MediaLibraryTest:  GETVIDEOALBUM_ASYNC_WITH_FETCH_EMPTYPATH_01:FAIL ');
		}
	}
	done();
	});
	done();
})
/* *
* @tc.number   : GETVIDEOALBUM_ASYNC__FETCH_NONEXISTANTPATH_01
* @tc.name     :Get all details of video album using async callback + get album name and album id
* @tc.desc     :Get all details of video album using async callback + get album name and album id
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEOALBUM_ASYNC__FETCH_NONEXISTANTPATH_01', 0, async function (done) {
	media.getVideoAlbums(nonexistantpath, (error, value) => {
		if (value == undefined) {
			console.info('MediaLibraryTest: There are no video files in ' + nonexistantpath.selections);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEOALBUM_ASYNC__FETCH_NONEXISTANTPATH_01:PASS ');
		} else if (value != undefined) {
			for (i = 0; i < value.length; i++) {
				var albumName = value[i].albumName;
				console.info('MediaLibraryTest: albumName for videoAlbums1  :' + albumName);
				var albumId = value[i].albumId;
				console.info('MediaLibraryTest: albumId for videoAlbums1 :' + albumId);
				expect().assertFail();
				console.info('MediaLibraryTest:  GETVIDEOALBUM_ASYNC__FETCH_NONEXISTANTPATH_01:FAIL ');
			}
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETIMAGEALBUM_ASYNC__FETCH_EMPTYPATH_01
* @tc.name     :Get all details of image album using async callback + get album name and album id
* @tc.desc     :Get all details of image album using async callback + get album name and album id
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGEALBUM_ASYNC__FETCH_EMPTYPATH_01', 0, async function (done) {
	media.getImageAlbums(EMPTYPATH, (error, value) => {
		if (value == undefined) {
			console.info('MediaLibraryTest: There are no image files in ' + EMPTYPATH.selections);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETIMAGEALBUM_ASYNC__FETCH_EMPTYPATH_01:PASS ');
		} else if (value != undefined) {
			for (i = 0; i < value.length; i++) {
				var albumName = value[i].albumName;
				console.info('MediaLibraryTest: albumName for imageAlbums1  :' + albumName);
				var albumId = value[i].albumId;
				console.info('MediaLibraryTest: albumId for imageAlbums1 :' + albumId);
				expect().assertFail();
				console.info('MediaLibraryTest:  GETIMAGEALBUM_ASYNC__FETCH_EMPTYPATH_01:FAIL ');
			}
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETIMAGEALBUM_ASYNC__FETCH_NONEXISTANTPATH_01
* @tc.name     :Get all details of image album using async callback + get album name and album id
* @tc.desc     :Get all details of image album using async callback + get album name and album id
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGEALBUM_ASYNC__FETCH_NONEXISTANTPATH_01', 0, async function (done) {
	media.getImageAlbums(nonexistantpath, (error, value) => {
		if (value == undefined) {
			console.info('MediaLibraryTest: There are no image files in ' + nonexistantpath.selections);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETIMAGEALBUM_ASYNC__FETCH_NONEXISTANTPATH_01:PASS ');
		} else if (value != undefined) {
			for (i = 0; i < value.length; i++) {
				var albumName = value[i].albumName;
				console.info('MediaLibraryTest: albumName for imageAlbums1  :' + albumName);
				var albumId = value[i].albumId;
				console.info('MediaLibraryTest: albumId for imageAlbums1 :' + albumId);
				expect().assertFail();
				console.info('MediaLibraryTest:  GETIMAGEALBUM_ASYNC__FETCH_NONEXISTANTPATH_01:FAIL ');
			}
		}
		done();
	});
	done();
})
/* *
* @tc.number   : GETIMAGEALBUM_PROMISE__FETCH_01
* @tc.name     :Get all Album details from /data/media/imagealbum using promise + check album id and album name
* @tc.desc     :Get all Album details from /data/media/imagealbum using promise + check album id and album name
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGEALBUM_PROMISE_WITH_FETCH_01', 0, async function (done) {
	const promise = media.getImageAlbums(imagealbumpath);
	promise.then(function (data) {
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no image files in ' + imagealbumpath.selections);
			expect().assertFail();
			console.info('MediaLibraryTest:  GETIMAGEALBUM_PROMISE__FETCH_01:FAIL ');
		} else if (data != undefined) {
			for (i = 0; i < data.length; i++) {
				var albumName = data[i].albumName;
				console.info('MediaLibraryTest: albumName for imageAlbums2  :' + albumName);
				var albumId = data[i].albumId;
				console.info('MediaLibraryTest: albumId for imageAlbums2 :' + albumId);
				expect(true).assertTrue();
				console.info('MediaLibraryTest:  GETIMAGEALBUM_PROMISE__FETCH_01:PASS ');
			}
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETIMAGEALBUM_PROMISE_WITHOUT_FETCH_01
* @tc.name     :Get all Album details from /data/media/imagealbum using promise + check album id and album name
* @tc.desc     :Get all Album details from /data/media/imagealbum using promise + check album id and album name
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGEALBUM_PROMISE_WITHOUT_FETCH_01', 0, async function (done) {
	const promise = media.getImageAlbums();
	promise.then(function (data) {
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no image files in ' + 'data/media');
			expect().assertFail();
			console.info('MediaLibraryTest:  GETIMAGEALBUM_PROMISE_WITHOUT_FETCH_01:FAIL ');
		} else if (data != undefined) {
			for (i = 0; i < data.length; i++) {
				var albumName = data[i].albumName;
				console.info('MediaLibraryTest: albumName for imageAlbums2  :' + albumName);
				var albumId = data[i].albumId;
				console.info('MediaLibraryTest: albumId for imageAlbums2 :' + albumId);
				expect(true).assertTrue();
				console.info('MediaLibraryTest:  GETIMAGEALBUM_PROMISE_WITHOUT_FETCH_01:PASS ');
			}
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETIMAGEALBUM_PROMISE__FETCH_EMPTYPATH_01
* @tc.name     :Get all Album details from /data/media/imagealbum using promise + check album id and album name
* @tc.desc     :Get all Album details from /data/media/imagealbum using promise + check album id and album name
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGEALBUM_PROMISE__FETCH_EMPTYPATH_01', 0, async function (done) {
	const promise = media.getImageAlbums(EMPTYPATH);
	promise.then(function (data) {
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no image files in ' + EMPTYPATH.selections);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETIMAGEALBUM_PROMISE__FETCH_EMPTYPATH_01:PASS ');
		} else if (data != undefined) {
			for (i = 0; i < data.length; i++) {
				var albumName = data[i].albumName;
				console.info('MediaLibraryTest: albumName for imageAlbums2  :' + albumName);
				var albumId = data[i].albumId;
				console.info('MediaLibraryTest: albumId for imageAlbums2 :' + albumId);
				expect().assertFail();
				console.info('MediaLibraryTest:  GETIMAGEALBUM_PROMISE__FETCH_EMPTYPATH_01:FAIL ');
			}
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETIMAGEALBUM_PROMISE__FETCH_NONEXISTANT_01
* @tc.name     :Get all Album details from /data/media/imagealbum using promise + check album id and album name
* @tc.desc     :Get all Album details from /data/media/imagealbum using promise + check album id and album name
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETIMAGEALBUM_PROMISE__FETCH_NONEXISTANT_01', 0, async function (done) {
	const promise = media.getImageAlbums(nonexistantpath);
	promise.then(function (data) {
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no image files in ' + nonexistantpath.selections);
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETIMAGEALBUM_PROMISE__FETCH_NONEXISTANT_01:PASS ');
		} else if (data != undefined) {
			for (i = 0; i < data.length; i++) {
				var albumName = data[i].albumName;
				console.info('MediaLibraryTest: albumName for imageAlbums2  :' + albumName);
				var albumId = data[i].albumId;
				console.info('MediaLibraryTest: albumId for imageAlbums2 :' + albumId);
				expect().assertFail();
				console.info('MediaLibraryTest:  GETIMAGEALBUM_PROMISE__FETCH_NONEXISTANT_01:FAIL ');
			}
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETVIDEOALBUM_PROMISE_WITH_FETCH_01
* @tc.name     :Get all Album details from /data/media/videoalbum using promise + check album id and album name
* @tc.desc     :Get all Album details from /data/media/videoalbum using promise + check album id and album name
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEOALBUM_PROMISE_WITH_FETCH_01', 0, async function (done) {
	const promise = media.getVideoAlbums(videoalbumpath);
	promise.then(function (data) {
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no video files in ' + videoalbumpath.selections);
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEOALBUM_PROMISE_WITH_FETCH_01:FATL ');
		} else if (data != undefined) {
			for (i = 0; i < data.length; i++) {
				var albumName = data[i].albumName;
				console.info('MediaLibraryTest: albumName for videoalbum  :' + albumName);
				var albumId = data[i].albumId;
				console.info('MediaLibraryTest: albumId for videoalbum :' + albumId);
				expect(true).assertTrue();
				console.info('MediaLibraryTest:  GETVIDEOALBUM_PROMISE_WITH_FETCH_01:PASS ');
			}
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETVIDEOALBUM_PROMISE_WITHOUT_FETCH_01
* @tc.name     :Get all Album details from /data/media/videoalbum using promise + check album id and album name
* @tc.desc     :Get all Album details from /data/media/videoalbum using promise + check album id and album name
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEOALBUM_PROMISE_WITHOUT_FETCH_01', 0, async function (done) {
	const promise = media.getVideoAlbums();
	promise.then(function (data) {
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no video files in ' + 'data/media');
			expect().assertFail();
			console.info('MediaLibraryTest:  GETVIDEOALBUM_PROMISE_WITHOUT_FETCH_01:FAIL ');
		} else if (data != undefined) {
			for (i = 0; i < data.length; i++) {
				var albumName = data[i].albumName;
				console.info('MediaLibraryTest: albumName for videoalbum  :' + albumName);
				var albumId = data[i].albumId;
				console.info('MediaLibraryTest: albumId for videoalbum :' + albumId);
				expect(true).assertTrue();
				console.info('MediaLibraryTest:  GETVIDEOALBUM_PROMISE_WITHOUT_FETCH_01:PASS ');
			}
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETVIDEOALBUM_PROMISE__FETCH_EMPTYPATH_01
* @tc.name     :Get all Album details from /data/media/videoalbum using promise + check album id and album name
* @tc.desc     :Get all Album details from /data/media/videoalbum using promise + check album id and album name
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEOALBUM_PROMISE__FETCH_EMPTYPATH_01', 0, async function (done) {
	const promise = media.getVideoAlbums(EMPTYPATH);
	promise.then(function (data) {
		if (data == undefined) {
			console.info('MediaLibraryTest: There are no video files in ' + 'EMPTYPATH.selections');
			expect(true).assertTrue();
			console.info('MediaLibraryTest:  GETVIDEOALBUM_PROMISE__FETCH_EMPTYPATH_01:PASS ');
		} else if (data != undefined) {
			for (i = 0; i < data.length; i++) {
				var albumName = data[i].albumName;
				console.info('MediaLibraryTest: albumName for videoalbum  :' + albumName);
				var albumId = data[i].albumId;
				console.info('MediaLibraryTest: albumId for videoalbum :' + albumId);
				expect().assertFail();
				console.info('MediaLibraryTest:  GETVIDEOALBUM_PROMISE__FETCH_EMPTYPATH_01:FAIL ');
			}
		}
	});
	await promise;
	done();
})
/* *
* @tc.number   : GETVIDEOALBUM_PROMISE__FETCH_NONEXISTANT_01
* @tc.name     :Get all Album details from /data/media/videoalbum using promise + check album id and album name
* @tc.desc     :Get all Album details from /data/media/videoalbum using promise + check album id and album name
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' GETVIDEOALBUM_PROMISE__FETCH_NONEXISTANT_01', 0, async function (done) {
	const promise = media.getVideoAlbums(nonexistantpath);
		promise.then(function (data) {
			if (data == undefined) {
				console.info('MediaLibraryTest: There are no video files in ' + 'nonexistantpath.selections');
				expect(true).assertTrue();
				console.info('MediaLibraryTest:  GETVIDEOALBUM_PROMISE__FETCH_NONEXISTANT_01:PASS ');
			} else if (data != undefined) {
				for (i = 0; i < data.length; i++) {
					var albumName = data[i].albumName;
					console.info('MediaLibraryTest: albumName for videoalbum  :' + albumName);
					var albumId = data[i].albumId;
					console.info('MediaLibraryTest: albumId for videoalbum :' + albumId);
					expect().assertFail();
					console.info('MediaLibraryTest:  GETVIDEOALBUM_PROMISE__FETCH_NONEXISTANT_01:FAIL ');
				}
			}
		});
		await promise;
		done();
})
/* *
* @tc.number    :CREATE_ASYNC_AUDIOFILE_mp3_01
* @tc.name     :Create an audio file in the device as per the album value
* @tc.desc     :Create an audio file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_AUDIOFILE_mp3_01', 0, async function (done) {
	media.createAudioAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateAudio returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createaudioasyncmp3path.selections;
					value.name = 'newaudiofromasync.mp3';
					value.commitCreate((error, data) => {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOFILE_mp3_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOFILE_mp3_01:FAIL');
						}
					});
				console.info('MediaLibraryTest: End of createAudioAsset 1. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 1 returns false');
				}
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_AUDIOFILE_MP3_01
* @tc.name     :Create an audio file in the device as per the album value  [ASYNC]
* @tc.desc     :Create an audio file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_AUDIOFILE_MP3_01', 0, async function (done) {
	media.createAudioAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateAudio returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createaudioasyncMP3path.selections;
					value.name = 'newaudiofromasync.MP3';
					value.commitCreate((error, data) => {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOFILE_MP3_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOFILE_MP3_01:FAIL');
						}
					});
					console.info('MediaLibraryTest: End of createAudioAsset 1. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 1 returns false');
				}
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_AUDIOFILE_aac_01
* @tc.name     :Create an audio file in the device as per the album value  [ASYNC]
* @tc.desc     :Create an audio file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_AUDIOFILE_aac_01', 0, async function (done) {
	media.createAudioAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateAudio returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createaudioasyncaacpath.selections;
					value.name = 'newaudiofromasync.aac';
					value.commitCreate((error, data) => {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOFILE_aac_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOFILE_aac_01:FAIL');
						}
					});
					console.info('MediaLibraryTest: End of createAudioAsset 1. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 1 returns false');
				}
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_AUDIOFILE_AAC_01
* @tc.name     :Create an audio file in the device as per the album value  [ASYNC]
* @tc.desc     :Create an audio file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_AUDIOFILE_AAC_01', 0, async function (done) {
	media.createAudioAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateAudio returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createaudioasyncAACpath.selections;
					value.name = 'newaudiofromasync.AAC';
					value.commitCreate((error, data) => {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOFILE_AAC_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOFILE_AAC_01:FAIL');
						}
					});
					console.info('MediaLibraryTest: End of createAudioAsset 1. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 1 returns false');
				}
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_AUDIOFILE_flac_01
* @tc.name     :Create an audio file in the device as per the album value  [ASYNC]
* @tc.desc     :Create an audio file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_AUDIOFILE_flac_01', 0, async function (done) {
	media.createAudioAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateAudio returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createaudioasyncflacpath.selections;
					value.name = 'newaudiofromasync.aac';
					value.commitCreate((error, data) => {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOFILE_flac_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOFILE_flac_01:FAIL');
						}
					});
					console.info('MediaLibraryTest: End of createAudioAsset 1. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 1 returns false');
				}
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_AUDIOFILE_FLAC_01
* @tc.name     :Create an audio file in the device as per the album value  [ASYNC]
* @tc.desc     :Create an audio file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_AUDIOFILE_FLAC_01', 0, async function (done) {
	media.createAudioAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateAudio returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createaudioasyncFLACpath.selections;
					value.name = 'newaudiofromasync.FLAC';
						value.commitCreate((error, data) => {
							if (data == true) {
								console.info('MediaLibraryTest: commitCreate returns' + data);
								expect(true).assertTrue();
								console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOFILE_FLAC_01:PASS');
							} else {
								console.info('MediaLibraryTest: commitCreate returns' + data);
								expect().assertFail();
								console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOFILE_FLAC_01:FAIL');
							}
						});
						console.info('MediaLibraryTest: End of createAudioAsset 1. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 1 returns false');
				}
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_AUDIOFILE_ogg_01
* @tc.name     :Create an audio file in the device as per the album value  [ASYNC]
* @tc.desc     :Create an audio file in the device as per the album value [/data/media/onelevel/createaudio]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_AUDIOFILE_ogg_01', 0, async function (done) {
	media.createAudioAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateAudio returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createaudioasyncoggpath.selections;
					value.name = 'newaudiofromasync.ogg';
					value.commitCreate((error, data) => {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOFILE_ogg_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOFILE_ogg_01:FAIL');
						}
					});
					console.info('MediaLibraryTest: End of createAudioAsset 1. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 1 returns false');
				}
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_AUDIOFILE_OGG_01
* @tc.name     :Create an audio file in the device as per the album value  [ASYNC]
* @tc.desc     :Create an audio file in the device as per the album value [/data/media/onelevel/createaudio]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_AUDIOFILE_OGG_01', 0, async function (done) {
	media.createAudioAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateAudio returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createaudioasyncOGGpath.selections;
					value.name = 'newaudiofromasync.OOG';
					value.commitCreate((error, data) => {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOFILE_OGG_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOFILE_OGG_01:FAIL');
						}
					});
					console.info('MediaLibraryTest: End of createAudioAsset 1. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 1 returns false');
				}
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_AUDIOFILE_wav_01
* @tc.name     :Create an audio file in the device as per the album value  [ASYNC]
* @tc.desc     :Create an audio file in the device as per the album value [/data/media/onelevel/createaudio]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_AUDIOFILE_wav_01', 0, async function (done) {
	media.createAudioAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateAudio returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createaudioasyncwavpath.selections;
					value.name = 'newaudiofromasync.wav';
					value.commitCreate((error, data) => {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOFILE_wav_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOFILE_wav_01:FAIL');
						}
					});
					console.info('MediaLibraryTest: End of createAudioAsset 1. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 1 returns false');
				}
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_AUDIOFILE_WAV_01
* @tc.name     :Create an audio file in the device as per the album value  [ASYNC]
* @tc.desc     :Create an audio file in the device as per the album value [/data/media/onelevel/createaudio]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_AUDIOFILE_WAV_01', 0, async function (done) {
	media.createAudioAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateAudio returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createaudioasyncWAVpath.selections;
					value.name = 'newaudiofromasync.WAV';
					value.commitCreate((error, data) => {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOFILE_WAV_01:PASS');
						} else {
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOFILE_WAV_01:FAIL');
						}
					});
					console.info('MediaLibraryTest: End of createAudioAsset 1. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 1 returns false');
				}
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_AUDIOFILE_WAV__NO_NAME__01
* @tc.name     :Create an audio file in the device as per the album value  [ASYNC]
* @tc.desc     :Create an audio file in the device as per the album value [/data/media/onelevel/createaudio]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_AUDIOFILE_WAV__NO_NAME__01', 0, async function (done) {
	media.createAudioAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateAudio returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createaudiononamepath.selections;
					value.name = '';
					value.commitCreate((error, data) => {
						if (data == false) {
							console.info('MediaLibraryTest: commitCreate returns' + data);
							expect(false).assertFalse();
							console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOFILE_WAV__NO_NAME__01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOFILE_WAV__NO_NAME__01:FAIL');
						}
						done();
					});
					done();
				}
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_AUDIOFILE_WAV__INCORRECT_NAME__01
* @tc.name     :Create an audio file in the device as per the album value  [ASYNC]
* @tc.desc     :Create an audio file in the device as per the album value [/data/media/onelevel/createaudio]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_AUDIOFILE_WAV__INCORRECT_NAME__01', 0, async function (done) {
	media.createAudioAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateAudio returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createaudiononamepath.selections;
					value.name = 'ABC.txt';
					value.commitCreate((error, data) => {
						if (data == false) {
							console.info('MediaLibraryTest: commitCreate returns' + data);
							expect(false).assertFalse();
							console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOFILE_WAV__INCORRECT_NAME__01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOFILE_WAV__INCORRECT_NAME__01:FAIL');
						}
						done();
					});
					done();
				}
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_AUDIOFILE_WAV__INCORRECT_NAME__02
* @tc.name     :Create an audio file in the device as per the album value  [ASYNC]
* @tc.desc     :Create an audio file in the device as per the album value [/data/media/onelevel/createaudio]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_AUDIOFILE_WAV__INCORRECT_NAME__02', 0, async function (done) {
	media.createAudioAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateAudio returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createaudiononamepath.selections;
					value.name = '.mp3';
					value.commitCreate((error, data) => {
						if (data == false) {
							console.info('MediaLibraryTest: commitCreate returns' + data);
							expect(false).assertFalse();
							console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOFILE_WAV__INCORRECT_NAME__02:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOFILE_WAV__INCORRECT_NAME__02:FAIL');
						}
						done();
					});
					done();
				}
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_AUDIOFILE_WAV__INVALIDCHARACTERS_NAME__01
* @tc.name     :Create an audio file in the device as per the album value  [ASYNC]
* @tc.desc     :Create an audio file in the device as per the album value [/data/media/onelevel/createaudio]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_AUDIOFILE_WAV__INVALIDCHARACTERS_NAME__01', 0, async function (done) {
	media.createAudioAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateAudio returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createaudiononamepath.selections;
					value.name = '?:\"*|/\\<>".mp3';
					value.commitCreate((error, data) => {
						if (data == false) {
							console.info('MediaLibraryTest: commitCreate returns' + data);
							expect(false).assertFalse();
							console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOFILE_WAV__INVALIDCHARACTERS_NAME__01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOFILE_WAV__INVALIDCHARACTERS_NAME__01:FAIL');
						}
						done();
					});
					done();
				}
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_AUDIOaacFILE_01
* @tc.name     :Create an audio file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an audio file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_AUDIOaacFILE_01', 0, async function (done) {
	const promise = media.createAudioAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateAudio returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateAudioPromise returns true');
					value.albumName = createaudiopromiseaacpath.selections;
					console.info('MediaLibraryTest: startCreateAudioPromise returns true' + createaudiopromiseaacpath);
					value.name = 'newaudiofrompromise.aac'
					value.commitCreate().then(function (data) {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOaacFILE_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOaacFILE_01:FAIL');
						}
					});
					console.info('MediaLibraryTest: End of createAudioAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_AUDIOAACFILE_01
* @tc.name     :Create an audio file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an audio file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_AUDIOAACFILE_01', 0, async function (done) {
	const promise = media.createAudioAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateAudio returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateAudioPromise returns true');
					value.albumName = createaudiopromiseAACpath.selections;
					console.info('MediaLibraryTest: startCreateAudioPromise returns true' + createaudiopromiseAACpath);
					value.name = 'newaudiofrompromise.AAC'
					value.commitCreate().then(function (data) {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOAACFILE_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOAACFILE_01:FAIL');
						}
					});
					console.info('MediaLibraryTest: End of createAudioAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_AUDIOflacFILE_01
* @tc.name     :Create an audio file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an audio file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_AUDIOflacFILE_01', 0, async function (done) {
	const promise = media.createAudioAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateAudio returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateAudioPromise returns true');
					value.albumName = createaudiopromiseflacpath.selections;
					console.info('MediaLibraryTest: startCreateAudioPromise returns true' + createaudiopromiseflacpath);
					value.name = 'newaudiofrompromise.flac'
					value.commitCreate().then(function (data) {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOflacFILE_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOflacFILE_01:FAIL');
						}
					});
					console.info('MediaLibraryTest: End of createAudioAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_AUDIOFLACFILE_01
* @tc.name     :Create an audio file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an audio file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_AUDIOFLACFILE_01', 0, async function (done) {
	const promise = media.createAudioAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateAudio returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateAudioPromise returns true');
					value.albumName = createaudiopromiseFLACpath.selections;
					value.name = 'newaudiofrompromise.FLAC'
					value.commitCreate().then(function (data) {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOFLACFILE_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOFLACFILE_01:FAIL');
						}
					});
					console.info('MediaLibraryTest: End of createAudioAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_AUDIOmp3FILE_01
* @tc.name     :Create an audio file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an audio file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_AUDIOmp3FILE_01', 0, async function (done) {
	const promise = media.createAudioAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateAudio returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateAudioPromise returns true');
					value.albumName = createaudiopromisemp3path.selections;
					console.info('MediaLibraryTest: startCreateAudioPromise returns true' + createaudiopromisemp3path);
					value.name = 'newaudiofrompromise.mp3'
					value.commitCreate().then(function (data) {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOFLACFILE_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOFLACFILE_01:FAIL');
						}
					});
					console.info('MediaLibraryTest: End of createAudioAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_AUDIOMP3FILE_01
* @tc.name     :Create an audio file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an audio file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_AUDIOMP3FILE_01', 0, async function (done) {
	const promise = media.createAudioAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateAudio returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateAudioPromise returns true');
					value.albumName = createaudiopromiseMP3path.selections;
					console.info('MediaLibraryTest: startCreateAudioPromise returns true' + createaudiopromiseMP3path);
					value.name = 'newaudiofrompromise.MP3'
					value.commitCreate().then(function (data) {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOMP3FILE_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOMP3FILE_01:FAIL');
						}
					});
					console.info('MediaLibraryTest: End of createAudioAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_AUDIOwavFILE_01
* @tc.name     :Create an audio file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an audio file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_AUDIOwavFILE_01', 0, async function (done) {
	const promise = media.createAudioAsset();
	promise.then(function (value) {
		if (value != undefined) {
		console.info('MediaLibraryTest: CreateAudio returns successful data');
		value.startCreate().then(function (value1) {
			if (value1 == true) {
				console.info('MediaLibraryTest: startCreateAudioPromise returns true');
				value.albumName = createaudiopromisewavpath.selections;
				console.info('MediaLibraryTest: startCreateAudioPromise returns true' + createaudiopromisewavpath);
				value.name = 'newaudiofrompromise.wav'
				value.commitCreate().then(function (data) {
					if (data == true) {
						console.info('MediaLibraryTest: commitCreate with album name returns' + data);
						expect(true).assertTrue();
						console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOwavFILE_01:PASS');
					} else {
						console.info('MediaLibraryTest: commitCreate with album name returns' + data);
						expect().assertFail();
						console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOwavFILE_01:FAIL');
					}
				});
				console.info('MediaLibraryTest: End of createAudioAsset 3. Now waiting for result');
			} else {
				console.info('MediaLibraryTest: startCreate 3 returns false');
				}
		});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_AUDIOWAVFILE_01
* @tc.name     :Create an audio file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an audio file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_AUDIOWAVFILE_01', 0, async function (done) {
	const promise = media.createAudioAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateAudio returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateAudioPromise returns true');
					value.albumName = createaudiopromiseWAVpath.selections;
					console.info('MediaLibraryTest: startCreateAudioPromise returns true' + createaudiopromiseWAVpath);
					value.name = 'newaudiofrompromise.WAV'
						value.commitCreate().then(function (data) {
							if (data == true) {
								console.info('MediaLibraryTest: commitCreate with album name returns' + data);
								expect(true).assertTrue();
								console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOWAVFILE_01:PASS');
							} else {
								console.info('MediaLibraryTest: commitCreate with album name returns' + data);
								expect().assertFail();
								console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOWAVFILE_01:FAIL');
							}
						});
						console.info('MediaLibraryTest: End of createAudioAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_AUDIOoggFILE_01
* @tc.name     :Create an audio file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an audio file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_AUDIOoggFILE_01', 0, async function (done) {
	const promise = media.createAudioAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateAudio returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateAudioPromise returns true');
					value.albumName = createaudiopromiseoggpath.selections;
					console.info('MediaLibraryTest: startCreateAudioPromise returns true' + createaudiopromiseoggpath);
					value.name = 'newaudiofrompromise.ogg'
						value.commitCreate().then(function (data) {
							if (data == true) {
								console.info('MediaLibraryTest: commitCreate with album name returns' + data);
								expect(true).assertTrue();
								console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOoggFILE_01:PASS');
							} else {
								console.info('MediaLibraryTest: commitCreate with album name returns' + data);
								expect().assertFail();
								console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOoggFILE_01:FAIL');
							}
						});
						console.info('MediaLibraryTest: End of createAudioAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_AUDIOOGGFILE_01
* @tc.name     :Create an audio file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an audio file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_AUDIOOGGFILE_01', 0, async function (done) {
	const promise = media.createAudioAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateAudio returns successful data');
				value.startCreate().then(function (value1) {
					if (value1 == true) {
						console.info('MediaLibraryTest: startCreateAudioPromise returns true');
						value.albumName = createaudiopromiseOGGpath.selections;
						value.name = 'newaudiofrompromise.OGG'
							value.commitCreate().then(function (data) {
								if (data == true) {
									console.info('MediaLibraryTest: commitCreate with album name returns' + data);
									expect(true).assertTrue();
									console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOOGGFILE_01:PASS');
								} else {
									console.info('MediaLibraryTest: commitCreate with album name returns' + data);
									expect().assertFail();
									console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOOGGFILE_01:FAIL');
								}
							});
					}
				});
				console.info('MediaLibraryTest: End of createAudioAsset 3. Now waiting for result');
		} else {
				console.info('MediaLibraryTest: startCreate 3 returns false');
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_AUDIOFILE__NO_ALBUM_NAME__01
* @tc.name     :Create an audio file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an audio file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_AUDIOFILE__NO_ALBUM_NAME__01', 0, async function (done) {
	const promise = media.createAudioAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateAudio returns successful data');
				value.startCreate().then(function (value1) {
					if (value1 == true) {
						console.info('MediaLibraryTest: startCreateAudioPromise returns true');
						value.albumName = '';
						value.name = 'newaudiofrompromise.mp3'
							value.commitCreate().then(function (data) {
								if (data == true) {
									console.info('MediaLibraryTest: commitCreate with album name returns' + data);
									expect(true).assertTrue();
									console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOFILE__NO_ALBUM_NAME__01:PASS');
								} else {
									console.info('MediaLibraryTest: commitCreate with album name returns' + data);
									expect().assertFail();
									console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOFILE__NO_ALBUM_NAME__01:FAIL');
								}
							});
							console.info('MediaLibraryTest: End of createAudioAsset 3. Now waiting for result');
					} else {
						console.info('MediaLibraryTest: startCreate 3 returns false');
					}
				});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_AUDIOFILE__NO_AUDIOFILE_NAME__01
* @tc.name     :Create an audio file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an audio file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_AUDIOFILE__NO_AUDIOFILE_NAME__01', 0, async function (done) {
	const promise = media.createAudioAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateAudio returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateAudioPromise returns true');
					value.albumName = 'createaudiononamepath.selections';
					value.name = ''
					value.commitCreate().then(function (data) {
						if (data == false) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(false).assertFalse();
							console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOFILE__NO_ALBUM_NAME__01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOFILE__NO_ALBUM_NAME__01:FAIL');
						}
					});
					console.info('MediaLibraryTest: End of createAudioAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_AUDIOFILE__INCORRECT_AUDIOFILE_NAME__01
* @tc.name     :Create an audio file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an audio file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_AUDIOFILE__INCORRECT_AUDIOFILE_NAME__01', 0, async function (done) {
	const promise = media.createAudioAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateAudio returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateAudioPromise returns true');
					value.albumName = 'createaudiononamepath.selections';
					value.name = 'abc.txt'
					value.commitCreate().then(function (data) {
						if (data == false) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(false).assertFalse();
							console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOFILE__INCORRECT_AUDIOFILE_NAME__01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOFILE__INCORRECT_AUDIOFILE_NAME__01:FAIL');
						}
					});
					console.info('MediaLibraryTest: End of createAudioAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_AUDIOFILE__INCORRECT_AUDIOFILE_NAME__02
* @tc.name     :Create an audio file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an audio file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_AUDIOFILE__INCORRECT_AUDIOFILE_NAME__02', 0, async function (done) {
	const promise = media.createAudioAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateAudio returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateAudioPromise returns true');
					value.albumName = 'createaudiononamepath.selections';
					value.name = '.MP3'
					value.commitCreate().then(function (data) {
						if (data == false) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(false).assertFalse();
							console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOFILE__INCORRECT_AUDIOFILE_NAME__02:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOFILE__INCORRECT_AUDIOFILE_NAME__02:FAIL');
						}
					});
					console.info('MediaLibraryTest: End of createAudioAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_AUDIOFILE__INVALIDCHARACTERS_AUDIOFILE_NAME__02
* @tc.name     :Create an audio file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an audio file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_AUDIOFILE__INVALIDCHARACTERS_AUDIOFILE_NAME__02', 0, async function (done) {
	const promise = media.createAudioAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateAudio returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateAudioPromise returns true');
					value.albumName = 'createaudiononamepath.selections';
					value.name = '?:\"*|/\\<>".MP3'
					value.commitCreate().then(function (data) {
						if (data == false) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(false).assertFalse();
							console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOFILE__INVALIDCHARACTERS_AUDIOFILE_NAME__02:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_PROMISE_AUDIOFILE__INVALIDCHARACTERS_AUDIOFILE_NAME__02:FAIL');
						}
					});
					console.info('MediaLibraryTest: End of createAudioAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_IMAGEFILE_bmp_01
* @tc.name     :Create an image file in the device as per the album value
* @tc.desc     :Create an image file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_IMAGEFILE_bmp_01', 0, async function (done) {
	media.createImageAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createimageasyncbmppath.selections;
					value.name = 'newimagefromasync.bmp';
					value.commitCreate((error, data) => {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_bmp_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_bmp_01:FAIL');
						}
					});
					console.info('MediaLibraryTest: End of createImageAsset 1. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 1 returns false');
				}
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_IMAGEFILE_BMP_01
* @tc.name     :Create an image file in the device as per the album value
* @tc.desc     :Create an image file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_IMAGEFILE_BMP_01', 0, async function (done) {
	media.createImageAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createimageasyncBPMpath.selections;
					value.name = 'newimagefromasync.BMP';
					value.commitCreate((error, data) => {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_BMP_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_BMP_01:FAIL');
						}
						done();
					});
					done();
					console.info('MediaLibraryTest: End of createImageAsset 1. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 1 returns false');
				}
				done();
			});
			done();
		}
		done();
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_IMAGEFILE_jpg_01
* @tc.name     :Create an image file in the device as per the album value
* @tc.desc     :Create an image file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_IMAGEFILE_jpg_01', 0, async function (done) {
	media.createImageAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createimageasyncjpgpath.selections;
					value.name = 'newimagefromasync.jpg';
					value.commitCreate((error, data) => {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_jpg_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_jpg_01:FAIL');
						}
						done();
					});
					done();
					console.info('MediaLibraryTest: End of createImageAsset 1. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 1 returns false');
				}
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_IMAGEFILE_JPG_01
* @tc.name     :Create an image file in the device as per the album value
* @tc.desc     :Create an image file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_IMAGEFILE_JPG_01', 0, async function (done) {
	media.createImageAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createimageasyncJPGpath.selections;
					value.name = 'newimagefromasync.JPG';
					value.commitCreate((error, data) => {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_JPG_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_JPG_01:FAIL');
						}
						done();
					});
					done();
					console.info('MediaLibraryTest: End of createImageAsset 1. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 1 returns false');
				}
				done();
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_IMAGEFILE_png_01
* @tc.name     :Create an image file in the device as per the album value
* @tc.desc     :Create an image file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_IMAGEFILE_png_01', 0, async function (done) {
	media.createImageAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createimageasyncpngpath.selections;
					value.name = 'newimagefromasync.png';
					value.commitCreate((error, data) => {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_png_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_png_01:FAIL');
						}
						done();
					});
					done();
					console.info('MediaLibraryTest: End of createImageAsset 1. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 1 returns false');
				}
				done();
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_IMAGEFILE_PNG_01
* @tc.name     :Create an image file in the device as per the album value
* @tc.desc     :Create an image file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_IMAGEFILE_PNG_01', 0, async function (done) {
	media.createImageAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createimageasyncPNGpath.selections;
					value.name = 'newimagefromasync.PNG';
					value.commitCreate((error, data) => {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_PNG_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_PNG_01:FAIL');
						}
						done();
					});
					done();
					console.info('MediaLibraryTest: End of createImageAsset 1. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 1 returns false');
				}
				done();
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_IMAGEFILE_gif_01
* @tc.name     :Create an image file in the device as per the album value
* @tc.desc     :Create an image file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_IMAGEFILE_gif_01', 0, async function (done) {
	media.createImageAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createimageasyncgifpath.selections;
					value.name = 'newimagefromasync.gif';
					value.commitCreate((error, data) => {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_gif_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_gif_01:FAIL');
						}
						done();
					});
					done();
					console.info('MediaLibraryTest: End of createImageAsset 1. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 1 returns false');
				}
				done();
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_IMAGEFILE_GIF_01
* @tc.name     :Create an image file in the device as per the album value
* @tc.desc     :Create an image file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_IMAGEFILE_GIF_01', 0, async function (done) {
	media.createImageAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createimageasyncGIFpath.selections;
					value.name = 'newimagefromasync.GIF';
					value.commitCreate((error, data) => {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_GIF_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_GIF_01:FAIL');
						}
						done();
					});
					done();
					console.info('MediaLibraryTest: End of createImageAsset 1. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 1 returns false');
				}
				done();
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_IMAGEFILE_raw_01
* @tc.name     :Create an image file in the device as per the album value
* @tc.desc     :Create an image file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_IMAGEFILE_raw_01', 0, async function (done) {
	media.createImageAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
				value.startCreate((error, value1) => {
					if (value1 == true) {
						console.info('MediaLibraryTest: startCreate returns true');
						value.albumName = createimageasyncrawpath.selections;
						value.name = 'newimagefromasync.raw';
						value.commitCreate((error, data) => {
							if (data == true) {
								console.info('MediaLibraryTest: commitCreate with album name returns' + data);
								expect(true).assertTrue();
								console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_raw_01:PASS');
							} else {
								console.info('MediaLibraryTest: commitCreate with album name returns' + data);
								expect().assertFail();
								console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_raw_01:FAIL');
							}
							done();
						});
						done();
						console.info('MediaLibraryTest: End of createImageAsset 1. Now waiting for result');
					} else {
						console.info('MediaLibraryTest: startCreate 1 returns false');
					}
					done();
				});
				done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_IMAGEFILE_RAW_01
* @tc.name     :Create an image file in the device as per the album value
* @tc.desc     :Create an image file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_IMAGEFILE_RAW_01', 0, async function (done) {
	media.createImageAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
				console.info('MediaLibraryTest: startCreate returns true');
				value.albumName = createimageasyncRAWpath.selections;
				value.name = 'newimagefromasync.RAW';
					value.commitCreate((error, data) => {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_RAW_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_RAW_01:FAIL');
						}
						done();
					});
					done();
					console.info('MediaLibraryTest: End of createImageAsset 1. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 1 returns false');
				}
				done();
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_IMAGEFILE_heif_01
* @tc.name     :Create an image file in the device as per the album value
* @tc.desc     :Create an image file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_IMAGEFILE_heif_01', 0, async function (done) {
	media.createImageAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
				console.info('MediaLibraryTest: startCreate returns true');
				value.albumName = createimageasyncheifpath.selections;
				value.name = 'newimagefromasync.heif';
					value.commitCreate((error, data) => {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_heif_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_heif_01:FAIL');
						}
						done();
					});
					done();
					console.info('MediaLibraryTest: End of createImageAsset 1. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 1 returns false');
				}
				done();
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_IMAGEFILE_HEIF_01
* @tc.name     :Create an image file in the device as per the album value
* @tc.desc     :Create an image file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_IMAGEFILE_HEIF_01', 0, async function (done) {
	media.createImageAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
				value.startCreate((error, value1) => {
					if (value1 == true) {
						console.info('MediaLibraryTest: startCreate returns true');
						value.albumName = createimageasyncHEIFpath.selections;
						value.name = 'newimagefromasync.HEIF';
						value.commitCreate((error, data) => {
							if (data == true) {
								console.info('MediaLibraryTest: commitCreate with album name returns' + data);
								expect(true).assertTrue();
								console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_HEIF_01:PASS');
							} else {
								console.info('MediaLibraryTest: commitCreate with album name returns' + data);
								expect().assertFail();
								console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_HEIF_01:FAIL');
							}
							done();
						});
						done();
						console.info('MediaLibraryTest: End of createImageAsset 1. Now waiting for result');
					} else {
					console.info('MediaLibraryTest: startCreate 1 returns false');
					}
					done();
				});
				done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_IMAGEFILE_webp_01
* @tc.name     :Create an image file in the device as per the album value
* @tc.desc     :Create an image file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_IMAGEFILE_webp_01', 0, async function (done) {
	media.createImageAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createimageasyncwebppath.selections;
					value.name = 'newimagefromasync.webp';
					value.commitCreate((error, data) => {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_webp_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_webp_01:FAIL');
						}
						done();
					});
					done();
					console.info('MediaLibraryTest: End of createImageAsset 1. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 1 returns false');
				}
				done();
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_IMAGEFILE_WEBP_01
* @tc.name     :Create an image file in the device as per the album value
* @tc.desc     :Create an image file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_IMAGEFILE_WEBP_01', 0, async function (done) {
	media.createImageAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createimageasyncWEBPpath.selections;
					value.name = 'newimagefromasync.WEBP';
					value.commitCreate((error, data) => {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_WEBP_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_WEBP_01:FAIL');
						}
						done();
					});
					done();
					console.info('MediaLibraryTest: End of createImageAsset 1. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 1 returns false');
				}
				done();
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_IMAGEFILE_svg_01
* @tc.name     :Create an image file in the device as per the album value
* @tc.desc     :Create an image file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_IMAGEFILE_svg_01', 0, async function (done) {
	media.createImageAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createimageasyncsvgpath.selections;
					value.name = 'newimagefromasync.svg';
					value.commitCreate((error, data) => {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_svg_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_svg_01:FAIL');
						}
						done();
					});
					done();
					console.info('MediaLibraryTest: End of createImageAsset 1. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 1 returns false');
				}
				done();
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_IMAGEFILE_SVG_01
* @tc.name     :Create an image file in the device as per the album value
* @tc.desc     :Create an image file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_IMAGEFILE_SVG_01', 0, async function (done) {
	media.createImageAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createimageasyncSVGpath.selections;
					value.name = 'newimagefromasync.SVG';
					value.commitCreate((error, data) => {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_SVG_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_SVG_01:FAIL');
						}
						done();
					});
					done();
					console.info('MediaLibraryTest: End of createImageAsset 1. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 1 returns false');
				}
				done();
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_IMAGEFILE_NO_ALBUM_NAME_01
* @tc.name     :Create an image file in the device as per the album value
* @tc.desc     :Create an image file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_IMAGEFILE_NO_ALBUM_NAME_01', 0, async function (done) {
	media.createImageAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = "";
					value.name = 'newimagefromasync.png';
					value.commitCreate((error, data) => {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_NO_ALBUM_NAME_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_NO_ALBUM_NAME_01:FAIL');
						}
						done();
					});
					done();
				}
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_IMAGEFILE_NO_IMGAE_FILE_NAME_01
* @tc.name     :Create an image file in the device as per the album value
* @tc.desc     :Create an image file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_IMAGEFILE_NO_IMGAE_FILE_NAME_01', 0, async function (done) {
	media.createImageAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createimagenonamepath.selections;
					value.name = '';
					value.commitCreate((error, data) => {
						if (data == false) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(false).assertFalse();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_NO_IMGAE_FILE_NAME_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_NO_IMGAE_FILE_NAME_01:FAIL');
						}
						done();
					});
					done();
				}
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_IMAGEFILE_INCORRECT_FILE_NAME_01
* @tc.name     :Create an image file in the device as per the album value   [ASYNC]
* @tc.desc     :Create an image file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_IMAGEFILE_INCORRECT_FILE_NAME_01', 0, async function (done) {
	media.createImageAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createimagenonamepath.selections;
					value.name = 'ABC.txt';
					value.commitCreate((error, data) => {
						if (data == false) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(false).assertFalse();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_INCORRECT_FILE_NAME_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_INCORRECT_FILE_NAME_01:FAIL');
						}
						done();
					});
					done();
				}
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_IMAGEFILE_INCORRECT_NAME_02
* @tc.name     :Create an image file in the device as per the album value
* @tc.desc     :Create an image file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_IMAGEFILE_INCORRECT_NAME_02', 0, async function (done) {
	media.createImageAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createimagenonamepath.selections;
					value.name = '.png';
					value.commitCreate((error, data) => {
						if (data == false) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(false).assertFalse();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_INCORRECT_NAME_02:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_INCORRECT_NAME_02:FAIL');
						}
						done();
					});
					done();
				}
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_IMAGEFILE_INVALID_CHARACTERS_NAME_01
* @tc.name     :Create an image file in the device as per the album value
* @tc.desc     :Create an image file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_IMAGEFILE_INVALID_CHARACTERS_NAME_01', 0, async function (done) {
	media.createImageAsset((error, value) => {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createimagenonamepath.selections;
					value.name = '?:\"*|/\\<>".png';
					value.commitCreate((error, data) => {
						if (data == false) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(false).assertFalse();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_INVALID_CHARACTERS_NAME_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEFILE_INVALID_CHARACTERS_NAME_01:FAIL');
						}
						done();
					});
					done();
				}
			});
			done();
		}
	});
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_IMAGEbmpFILE_01
* @tc.name     :Create an image file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an image file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_IMAGEbmpFILE_01', 0, async function (done) {
	const promise = media.createImageAsset();
		promise.then(function (value) {
			if (value != undefined) {
				console.info('MediaLibraryTest: CreateImage returns successful data');
				value.startCreate().then(function (value1) {
					if (value1 == true) {
						console.info('MediaLibraryTest: startCreateImagePromise returns true');
						value.albumName = createimagepromisebmppath.selections;
						console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromisebmppath);
						value.name = 'newimagefrompromise.bmp'
						value.commitCreate().then(function (data) {
							if (data == true) {
								console.info('MediaLibraryTest: commitCreate with album name returns' + data);
								expect(true).assertTrue();
								console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEbmpFILE_01:PASS');
							} else {
								console.info('MediaLibraryTest: commitCreate with album name returns' + data);
								expect().assertFail();
								console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEbmpFILE_01:FAIL');
							}
							done();
						});
						console.info('MediaLibraryTest: End of createImageAsset 3. Now waiting for result');
					} else {
						console.info('MediaLibraryTest: startCreate 3 returns false');
					}
				});
			}
		});
		await promise;
		done();
})
/* *
* @tc.number    :CREATE_PROMISE_IMAGEBMPFILE_01
* @tc.name     :Create an image file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an image file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_IMAGEBMPFILE_01', 0, async function (done) {
	const promise = media.createImageAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateImagePromise returns true');
					value.albumName = createimagepromiseBPMpath.selections;
					console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromiseBPMpath);
					value.name = 'newimagefrompromise.BMP'
					value.commitCreate().then(function (data) {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEBMPFILE_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEBMPFILE_01:FAIL');
						}
						done();
					});
					console.info('MediaLibraryTest: End of createImageAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_IMAGEjpgFILE_01
* @tc.name     :Create an image file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an image file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_IMAGEjpgFILE_01', 0, async function (done) {
	const promise = media.createImageAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateImagePromise returns true');
					value.albumName = createimagepromisejpgpath.selections;
					console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromisejpgpath);
					value.name = 'newimagefrompromise.jpg'
					value.commitCreate().then(function (data) {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEjpgFILE_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEjpgFILE_01:FAIL');
						}
						done();
					});
					console.info('MediaLibraryTest: End of createImageAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_IMAGEJPGFILE_01
* @tc.name     :Create an image file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an image file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_IMAGEJPGFILE_01', 0, async function (done) {
	const promise = media.createImageAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateImagePromise returns true');
					value.albumName = createimagepromiseJPGpath.selections;
					console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromiseJPGpath);
					value.name = 'newimagefrompromise.JPG'
					value.commitCreate().then(function (data) {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEJPGFILE_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEJPGFILE_01:FAIL');
						}
						done();
					});
					console.info('MediaLibraryTest: End of createImageAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_IMAGEpngFILE_01
* @tc.name     :Create an image file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an image file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_IMAGEpngFILE_01', 0, async function (done) {
	const promise = media.createImageAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateImagePromise returns true');
					value.albumName = createimagepromisepngpath.selections;
					console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromisepngpath);
					value.name = 'newimagefrompromise.png'
					value.commitCreate().then(function (data) {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEpngFILE_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEpngFILE_01:FAIL');
						}
						done();
					});
					console.info('MediaLibraryTest: End of createImageAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_IMAGEPNGFILE_01
* @tc.name     :Create an image file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an image file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_IMAGEPNGFILE_01', 0, async function (done) {
	const promise = media.createImageAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateImagePromise returns true');
					value.albumName = createimagepromisePNGpath.selections;
					console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromisePNGpath);
					value.name = 'newimagefrompromise.PNG'
					value.commitCreate().then(function (data) {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEPNGFILE_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEPNGFILE_01:FAIL');
						}
						done();
					});
					console.info('MediaLibraryTest: End of createImageAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_IMAGEgifFILE_01
* @tc.name     :Create an image file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an image file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_IMAGEgifFILE_01', 0, async function (done) {
	const promise = media.createImageAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateImagePromise returns true');
					value.albumName = createimagepromisegifpath.selections;
					console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromisegifpath);
					value.name = 'newimagefrompromise.gif'
					value.commitCreate().then(function (data) {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEgifFILE_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEgifFILE_01:FAIL');
						}
						done();
					});
					console.info('MediaLibraryTest: End of createImageAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_IMAGEGIFFILE_01
* @tc.name     :Create an image file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an image file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_IMAGEGIFFILE_01', 0, async function (done) {
	const promise = media.createImageAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateImagePromise returns true');
					value.albumName = createimagepromiseGIFpath.selections;
					console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromisePNGpath);
					value.name = 'newimagefrompromise.GIF'
					value.commitCreate().then(function (data) {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEGIFFILE_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEGIFFILE_01:FAIL');
						}
						done();
					});
					console.info('MediaLibraryTest: End of createImageAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_IMAGErawFILE_01
* @tc.name     :Create an image file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an image file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_IMAGErawFILE_01', 0, async function (done) {
	const promise = media.createImageAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateImagePromise returns true');
					value.albumName = createimagepromiserawpath.selections;
					console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromiserawpath);
					value.name = 'newimagefrompromise.raw'
					value.commitCreate().then(function (data) {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGErawFILE_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGErawFILE_01:FAIL');
						}
						done();
					});
					console.info('MediaLibraryTest: End of createImageAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_IMAGERAWFILE_01
* @tc.name     :Create an image file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an image file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_IMAGERAWFILE_01', 0, async function (done) {
	const promise = media.createImageAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateImagePromise returns true');
					value.albumName = createimagepromiseRAWpath.selections;
					console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromiseRAWpath);
					value.name = 'newimagefrompromise.RAW'
					value.commitCreate().then(function (data) {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGERAWFILE_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGERAWFILE_01:FAIL');
						}
						done();
					});
					console.info('MediaLibraryTest: End of createImageAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_IMAGEheifFILE_01
* @tc.name     :Create an image file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an image file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_IMAGEheifFILE_01', 0, async function (done) {
	const promise = media.createImageAsset();
		promise.then(function (value) {
			if (value != undefined) {
				console.info('MediaLibraryTest: CreateImage returns successful data');
				value.startCreate().then(function (value1) {
					if (value1 == true) {
						console.info('MediaLibraryTest: startCreateImagePromise returns true');
						value.albumName = createimagepromiseheifpath.selections;
						console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromiseheifpath);
						value.name = 'newimagefrompromise.heif'
						value.commitCreate().then(function (data) {
							if (data == true) {
								console.info('MediaLibraryTest: commitCreate with album name returns' + data);
								expect(true).assertTrue();
								console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEheifFILE_01:PASS');
							} else {
								console.info('MediaLibraryTest: commitCreate with album name returns' + data);
								expect().assertFail();
								console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEheifFILE_01:FAIL');
							}
							done();
						});
						console.info('MediaLibraryTest: End of createImageAsset 3. Now waiting for result');
					} else {
						console.info('MediaLibraryTest: startCreate 3 returns false');
					}
				});
			}
		});
	    await promise;
	    done();
})
/* *
* @tc.number    :CREATE_PROMISE_IMAGEHEIFFILE_01
* @tc.name     :Create an image file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an image file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_IMAGEHEIFFILE_01', 0, async function (done) {
	const promise = media.createImageAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateImagePromise returns true');
					value.albumName = createimagepromiseHEIFpath.selections;
					console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromiseHEIFpath);
					value.name = 'newimagefrompromise.HEIF'
					value.commitCreate().then(function (data) {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEHEIFFILE_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEHEIFFILE_01:FAIL');
						}
						done();
					});
					console.info('MediaLibraryTest: End of createImageAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_IMAGEwebpFILE_01
* @tc.name     :Create an image file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an image file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_IMAGEwebpFILE_01', 0, async function (done) {
	const promise = media.createImageAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateImagePromise returns true');
					value.albumName = createimagepromisewebppath.selections;
					console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromisewebppath);
					value.name = 'newimagefrompromise.webp'
					value.commitCreate().then(function (data) {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEwebpFILE_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEwebpFILE_01:FAIL');
						}
						done();
					});
					console.info('MediaLibraryTest: End of createImageAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_IMAGEWEBPFILE_01
* @tc.name     :Create an image file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an image file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_IMAGEWEBPFILE_01', 0, async function (done) {
	const promise = media.createImageAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateImagePromise returns true');
					value.albumName = createimagepromiseWEBPpath.selections;
					console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromiseWEBPpath);
					value.name = 'newimagefrompromise.WEBP'
					value.commitCreate().then(function (data) {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEWEBPFILE_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEWEBPFILE_01:FAIL');
						}
						done();
					});
					console.info('MediaLibraryTest: End of createImageAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_IMAGEsvgFILE_01
* @tc.name     :Create an image file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an image file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_IMAGEsvgFILE_01', 0, async function (done) {
	const promise = media.createImageAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateImagePromise returns true');
					value.albumName = createimagepromisesvgpath.selections;
					console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromisesvgpath);
					value.name = 'newimagefrompromise.svg'
					value.commitCreate().then(function (data) {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEsvgFILE_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEsvgFILE_01:FAIL');
						}
						done();
					});
					console.info('MediaLibraryTest: End of createImageAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_IMAGESVGFILE_01
* @tc.name     :Create an image file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an image file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_IMAGESVGFILE_01', 0, async function (done) {
	const promise = media.createImageAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateImagePromise returns true');
					value.albumName = createimagepromiseSVGpath.selections;
					console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromiseSVGpath);
					value.name = 'newimagefrompromise.SVG'
					value.commitCreate().then(function (data) {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGESVGFILE_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGESVGFILE_01:FAIL');
						}
						done();
					});
					console.info('MediaLibraryTest: End of createImageAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_IMAGEFILE__NO_ALBUM_NAME_01
* @tc.name     :Create an image file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an image file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_IMAGEFILE__NO_ALBUM_NAME_01', 0, async function (done) {
	const promise = media.createImageAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateImagePromise returns true');
					value.albumName = '';
					value.name = 'newimagefrompromise.JPG'
					value.commitCreate().then(function (data) {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEFILE__NO_ALBUM_NAME_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEFILE__NO_ALBUM_NAME_01:FAIL');
						}
						done();
					});
					console.info('MediaLibraryTest: End of createImageAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_IMAGEFILE__NO_IMAGE_NAME_01
* @tc.name     :Create an image file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an image file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_IMAGEFILE__NO_IMAGE_NAME_01', 0, async function (done) {
	const promise = media.createImageAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateImagePromise returns true');
					value.albumName = createaudiononamepath.selections;
					value.name = ''
					value.commitCreate().then(function (data) {
						if (data == false) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(false).assertFalse();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEFILE__NO_IMAGE_NAME_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEFILE__NO_IMAGE_NAME_01:FAIL');
						}
						done();
					});
					console.info('MediaLibraryTest: End of createImageAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_IMAGEFILE__INCORRECT_IMAGE_NAME_01
* @tc.name     :Create an image file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an image file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_IMAGEFILE__INCORRECT_IMAGE_NAME_01', 0, async function (done) {
	const promise = media.createImageAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateImagePromise returns true');
					value.albumName = createaudiononamepath.selections;
					value.name = 'abc.txt'
					value.commitCreate().then(function (data) {
						if (data == false) {
						console.info('MediaLibraryTest: commitCreate with album name returns' + data);
						expect(false).assertFalse();
						console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEFILE__INCORRECT_IMAGE_NAME_01:PASS');
						} else {
						console.info('MediaLibraryTest: commitCreate with album name returns' + data);
						expect().assertFail();
						console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEFILE__INCORRECT_IMAGE_NAME_01:FAIL');
						}
						done();
					});
					console.info('MediaLibraryTest: End of createImageAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_IMAGEFILE__INCORRECT_IMAGE_NAME_02
* @tc.name     :Create an image file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an image file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_IMAGEFILE__INCORRECT_IMAGE_NAME_02', 0, async function (done) {
	const promise = media.createImageAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateImagePromise returns true');
					value.albumName = createaudiononamepath.selections;
					value.name = '.JPG'
					value.commitCreate().then(function (data) {
						if (data == false) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(false).assertFalse();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEFILE__INCORRECT_IMAGE_NAME_02:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEFILE__INCORRECT_IMAGE_NAME_02:FAIL');
						}
						done();
					});
					console.info('MediaLibraryTest: End of createImageAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_PROMISE_IMAGEFILE__INVALIDCHARACTERS_IMAGE_NAME_01
* @tc.name     :Create an image file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an image file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_IMAGEFILE__INVALIDCHARACTERS_IMAGE_NAME_01', 0, async function (done) {
	const promise = media.createImageAsset();
	promise.then(function (value) {
		if (value != undefined) {
			console.info('MediaLibraryTest: CreateImage returns successful data');
			value.startCreate().then(function (value1) {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreateImagePromise returns true');
					value.albumName = createaudiononamepath.selections;
					value.name = '?:\"*|/\\<>.JPG'
					value.commitCreate().then(function (data) {
						if (data == false) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(false).assertFalse();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEFILE__INVALIDCHARACTERS_IMAGE_NAME_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_PROMISE_IMAGEFILE__INVALIDCHARACTERS_IMAGE_NAME_01:FAIL');
						}
						done();
					});
					console.info('MediaLibraryTest: End of createImageAsset 3. Now waiting for result');
				} else {
					console.info('MediaLibraryTest: startCreate 3 returns false');
				}
			});
		}
	});
	await promise;
	done();
})
/* *
* @tc.number    :CREATE_ASYNC_VIDEOFILE_3gp_01
* @tc.name     :Create an audio file in the device as per the album value
* @tc.desc     :Create an audio file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_VIDEOFILE_3gp_01', 0, async function (done) {
	media.createVideoAsset((error, value) => {
		if (value == undefined) {
			console.info('MediaLibraryTest: createVideoAsset returned ' + value);
			console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_3gp_01:FAIL');
		} else if (value != undefined) {
			console.info('MediaLibraryTest: createVideoAsset returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createvideoasync3gppath.selections;
					value.name = 'newvideofromasync.3gp';
					value.commitCreate((error, data) => {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_3gp_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_3gp_01:FAIL');
						}
						done();
					});
					done();
				} else {
					console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_3gp_01:FAIL');
				}
				done();
			});
			done();
		}
		console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
	});
})
/* *
* @tc.number    :CREATE_ASYNC_VIDEOFILE_3GP_01
* @tc.name     :Create an audio file in the device as per the album value
* @tc.desc     :Create an audio file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_VIDEOFILE_3GP_01', 0, async function (done) {
	media.createVideoAsset((error, value) => {
		if (value == undefined) {
			console.info('MediaLibraryTest: createVideoAsset returned ' + value);
			console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_3GP_01:FAIL');
		} else if (value != undefined) {
			console.info('MediaLibraryTest: createVideoAsset returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createvideoasync3GPpath.selections;
					value.name = 'newvideofromasync.3GP';
					value.commitCreate((error, data) => {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_3GP_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_3GP_01:FAIL');
						}
						done();
					});
					done();
				} else {
					console.info('MMediaLibraryTest: startCreate returns false');
				}
				done();
			});
			done();
		}
		console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
	});
})
/* *
* @tc.number    :CREATE_ASYNC_VIDEOFILE_mov_01
* @tc.name     :Create an audio file in the device as per the album value
* @tc.desc     :Create an audio file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_VIDEOFILE_mov_01', 0, async function (done) {
	media.createVideoAsset((error, value) => {
		if (value == undefined) {
			console.info('MediaLibraryTest: createVideoAsset returned ' + value);
			console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_mov_01:FAIL');
		} else if (value != undefined) {
			console.info('MediaLibraryTest: createVideoAsset returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createvideoasyncmovpath.selections;
					value.name = 'newvideofromasync.mov';
					value.commitCreate((error, data) => {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_mov_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_mov_01:FAIL');
						}
						done();
					});
					done();
				} else {
					console.info('MMediaLibraryTest: startCreate returns false');
				}
				done();
			});
			done();
		}
		console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
	});
})
/* *
* @tc.number    :CREATE_ASYNC_VIDEOFILE_MOV_01
* @tc.name     :Create an audio file in the device as per the album value   [ASYNC]
* @tc.desc     :Create an audio file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_VIDEOFILE_MOV_01', 0, async function (done) {
	media.createVideoAsset((error, value) => {
		if (value == undefined) {
			console.info('MediaLibraryTest: createVideoAsset returned ' + value);
			console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_MOV_01:FAIL');
		} else if (value != undefined) {
			console.info('MediaLibraryTest: createVideoAsset returns successful data');
			value.startCreate((error, value1) => {
				if (value1 == true) {
					console.info('MediaLibraryTest: startCreate returns true');
					value.albumName = createvideoasyncMOVpath.selections;
					value.name = 'newvideofromasync.MOV';
					value.commitCreate((error, data) => {
						if (data == true) {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect(true).assertTrue();
							console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_MOV_01:PASS');
						} else {
							console.info('MediaLibraryTest: commitCreate with album name returns' + data);
							expect().assertFail();
							console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_MOV_01:FAIL');
						}
						done();
					});
					done();
				} else {
					console.info('MMediaLibraryTest: startCreate returns false');
				}
				done();
			});
			done();
		}
		console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
	});
})
/* *
* @tc.number    :CREATE_ASYNC_VIDEOFILE_mpg_01
* @tc.name     :Create an audio file in the device as per the album value   [ASYNC]
* @tc.desc     :Create an audio file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_VIDEOFILE_mpg_01', 0, async function (done) {
media.createVideoAsset((error, value) => {
if (value == undefined) {
console.info('MediaLibraryTest: createVideoAsset returned ' + value);
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_mpg_01:FAIL');
}
else if (value != undefined) {
console.info('MediaLibraryTest: createVideoAsset returns successful data');
value.startCreate((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest: startCreate returns true');
value.albumName = createvideoasyncmpgpath.selections;
value.name = 'newvideofromasync.mpg';
value.commitCreate((error, data) => {
if (data == true) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(true).assertTrue();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_mpg_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_mpg_01:FAIL');
}
done();
});
done();
} else {
console.info('MMediaLibraryTest: startCreate returns false');
}
done();
});
done();
}
console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
});
})
/* *
* @tc.number    :CREATE_ASYNC_VIDEOFILE_MPG_01
* @tc.name     :Create an audio file in the device as per the album value   [ASYNC]
* @tc.desc     :Create an audio file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_VIDEOFILE_MPG_01', 0, async function (done) {
media.createVideoAsset((error, value) => {
if (value == undefined) {
console.info('MediaLibraryTest: createVideoAsset returned ' + value);
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_MPG_01:FAIL');
}
else if (value != undefined) {
console.info('MediaLibraryTest: createVideoAsset returns successful data');
value.startCreate((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest: startCreate returns true');
value.albumName = createvideoasyncMPGpath.selections;
value.name = 'newvideofromasync.MPG';
value.commitCreate((error, data) => {
if (data == true) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(true).assertTrue();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_MPG_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_MPG_01:FAIL');
}
done();
});
done();
} else {
console.info('MMediaLibraryTest: startCreate returns false');
}
done();
});
done();
}
console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
});
})
/* *
* @tc.number    :CREATE_ASYNC_VIDEOFILE_mp4_01
* @tc.name     :Create an audio file in the device as per the album value   [ASYNC]
* @tc.desc     :Create an audio file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_VIDEOFILE_mp4_01', 0, async function (done) {
media.createVideoAsset((error, value) => {
if (value == undefined) {
console.info('MediaLibraryTest: createVideoAsset returned ' + value);
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_mp4_01:FAIL');
}
else if (value != undefined) {
console.info('MediaLibraryTest: createVideoAsset returns successful data');
value.startCreate((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest: startCreate returns true');
value.albumName = createvideoasyncmp4path.selections;
value.name = 'newvideofromasync.mp4';
value.commitCreate((error, data) => {
if (data == true) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(true).assertTrue();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_mp4_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_mp4_01:FAIL');
}
done();
});
done();
} else {
console.info('MMediaLibraryTest: startCreate returns false');
}
done();
});
done();
}
console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
});
})
/* *
* @tc.number    :CREATE_ASYNC_VIDEOFILE_MP4_01
* @tc.name     :Create an audio file in the device as per the album value   [ASYNC]
* @tc.desc     :Create an audio file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_VIDEOFILE_MP4_01', 0, async function (done) {
media.createVideoAsset((error, value) => {
if (value == undefined) {
console.info('MediaLibraryTest: createVideoAsset returned ' + value);
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_MP4_01:FAIL');
}
else if (value != undefined) {
console.info('MediaLibraryTest: createVideoAsset returns successful data');
value.startCreate((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest: startCreate returns true');
value.albumName = createvideoasyncMP4path.selections;
value.name = 'newvideofromasync.MP4';
value.commitCreate((error, data) => {
if (data == true) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(true).assertTrue();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_MP4_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_MP4_01:FAIL');
}
done();
});
done();
} else {
console.info('MMediaLibraryTest: startCreate returns false');
}
done();
});
done();
}
console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
});
})
/* *
* @tc.number    :CREATE_ASYNC_VIDEOFILE_webm_01
* @tc.name     :Create an audio file in the device as per the album value   [ASYNC]
* @tc.desc     :Create an audio file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_VIDEOFILE_webm_01', 0, async function (done) {
media.createVideoAsset((error, value) => {
if (value == undefined) {
console.info('MediaLibraryTest: createVideoAsset returned ' + value);
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_webm_01:FAIL');
}
else if (value != undefined) {
console.info('MediaLibraryTest: createVideoAsset returns successful data');
value.startCreate((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest: startCreate returns true');
value.albumName = createvideoasyncwebmpath.selections;
value.name = 'newvideofromasync.webm';
value.commitCreate((error, data) => {
if (data == true) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(true).assertTrue();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_webm_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_webm_01:FAIL');
}
done();
});
done();
} else {
console.info('MMediaLibraryTest: startCreate returns false');
}
done();
});
done();
}
console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
});
})
/* *
* @tc.number    :CREATE_ASYNC_VIDEOFILE_WEBM_01
* @tc.name     :Create an audio file in the device as per the album value   [ASYNC]
* @tc.desc     :Create an audio file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_VIDEOFILE_WEBM_01', 0, async function (done) {
media.createVideoAsset((error, value) => {
if (value == undefined) {
console.info('MediaLibraryTest: createVideoAsset returned ' + value);
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_WEBM_01:FAIL');
}
else if (value != undefined) {
console.info('MediaLibraryTest: createVideoAsset returns successful data');
value.startCreate((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest: startCreate returns true');
value.albumName = createvideoasyncWEBMpath.selections;
value.name = 'newvideofromasync.WEBM';
value.commitCreate((error, data) => {
if (data == true) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(true).assertTrue();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_WEBM_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_WEBM_01:FAIL');
}
done();
});
done();
} else {
console.info('MMediaLibraryTest: startCreate returns false');
}
done();
});
done();
}
console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
});
})
/* *
* @tc.number    :CREATE_ASYNC_VIDEOFILE_mkv_01
* @tc.name     :Create an audio file in the device as per the album value   [ASYNC]
* @tc.desc     :Create an audio file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_VIDEOFILE_mkv_01', 0, async function (done) {
media.createVideoAsset((error, value) => {
if (value == undefined) {
console.info('MediaLibraryTest: createVideoAsset returned ' + value);
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_mkv_01:FAIL');
}
else if (value != undefined) {
console.info('MediaLibraryTest: createVideoAsset returns successful data');
value.startCreate((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest: startCreate returns true');
value.albumName = createvideoasyncmkvpath.selections;
value.name = 'newvideofromasync.mkv';
value.commitCreate((error, data) => {
if (data == true) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(true).assertTrue();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_mkv_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_mkv_01:FAIL');
}
done();
});
done();
} else {
console.info('MMediaLibraryTest: startCreate returns false');
}
done();
});
done();
}
console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
});
})
/* *
* @tc.number    :CREATE_ASYNC_VIDEOFILE_MKV_01
* @tc.name     :Create an audio file in the device as per the album value   [ASYNC]
* @tc.desc     :Create an audio file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_VIDEOFILE_MKV_01', 0, async function (done) {
media.createVideoAsset((error, value) => {
if (value == undefined) {
console.info('MediaLibraryTest: createVideoAsset returned ' + value);
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_MKV_01:FAIL');
}
else if (value != undefined) {
console.info('MediaLibraryTest: createVideoAsset returns successful data');
value.startCreate((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest: startCreate returns true');
value.albumName = createvideoasyncMKVpath.selections;
value.name = 'newvideofromasync.MKV';
value.commitCreate((error, data) => {
if (data == true) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(true).assertTrue();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_MKV_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_MKV_01:FAIL');
}
done();
});
done();
} else {
console.info('MMediaLibraryTest: startCreate returns false');
}
done();
});
done();
}
console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
});
})
/* *
* @tc.number    :CREATE_ASYNC_VIDEOFILE_NO_ALBUM_NAME_01
* @tc.name     :Create an video file in the device as per the album value   [ASYNC]
* @tc.desc     :Create an video file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_VIDEOFILE_NO_ALBUM_NAME_01', 0, async function (done) {
media.createVideoAsset((error, value) => {
if (value == undefined) {
console.info('MediaLibraryTest: createVideoAsset returned ' + value);
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_NO_ALBUM_NAME_01:FAIL');
}
else if (value != undefined) {
console.info('MediaLibraryTest: createVideoAsset returns successful data');
value.startCreate((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest: startCreate returns true');
value.albumName = "";
value.name = 'newvideofromasync.MKV';
value.commitCreate((error, data) => {
if (data == true) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(true).assertTrue();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_NO_ALBUM_NAME_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE_NO_ALBUM_NAME_01:FAIL');
}
done();
});
done();
} else {
console.info('MMediaLibraryTest: startCreate returns false');
}
done();
});
done();
}
console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
});
})
/* *
* @tc.number    :CREATE_ASYNC_VIDEOFILE__NO_FILE_NAME_01 createaudiononamepath.selections
* @tc.name     :Create an video file in the device as per the album value   [ASYNC]
* @tc.desc     :Create an video file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_VIDEOFILE__NO_FILE_NAME_01', 0, async function (done) {
media.createVideoAsset((error, value) => {
if (value == undefined) {
console.info('MediaLibraryTest: createVideoAsset returned ' + value);
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE__NO_FILE_NAME_01:FAIL');
}
else if (value != undefined) {
console.info('MediaLibraryTest: createVideoAsset returns successful data');
value.startCreate((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest: startCreate returns true');
value.albumName = "createaudiononamepath.selections";
value.name = '';
value.commitCreate((error, data) => {
if (data == false) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(false).assertFalse();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE__NO_FILE_NAME_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE__NO_FILE_NAME_01:FAIL');
}
done();
});
done();
} else {
console.info('MMediaLibraryTest: startCreate returns false');
}
done();
});
done();
}
console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
});
})
/* *
* @tc.number    :CREATE_ASYNC_VIDEOFILE__INCORRECT_FILE_NAME_01
* @tc.name     :Create an video file in the device as per the album value   [ASYNC]
* @tc.desc     :Create an video file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_VIDEOFILE__INCORRECT_FILE_NAME_01', 0, async function (done) {
media.createVideoAsset((error, value) => {
if (value == undefined) {
console.info('MediaLibraryTest: createVideoAsset returned ' + value);
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE__INCORRECT_FILE_NAME_01:FAIL');
}
else if (value != undefined) {
console.info('MediaLibraryTest: createVideoAsset returns successful data');
value.startCreate((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest: startCreate returns true');
value.albumName = "createaudiononamepath.selections";
value.name = 'abc.txt';
value.commitCreate((error, data) => {
if (data == false) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(false).assertFalse();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE__INCORRECT_FILE_NAME_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE__INCORRECT_FILE_NAME_01:FAIL');
}
done();
});
done();
} else {
console.info('MMediaLibraryTest: startCreate returns false');
}
done();
});
done();
}
console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
});
})
/* *
* @tc.number    :CREATE_ASYNC_VIDEOFILE__INCORRECT_FILE_NAME_01
* @tc.name     :Create an video file in the device as per the album value   [ASYNC]
* @tc.desc     :Create an video file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_VIDEOFILE__INCORRECT_FILE_NAME_01', 0, async function (done) {
media.createVideoAsset((error, value) => {
if (value == undefined) {
console.info('MediaLibraryTest: createVideoAsset returned ' + value);
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE__INCORRECT_FILE_NAME_01:FAIL');
}
else if (value != undefined) {
console.info('MediaLibraryTest: createVideoAsset returns successful data');
value.startCreate((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest: startCreate returns true');
value.albumName = "createaudiononamepath.selections";
value.name = '.MP4';
value.commitCreate((error, data) => {
if (data == false) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(false).assertFalse();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE__INCORRECT_FILE_NAME_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE__INCORRECT_FILE_NAME_01:FAIL');
}
done();
});
done();
} else {
console.info('MMediaLibraryTest: startCreate returns false');
}
done();
});
done();
}
console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
});
})
/* *
* @tc.number    :CREATE_ASYNC_VIDEOFILE__INVALID_CHARACTERS_FILE_NAME_01 ?:\"*|/\\<>".mp4
* @tc.name     :Create an video file in the device as per the album value   [ASYNC]
* @tc.desc     :Create an video file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_VIDEOFILE__INVALID_CHARACTERS_FILE_NAME_01', 0, async function (done) {
media.createVideoAsset((error, value) => {
if (value == undefined) {
console.info('MediaLibraryTest: createVideoAsset returned ' + value);
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE__INVALID_CHARACTERS_FILE_NAME_01:FAIL');
}
else if (value != undefined) {
console.info('MediaLibraryTest: createVideoAsset returns successful data');
value.startCreate((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest: startCreate returns true');
value.albumName = "createaudiononamepath.selections";
value.name = '?:\"*|/\\<>".mp4';
value.commitCreate((error, data) => {
if (data == false) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(false).assertFalse();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE__INVALID_CHARACTERS_FILE_NAME_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE__INVALID_CHARACTERS_FILE_NAME_01:FAIL');
}
done();
});
done();
} else {
console.info('MMediaLibraryTest: startCreate returns false');
}
done();
});
done();
}
console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
});
})
/* *
* @tc.number    :CREATE_PROMISE_VIDEO3gpFILE_01
* @tc.name     :Create an Video file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an Video file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_VIDEO3gpFILE_01', 0, async function (done) {
const promise = media.createVideoAsset();
promise.then(function (value) {
if (value != undefined) {
console.info('MediaLibraryTest: CreateImage returns successful data');
value.startCreate().then(function (value1) {
if (value1 == true) {
console.info('MediaLibraryTest: startCreateImagePromise returns true');
value.albumName = createvideopromise3gppath.selections;
console.info('MediaLibraryTest: startCreateImagePromise returns true' + createvideopromise3gppath);
value.name = 'newvideofrompromise.3gp';
value.commitCreate().then(function (data) {
if (data == true) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(true).assertTrue();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEO3gpFILE_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEO3gpFILE_01:FAIL');
}
done();
});
}
});
console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
} else if (value == undefined) {
expect().assertFail();
console.info('MediaLibraryTest: startCreate 3 returns false');
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEO3gpFILE_01:FAIL');
}
});
await promise;
done();
})
/* *
* @tc.number    :CREATE_PROMISE_VIDEO3GPFILE_01
* @tc.name     :Create an Video file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an Video file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_VIDEO3GPFILE_01', 0, async function (done) {
const promise = media.createVideoAsset();
promise.then(function (value) {
if (value != undefined) {
console.info('MediaLibraryTest: CreateImage returns successful data');
value.startCreate().then(function (value1) {
if (value1 == true) {
console.info('MediaLibraryTest: startCreateImagePromise returns true');
value.albumName = createvideopromise3GPpath.selections;
console.info('MediaLibraryTest: startCreateImagePromise returns true' + createvideopromise3gppath);
value.name = 'newvideofrompromise.3GP';
value.commitCreate().then(function (data) {
if (data == true) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(true).assertTrue();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEO3GPFILE_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEO3GPFILE_01:FAIL');
}
done();
});
}
});
console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
} else if (value == undefined) {
expect().assertFail();
console.info('MediaLibraryTest: startCreate 3 returns false');
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEO3GPFILE_01:FAIL');
}
});
await promise;
done();
})
/* *
* @tc.number    :CREATE_PROMISE_VIDEOmovFILE_01
* @tc.name     :Create an Video file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an Video file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_VIDEOmovFILE_01', 0, async function (done) {
const promise = media.createVideoAsset();
promise.then(function (value) {
if (value != undefined) {
console.info('MediaLibraryTest: CreateImage returns successful data');
value.startCreate().then(function (value1) {
if (value1 == true) {
console.info('MediaLibraryTest: startCreateImagePromise returns true');
value.albumName = createvideopromisemovpath.selections;
console.info('MediaLibraryTest: startCreateImagePromise returns true' + createvideopromise3gppath);
value.name = 'newvideofrompromise.mov';
value.commitCreate().then(function (data) {
if (data == true) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(true).assertTrue();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOmovFILE_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOmovFILE_01:FAIL');
}
done();
});
}
});
console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
} else if (value == undefined) {
expect().assertFail();
console.info('MediaLibraryTest: startCreate 3 returns false');
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOmovFILE_01:FAIL');
}
});
await promise;
done();
})
/* *
* @tc.number    :CREATE_PROMISE_VIDEOMOVFILE_01
* @tc.name     :Create an Video file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an Video file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_VIDEOMOVFILE_01', 0, async function (done) {
const promise = media.createVideoAsset();
promise.then(function (value) {
if (value != undefined) {
console.info('MediaLibraryTest: CreateImage returns successful data');
value.startCreate().then(function (value1) {
if (value1 == true) {
console.info('MediaLibraryTest: startCreateImagePromise returns true');
value.albumName = createvideopromiseMOVpath.selections;
console.info('MediaLibraryTest: startCreateImagePromise returns true' + createvideopromise3gppath);
value.name = 'newvideofrompromise.MOV';
value.commitCreate().then(function (data) {
if (data == true) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(true).assertTrue();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOMOVFILE_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOMOVFILE_01:FAIL');
}
done();
});
}
});
console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
} else if (value == undefined) {
expect().assertFail();
console.info('MediaLibraryTest: startCreate 3 returns false');
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOMOVFILE_01:FAIL');
}
});
await promise;
done();
})
/* *
* @tc.number    :CREATE_PROMISE_VIDEOmpgFILE_01
* @tc.name     :Create an Video file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an Video file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_VIDEOmpgFILE_01', 0, async function (done) {
const promise = media.createVideoAsset();
promise.then(function (value) {
if (value != undefined) {
console.info('MediaLibraryTest: CreateImage returns successful data');
value.startCreate().then(function (value1) {
if (value1 == true) {
console.info('MediaLibraryTest: startCreateImagePromise returns true');
value.albumName = createvideopromisempgpath.selections;
console.info('MediaLibraryTest: startCreateImagePromise returns true' + createvideopromise3gppath);
value.name = 'newvideofrompromise.mpg';
value.commitCreate().then(function (data) {
if (data == true) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(true).assertTrue();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOmpgFILE_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOmpgFILE_01:FAIL');
}
done();
});
}
});
console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
} else if (value == undefined) {
expect().assertFail();
console.info('MediaLibraryTest: startCreate 3 returns false');
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOmpgFILE_01:FAIL');
}
});
await promise;
done();
})
/* *
* @tc.number    :CREATE_PROMISE_VIDEOMPGFILE_01
* @tc.name     :Create an Video file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an Video file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_VIDEOMPGFILE_01', 0, async function (done) {
const promise = media.createVideoAsset();
promise.then(function (value) {
if (value != undefined) {
console.info('MediaLibraryTest: CreateImage returns successful data');
value.startCreate().then(function (value1) {
if (value1 == true) {
console.info('MediaLibraryTest: startCreateImagePromise returns true');
value.albumName = createvideopromiseMPGpath.selections;
console.info('MediaLibraryTest: startCreateImagePromise returns true' + createvideopromise3gppath);
value.name = 'newvideofrompromise.MPG';
value.commitCreate().then(function (data) {
if (data == true) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(true).assertTrue();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOMPGFILE_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOMPGFILE_01:FAIL');
}
done();
});
}
});
console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
} else if (value == undefined) {
expect().assertFail();
console.info('MediaLibraryTest: startCreate 3 returns false');
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOMPGFILE_01:FAIL');
}
});
await promise;
done();
})
/* *
* @tc.number    :CREATE_PROMISE_VIDEOmp4FILE_01
* @tc.name     :Create an Video file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an Video file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_VIDEOmp4FILE_01', 0, async function (done) {
const promise = media.createVideoAsset();
promise.then(function (value) {
if (value != undefined) {
console.info('MediaLibraryTest: CreateImage returns successful data');
value.startCreate().then(function (value1) {
if (value1 == true) {
console.info('MediaLibraryTest: startCreateImagePromise returns true');
value.albumName = createvideopromisemp4path.selections;
console.info('MediaLibraryTest: startCreateImagePromise returns true' + createvideopromise3gppath);
value.name = 'newvideofrompromise.mp4';
value.commitCreate().then(function (data) {
if (data == true) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(true).assertTrue();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOmp4FILE_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOmp4FILE_01:FAIL');
}
done();
});
}
});
console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
} else if (value == undefined) {
expect().assertFail();
console.info('MediaLibraryTest: startCreate 3 returns false');
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOmp4FILE_01:FAIL');
}
});
await promise;
done();
})
/* *
* @tc.number    :CREATE_PROMISE_VIDEOMP4FILE_01
* @tc.name     :Create an Video file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an Video file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_VIDEOMP4FILE_01', 0, async function (done) {
const promise = media.createVideoAsset();
promise.then(function (value) {
if (value != undefined) {
console.info('MediaLibraryTest: CreateImage returns successful data');
value.startCreate().then(function (value1) {
if (value1 == true) {
console.info('MediaLibraryTest: startCreateImagePromise returns true');
value.albumName = createvideopromiseMP4path.selections;
console.info('MediaLibraryTest: startCreateImagePromise returns true' + createvideopromise3gppath);
value.name = 'newvideofrompromise.MP4';
value.commitCreate().then(function (data) {
if (data == true) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(true).assertTrue();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOMP4FILE_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOMP4FILE_01:FAIL');
}
done();
});
}
});
console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
} else if (value == undefined) {
expect().assertFail();
console.info('MediaLibraryTest: startCreate 3 returns false');
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOMP4FILE_01:FAIL');
}
});
await promise;
done();
})
/* *
* @tc.number    :CREATE_PROMISE_VIDEOwebmFILE_01
* @tc.name     :Create an Video file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an Video file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_VIDEOwebmFILE_01', 0, async function (done) {
const promise = media.createVideoAsset();
promise.then(function (value) {
if (value != undefined) {
console.info('MediaLibraryTest: CreateImage returns successful data');
value.startCreate().then(function (value1) {
if (value1 == true) {
console.info('MediaLibraryTest: startCreateImagePromise returns true');
value.albumName = createvideopromisewebmpath.selections;
console.info('MediaLibraryTest: startCreateImagePromise returns true' + createvideopromise3gppath);
value.name = 'newvideofrompromise.webm';
value.commitCreate().then(function (data) {
if (data == true) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(true).assertTrue();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOwebmFILE_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOwebmFILE_01:FAIL');
}
done();
});
}
});
console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
} else if (value == undefined) {
expect().assertFail();
console.info('MediaLibraryTest: startCreate 3 returns false');
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOwebmFILE_01:FAIL');
}
});
await promise;
done();
})
/* *
* @tc.number    :CREATE_PROMISE_VIDEOWEBMFILE_01
* @tc.name     :Create an Video file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an Video file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_VIDEOWEBMFILE_01', 0, async function (done) {
const promise = media.createVideoAsset();
promise.then(function (value) {
if (value != undefined) {
console.info('MediaLibraryTest: CreateImage returns successful data');
value.startCreate().then(function (value1) {
if (value1 == true) {
console.info('MediaLibraryTest: startCreateImagePromise returns true');
value.albumName = createvideopromiseWEBMpath.selections;
console.info('MediaLibraryTest: startCreateImagePromise returns true' + createvideopromise3gppath);
value.name = 'newvideofrompromise.WEBM';
value.commitCreate().then(function (data) {
if (data == true) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(true).assertTrue();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOWEBMFILE_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOWEBMFILE_01:FAIL');
}
done();
});
}
});
console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
} else if (value == undefined) {
expect().assertFail();
console.info('MediaLibraryTest: startCreate 3 returns false');
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOWEBMFILE_01:FAIL');
}
});
await promise;
done();
})
/* *
* @tc.number    :CREATE_PROMISE_VIDEOmkvFILE_01
* @tc.name     :Create an Video file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an Video file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_VIDEOmkvFILE_01', 0, async function (done) {
const promise = media.createVideoAsset();
promise.then(function (value) {
if (value != undefined) {
console.info('MediaLibraryTest: CreateImage returns successful data');
value.startCreate().then(function (value1) {
if (value1 == true) {
console.info('MediaLibraryTest: startCreateImagePromise returns true');
value.albumName = createvideopromisemkvpath.selections;
console.info('MediaLibraryTest: startCreateImagePromise returns true' + createvideopromise3gppath);
value.name = 'newvideofrompromise.mkv';
value.commitCreate().then(function (data) {
if (data == true) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(true).assertTrue();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOmkvFILE_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOmkvFILE_01:FAIL');
}
done();
});
}
});
console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
} else if (value == undefined) {
expect().assertFail();
console.info('MediaLibraryTest: startCreate 3 returns false');
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOmkvFILE_01:FAIL');
}
});
await promise;
done();
})
/* *
* @tc.number    :CREATE_PROMISE_VIDEOMKVFILE_01
* @tc.name     :Create an Video file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an Video file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_VIDEOMKVFILE_01', 0, async function (done) {
const promise = media.createVideoAsset();
promise.then(function (value) {
if (value != undefined) {
console.info('MediaLibraryTest: CreateImage returns successful data');
value.startCreate().then(function (value1) {
if (value1 == true) {
console.info('MediaLibraryTest: startCreateImagePromise returns true');
value.albumName = createvideopromiseMKVpath.selections;
console.info('MediaLibraryTest: startCreateImagePromise returns true' + createvideopromise3gppath);
value.name = 'newvideofrompromise.MKV';
value.commitCreate().then(function (data) {
if (data == true) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(true).assertTrue();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOMKVFILE_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOMKVFILE_01:FAIL');
}
done();
});
}
});
console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
} else if (value == undefined) {
expect().assertFail();
console.info('MediaLibraryTest: startCreate 3 returns false');
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOMKVFILE_01:FAIL');
}
});
await promise;
done();
})
/* *
* @tc.number    :CREATE_PROMISE_VIDEOFILE__NO_ALBUM_NAME_01
* @tc.name     :Create an Video file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an Video file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_VIDEOFILE__NO_ALBUM_NAME_01', 0, async function (done) {
const promise = media.createVideoAsset();
promise.then(function (value) {
if (value != undefined) {
console.info('MediaLibraryTest: CreateImage returns successful data');
value.startCreate().then(function (value1) {
if (value1 == true) {
console.info('MediaLibraryTest: startCreateImagePromise returns true');
value.albumName = '';
console.info('MediaLibraryTest: startCreateImagePromise returns true' + value1);
value.name = 'newvideofrompromise.3GP';
value.commitCreate().then(function (data) {
if (data == true) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(true).assertTrue();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOFILE__NO_ALBUM_NAME_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOFILE__NO_ALBUM_NAME_01:FAIL');
}
done();
});
}
});
console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
} else if (value == undefined) {
expect().assertFail();
console.info('MediaLibraryTest: startCreate 3 returns false');
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOFILE__NO_ALBUM_NAME_01:FAIL');
}
});
await promise;
done();
});
/* *
* @tc.number    :CREATE_PROMISE_VIDEOFILE__NO_VIDEO_FILE_NAME_01
* @tc.name     :Create an Video file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an Video file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_VIDEOFILE__NO_VIDEO_FILE_NAME_01', 0, async function (done) {
const promise = media.createVideoAsset();
promise.then(function (value) {
if (value != undefined) {
console.info('MediaLibraryTest: CreateImage returns successful data');
value.startCreate().then(function (value1) {
if (value1 == true) {
console.info('MediaLibraryTest: startCreateImagePromise returns true');
value.albumName = createaudiononamepath.selections;
console.info('MediaLibraryTest: startCreateImagePromise returns true' + value1);
value.name = '';
value.commitCreate().then(function (data) {
if (data == false) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(false).assertFalse();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOFILE__NO_VIDEO_FILE_NAME_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOFILE__NO_VIDEO_FILE_NAME_01:FAIL');
}
done();
});
}
});
console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
} else if (value == undefined) {
expect().assertFail();
console.info('MediaLibraryTest: startCreate 3 returns false');
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOFILE__NO_VIDEO_FILE_NAME_01:FAIL');
}
});
await promise;
done();
});
/* *
* @tc.number    :CREATE_PROMISE_VIDEOFILE__INVALID_VIDEO_FILE_NAME_01
* @tc.name     :Create an Video file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an Video file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_VIDEOFILE__INVALID_VIDEO_FILE_NAME_01', 0, async function (done) {
const promise = media.createVideoAsset();
promise.then(function (value) {
if (value != undefined) {
console.info('MediaLibraryTest: CreateImage returns successful data');
value.startCreate().then(function (value1) {
if (value1 == true) {
console.info('MediaLibraryTest: startCreateImagePromise returns true');
value.albumName = createaudiononamepath.selections;
console.info('MediaLibraryTest: startCreateImagePromise returns true' + value1);
value.name = 'abc.txt';
value.commitCreate().then(function (data) {
if (data == false) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(false).assertFalse();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOFILE__INVALID_VIDEO_FILE_NAME_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOFILE__INVALID_VIDEO_FILE_NAME_01:FAIL');
}
done();
});
}
});
console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
} else if (value == undefined) {
expect().assertFail();
console.info('MediaLibraryTest: startCreate 3 returns false');
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOFILE__INVALID_VIDEO_FILE_NAME_01:FAIL');
}
});
await promise;
done();
});
/* *
* @tc.number    :CREATE_PROMISE_VIDEOFILE__INVALID_VIDEO_FILE_NAME_02
* @tc.name     :Create an Video file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an Video file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_VIDEOFILE__INVALID_VIDEO_FILE_NAME_02', 0, async function (done) {
const promise = media.createVideoAsset();
promise.then(function (value) {
if (value != undefined) {
console.info('MediaLibraryTest: CreateImage returns successful data');
value.startCreate().then(function (value1) {
if (value1 == true) {
console.info('MediaLibraryTest: startCreateImagePromise returns true');
value.albumName = createaudiononamepath.selections;
console.info('MediaLibraryTest: startCreateImagePromise returns true' + value1);
value.name = '.mp4';
value.commitCreate().then(function (data) {
if (data == false) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(false).assertFalse();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOFILE__INVALID_VIDEO_FILE_NAME_02:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOFILE__INVALID_VIDEO_FILE_NAME_02:FAIL');
}
done();
});
}
});
console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
} else if (value == undefined) {
expect().assertFail();
console.info('MediaLibraryTest: startCreate 3 returns false');
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOFILE__INVALID_VIDEO_FILE_NAME_02:FAIL');
}
});
await promise;
done();
});
/* *
* @tc.number    :CREATE_PROMISE_VIDEOFILE__INVALID_CHARACTERS_VIDEO_FILE_NAME_01
* @tc.name     :Create an Video file in the device with empty folder name [PROMISE]
* @tc.desc     :Create an Video file in the device as per the album value [PROMISE]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_PROMISE_VIDEOFILE__INVALID_CHARACTERS_VIDEO_FILE_NAME_01', 0, async function (done) {
const promise = media.createVideoAsset();
promise.then(function (value) {
if (value != undefined) {
console.info('MediaLibraryTest: CreateImage returns successful data');
value.startCreate().then(function (value1) {
if (value1 == true) {
console.info('MediaLibraryTest: startCreateImagePromise returns true');
value.albumName = createaudiononamepath.selections;
console.info('MediaLibraryTest: startCreateImagePromise returns true' + value1);
value.name = '?:\"*|/\\<>".mp4';
value.commitCreate().then(function (data) {
if (data == false) {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect(false).assertFalse();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOFILE__INVALID_CHARACTERS_VIDEO_FILE_NAME_01:PASS');
} else {
console.info('MediaLibraryTest: commitCreate with album name returns' + data);
expect().assertFail();
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOFILE__INVALID_CHARACTERS_VIDEO_FILE_NAME_01:FAIL');
}
done();
});
}
});
console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
} else if (value == undefined) {
expect().assertFail();
console.info('MediaLibraryTest: startCreate 3 returns false');
console.info('MediaLibraryTest:CREATE_PROMISE_VIDEOFILE__INVALID_CHARACTERS_VIDEO_FILE_NAME_01:FAIL');
}
});
await promise;
done();
});
/* *
* @tc.number    :CREATE_ASYNC_VIDEOASSET_01
* @tc.name     :Create an video file in the device as per the album value   [ASYNC]
* @tc.desc     :Create an video file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_VIDEOASSET_01', 0, async function (done) {
media.createVideoAsset((error, value) => {
if (value != undefined) {
console.info('MediaLibraryTest: CreateVideoAssets returns successful data');
expect(true).assertTrue();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOASSET_01:PASS');
} else {
console.info(value.name + 'file is not created');
expect().assertFail();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOASSET_01:FAIL');
}
done();
});
})
/* *
* @tc.number    :CREATE_START_VIDEO_ASSET_01
* @tc.name     :Create an video file in the device as per the album value   [ASYNC]
* @tc.desc     :Create an video file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_START_VIDEO_ASSET_01', 0, async function (done) {
media.createVideoAsset((error, value) => {
if (value != undefined) {
console.info('MediaLibraryTest: CreateVideoAssets returns successful data');
value.startCreate((error, value1) => {
if (value1 == true) {
expect(true).assertTrue();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE__INCORRECT_FILE_NAME_02:PASS');
} else {
console.info(value.name + 'file is not created');
expect().assertFail();
console.info('MediaLibraryTest:CREATE_ASYNC_VIDEOFILE__INCORRECT_FILE_NAME_02:FAIL');
}
done();
});
done();
}
});
})
/* *
* @tc.number    :CREATE_ASYNC_AUDIOASSET_01
* @tc.name     :Create an video file in the device as per the album value   [ASYNC]
* @tc.desc     :Create an video file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_AUDIOASSET_01', 0, async function (done) {
media.createAudioAsset((error, value)=> {
if (value != undefined){
console.info('MediaLibraryTest: CreateAudioAsset returns successful data');
expect(true).assertTrue();
console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOASSET_01:PASS');
}else{
console.info(value.name + 'file is not created');
expect().assertFail();
console.info('MediaLibraryTest:CREATE_ASYNC_AUDIOASSET_01:FAIL');
}
done();
});
done();
})
/* *
* @tc.number    :CREATE_START_AUDIO_ASSET_01
* @tc.name     :Create an video file in the device as per the album value   [ASYNC]
* @tc.desc     :Create an video file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_START_AUDIO_ASSET_01', 0, async function (done) {
media.createAudioAsset((error, value)=> {
if (value != undefined){
console.info('MediaLibraryTest: CreateAudioAsset returns successful data');
value.startCreate((error, value1)=>{
if (value1 == true) {
expect(true).assertTrue();
console.info('MediaLibraryTest:CREATE_START_AUDIO_ASSET_01:PASS');
} else {
console.info(value.name + 'file is not created');
expect().assertFail();
console.info('MediaLibraryTest:CREATE_START_AUDIO_ASSET_01:FAIL');
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number    :CREATE_ASYNC_IMAGEASSET_01
* @tc.name     :Create an image file in the device as per the album value   [ASYNC]
* @tc.desc     :Create an image file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ASYNC_IMAGEASSET_01', 0, async function (done) {
media.createImageAsset((error, value)=> {
if (value != undefined){
console.info('MediaLibraryTest: CreateImageAsset returns successful data');
expect(true).assertTrue();
console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEASSET_01:PASS');
}else{
console.info(value.name + 'file is not created');
expect().assertFail();
console.info('MediaLibraryTest:CREATE_ASYNC_IMAGEASSET_01:FAIL');
}
done();
});
done();
})
/* *
* @tc.number    :CREATE_START_IMAGE_ASSET_01
* @tc.name     :Create an image file in the device as per the album value   [ASYNC]
* @tc.desc     :Create an image file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_START_IMAGE_ASSET_01', 0, async function (done) {
media.createImageAsset((error, value)=> {
if (value != undefined){
console.info('MediaLibraryTest: CreateImageAsset returns successful data');
value.startCreate((error, value1)=>{
if (value1 == true) {
expect(true).assertTrue();
console.info('MediaLibraryTest:CREATE_START_IMAGE_ASSET_01:PASS');
} else {
console.info(value.name + 'file is not created');
expect().assertFail();
console.info('MediaLibraryTest:CREATE_START_IMAGE_ASSET_01:FAIL');
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number    :CREATE_ALBUM_SYNC_EXISTING__01
* @tc.name     :Create an album in the device
* @tc.desc     :Create an album in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ALBUM_ASYNC_EXISTING__01', 0, async function (done) {
media.createAlbum((error, value)=> {
if (value != undefined){
value.albumName = 'new_album_async';
console.info('MediaLibraryTest: Folder new_album has to be created under /data/media');
value.commitCreate((error, value1)=>{
if (value1 == true){
console.info('MediaLibraryTest: commitCreate1 returns ' + value1);
expect(true).assertTrue();
console.info('MediaLibraryTest: New folder is created as ' + value.albumName + ' in /data/media');
console.info('MediaLibraryTest:CREATE_ALBUM_SYNC_EXISTING__01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest:CREATE_ALBUM_SYNC_EXISTING__01:FAIL');
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number    :CREATE_ALBUM_PROMISE_EXISTING__02
* @tc.name     :Create an album in the device
* @tc.desc     :Create an album in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ALBUM_PROMISE_EXISTING__02', 0, async function (done) {
const promise = media.createAlbum();
promise.then(function(value){
if (value != undefined){
value.albumName = 'new_album_promise';
console.info('MediaLibraryTest: Folder new_album1 has to be created under /data/media/');
value.commitCreate().then(function(value1){
if (value1 == true){
console.info('MediaLibraryTest: commitCreate 2 returns ' + value1);
expect(true).assertTrue();
console.info('MediaLibraryTest:is created as ' + value.albumName + ' in /data/media/new_album1');
console.info('MediaLibraryTest:CREATE_ALBUM_PROMISE_EXISTING__02:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest:CREATE_ALBUM_PROMISE_EXISTING__02 :FAIL');
}
});
}
});
await promise;
done();
})
/* *
* @tc.number    :CREATE_ALBUM_PROMISE_OUT_NAME_01
* @tc.name     :Create an album in the device
* @tc.desc     :Create an album in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ALBUM_PROMISE_OUT_NAME_01', 0, async function (done) {
const promise = media.createAlbum();
promise.then(function(value){
if (value != undefined){
value.albumName = '';
console.info('MediaLibraryTest: Folder new_album1 has to be created under /data/media/');
value.commitCreate().then(function(value1){
if (value1 == false){
console.info('MediaLibraryTest: commitCreate 2 returns ' + value1);
expect(true).assertTrue();
console.info('MediaLibraryTest: New folder is not created as ' + value.albumName + ' in /data/media');
console.info('MediaLibraryTest:CREATE_ALBUM_PROMISE_OUT_NAME_01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest:CREATE_ALBUM_PROMISE_OUT_NAME_01 :FAIL');
}
});
}
});
await promise;
done();
})
/* *
* @tc.number    :CREATE_ALBUM_PROMISE__INVALID_CHARACTERS_NAME_01
* @tc.name     :Create an album in the device
* @tc.desc     :Create an album in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CREATE_ALBUM_PROMISE__INVALID_CHARACTERS_NAME_01', 0, async function (done) {
const promise = media.createAlbum();
promise.then(function(value){
if (value != undefined){
value.albumName = '?:*|/<>"';
console.info('MediaLibraryTest: Folder new_album1 has to be created under /data/media/');
value.commitCreate().then(function(value1){
if (value1 == false){
console.info('MediaLibraryTest: commitCreate ALBUM NAME INVALID_CHARACTERS 2 returns ' + value1);
expect(true).assertTrue();
console.info('MediaLibraryTest: New folder is not created as ' + value.albumName + ' in /data/media');
console.info('MediaLibraryTest:CREATE_ALBUM_PROMISE__INVALID_CHARACTERS_NAME_01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest:CREATE_ALBUM_PROMISE__INVALID_CHARACTERS_NAME_01 :FAIL');
}
});
}
});
await promise;
done();
})
/* *
* @tc.number   : START_COMMIT_ASYNC_MODIFY_AUDIOFILE_01
* @tc.name     :Modify an audio file in the system
* @tc.desc     :Modify an audio file in the system
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' START_COMMIT_ASYNC_MODIFY_AUDIOFILE_01', 0, async function (done) {
media.getAudioAssets(modifyaudioasyncpath, (error, value) => {
if (value != undefined) {
var fileAsset = value[0].name;
console.info('MediaLibraryTest:file to be modified is: ' + fileAsset);
value[0].startModify((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest:startModify 1 returns true');
value[0].name = 'newaudioasync_modify.mp3'
value[0].commitModify((error, data) => {
if (data == true) {
expect(true).assertTrue();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_AUDIOFILE_01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_AUDIOFILE_01:FAIL');
}
done();
});
done();
console.info('MediaLibraryTest:End of modify audio 1. Now waiting for result');
} else {
console.info('MediaLibraryTest:startModify 1 returns false');
}
done();
});
done();
} else if (value == undefined) {
expect().assertFail();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_AUDIOFILE_01:FAIL');
}
done();
});
done();
})
/* *
* @tc.number   : START_COMMIT_ASYNC_MODIFY_INCORRECT_AUDIOFILE_01
* @tc.name     :Modify an audio file in the system
* @tc.desc     :Modify an audio file in the system
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' START_COMMIT_ASYNC_MODIFY_AUDIOFILE_01', 0, async function (done) {
media.getAudioAssets(modifyaudioasyncpath, (error, value) => {
if (value != undefined) {
var fileAsset = value[1].name;
console.info('MediaLibraryTest:file to be modified is: ' + fileAsset);
value[1].startModify((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest:startModify 1 returns true');
value[1].name = '?:\"*|/\\<>".mp3'
value[1].commitModify((error, data) => {
console.info('MediaLibraryTest:commitModify 1 returns' + data);
if (data == false) {
expect(false).assertFalse();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_AUDIOFILE_01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_AUDIOFILE_01:FAIL');
}
done();
});
done();
console.info('MediaLibraryTest:End of modify audio 1. Now waiting for result');
} else {
console.info('MediaLibraryTest:startModify 1 returns false');
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number   : START_COMMIT_ASYNC_MODIFY_INCORRECT_AUDIOFILE_02
* @tc.name     :Modify an audio file in the system
* @tc.desc     :Modify an audio file in the system
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' START_COMMIT_ASYNC_MODIFY_INCORRECT_AUDIOFILE_02', 0, async function (done) {
media.getAudioAssets(modifyaudioasyncpath, (error, value) => {
if (value != undefined) {
var fileAsset = value[2].name;
console.info('MediaLibraryTest:file to be modified is: ' + fileAsset);
value[2].startModify((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest:startModify 2 returns true');
value[2].name = '.mp3'
value[2].commitModify((error, data) => {
console.info('MediaLibraryTest:commitModify 2 returns' + data);
//expect(data).assertTrue();
if (data == false) {
expect(false).assertFalse();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_INCORRECT_AUDIOFILE_02:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_INCORRECT_AUDIOFILE_02:FAIL');
}
done();
});
done();
console.info('MediaLibraryTest:End of modify audio 2. Now waiting for result');
} else {
console.info('MediaLibraryTest:startModify 2 returns false');
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number   : START_COMMIT_ASYNC_MODIFY_INCORRECT_AUDIOFILE_03
* @tc.name     :Modify an audio file in the system
* @tc.desc     :Modify an audio file in the system
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' START_COMMIT_ASYNC_MODIFY_INCORRECT_AUDIOFILE_03', 0, async function (done) {
media.getAudioAssets(modifyaudioasyncpath, (error, value) => {
if (value != undefined) {
var fileAsset = value[3].name;
console.info('MediaLibraryTest:file to be modified is: ' + fileAsset);
value[3].startModify((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest:startModify 1 returns true');
value[3].name = 'abc.mp4'
value[3].commitModify((error, data) => {
console.info('MediaLibraryTest:commitModify 1 returns' + data);
//expect(data).assertTrue();
if (data == false) {
expect(false).assertFalse();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_INCORRECT_AUDIOFILE_03:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_INCORRECT_AUDIOFILE_03:FAIL');
}
done();
});
done();
console.info('MediaLibraryTest:End of modify audio 1. Now waiting for result');
} else {
console.info('MediaLibraryTest:startModify 1 returns false');
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number   : START_COMMIT_ASYNC_MODIFY_INCORRECT_AUDIOFILE_04
* @tc.name     :Modify an audio file in the system
* @tc.desc     :Modify an audio file in the system
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' START_COMMIT_ASYNC_MODIFY_INCORRECT_AUDIOFILE_04', 0, async function (done) {
media.getAudioAssets(modifyaudioasyncpath, (error, value) => {
if (value != undefined) {
var fileAsset = value[4].name;
console.info('MediaLibraryTest:file to be modified is: ' + fileAsset);
value[4].startModify((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest:startModify 1 returns true');
value[4].name = 'abc.txt'
value[4].commitModify((error, data) => {
console.info('MediaLibraryTest:commitModify 1 returns' + data);
expect(data).assertTrue();
if (data == false) {
expect(false).assertFalse();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_INCORRECT_AUDIOFILE_04:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_INCORRECT_AUDIOFILE_04:FAIL');
}
done();
});
done();
console.info('MediaLibraryTest:End of modify audio 1. Now waiting for result');
} else {
console.info('MediaLibraryTest:startModify 1 returns false');
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number   : START_COMMIT_ASYNC_MODIFY_IMAGEFILE_01
* @tc.name     :Modify an image file in the system
* @tc.desc     :Modify an image file in the system
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' START_COMMIT_ASYNC_MODIFY_IMAGEFILE_01', 0, async function (done) {
media.getImageAssets(modifyimageasyncpath, (error, value) => {
if (value != undefined) {
var fileAsset = value[0].name;
console.info('MediaLibraryTest:file to be modified is: ' + fileAsset);
value[0].startModify((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest:startModify 1 returns true');
value[0].name = 'newimageasync_modify.png'
value[0].commitModify((error, data) => {
console.info('MediaLibraryTest:commitModify 1 returns' + data);
expect(data).assertTrue();
if (data == true) {
expect(true).assertTrue();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_IMAGEFILE_01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_IMAGEFILE_01:FAIL');
}
done();
});
done();
console.info('MediaLibraryTest:End of modify audio 1. Now waiting for result');
} else {
console.info('MediaLibraryTest:startModify 1 returns false');
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number   : START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_01
* @tc.name     :Modify an image file in the system
* @tc.desc     :Modify an image file in the system
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_01', 0, async function (done) {
media.getImageAssets(modifyimageasyncpath, (error, value) => {
if (value != undefined) {
var fileAsset = value[1].name;
console.info('MediaLibraryTest:file to be modified is: ' + fileAsset);
value[1].startModify((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest:startModify 1 returns true');
value[1].name = 'abc.jpg'
value[1].commitModify((error, data) => {
console.info('MediaLibraryTest:commitModify 1 returns' + data);
expect(data).assertTrue();
if (data == false) {
expect(false).assertFalse();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_01:FAIL');
}
done();
});
done();
console.info('MediaLibraryTest:End of modify audio 1. Now waiting for result');
} else {
console.info('MediaLibraryTest:startModify 1 returns false');
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number   : START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_02
* @tc.name     :Modify an image file in the system
* @tc.desc     :Modify an image file in the system
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_02', 0, async function (done) {
media.getImageAssets(modifyimageasyncpath, (error, value) => {
if (value != undefined) {
var fileAsset = value[2].name;
console.info('MediaLibraryTest:file to be modified is: ' + fileAsset);
value[2].startModify((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest:startModify 1 returns true');
value[2].name = 'abc.txt'
value[2].commitModify((error, data) => {
console.info('MediaLibraryTest:commitModify 1 returns' + data);
expect(data).assertTrue();
if (data == false) {
expect(false).assertFalse();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_02:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_02:FAIL');
}
done();
});
done();
console.info('MediaLibraryTest:End of modify audio 1. Now waiting for result');
} else {
console.info('MediaLibraryTest:startModify 1 returns false');
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number   : START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_03
* @tc.name     :Modify an image file in the system
* @tc.desc     :Modify an image file in the system
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_03', 0, async function (done) {
media.getImageAssets(modifyimageasyncpath, (error, value) => {
if (value != undefined) {
var fileAsset = value[3].name;
console.info('MediaLibraryTest:file to be modified is: ' + fileAsset);
value[0].startModify((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest:startModify 1 returns true');
value[3].name = '?:\"*|<>".png'
value[3].commitModify((error, data) => {
console.info('MediaLibraryTest:commitModify 1 returns' + data);
expect(data).assertTrue();
if (data == false) {
expect(false).assertFalse();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_03:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_03:FAIL');
}
done();
});
done();
console.info('MediaLibraryTest:End of modify audio 1. Now waiting for result');
} else {
console.info('MediaLibraryTest:startModify 1 returns false');
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number   : START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_04
* @tc.name     :Modify an image file in the system
* @tc.desc     :Modify an image file in the system
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_04', 0, async function (done) {
media.getImageAssets(modifyimageasyncpath, (error, value) => {
if (value != undefined) {
var fileAsset = value[4].name;
console.info('MediaLibraryTest:file to be modified is: ' + fileAsset);
value[0].startModify((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest:startModify 1 returns true');
value[4].name = '.png'
value[4].commitModify((error, data) => {
console.info('MediaLibraryTest:commitModify 1 returns' + data);
expect(data).assertTrue();
if (data == false) {
expect(false).assertFalse();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_04:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_04:FAIL');
}
done();
});
done();
console.info('MediaLibraryTest:End of modify audio 1. Now waiting for result');
} else {
console.info('MediaLibraryTest:startModify 1 returns false');
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number   : MODIFY_START_PROMISE_COMMIT_PROMISE_IMAGEFILE_01
* @tc.name     :Modify an image file in the system
* @tc.desc     :Modify an image file in the system
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' MODIFY_START_PROMISE_COMMIT_PROMISE_IMAGEFILE_01', 0, async function (done) {
//it(' MODIFY_START_PROMISE_COMMIT_PROMISE_AUDIOFILE_01', 0, function () {
const promise = media.getImageAssets(modifyimagepromisepath);
//media.getAudioAssets(modifyaudioapromisepath).then(function(value){
promise.then(function (value) {
if (value != undefined) {
console.info('MediaLibraryTest:file to be modified is: ' + value[0].name);
value[0].startModify().then(function (value1) {
if (value1 == true) {
console.info('MediaLibraryTest:startModify returns true');
value[0].name = 'newimagepromise_modify.png'
value[0].commitModify().then(function (data) {
if (data == true) {
console.info('MediaLibraryTest:commitModify returns' + data);
expect(true).assertTrue();
console.info('MediaLibraryTest:' + '  MODIFY_START_PROMISE_COMMIT_PROMISE_IMAGEFILE_01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest:' + '  MODIFY_START_PROMISE_COMMIT_PROMISE_IMAGEFILE_01:FAIL');
}
});
console.info('MediaLibraryTest:End of modify image. Now waiting for result');
} else {
console.info('MediaLibraryTest:startModify image returns false');
}
});
}
});
await promise;
done();
})
/* *
* @tc.number   : START_COMMIT_ASYNC_MODIFY_VIDEOFILE_01
* @tc.name     :Modify an video file in the system
* @tc.desc     :Modify an audio file in the system
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' START_COMMIT_ASYNC_MODIFY_VIDEOFILE_01', 0, async function (done) {
media.getVideoAssets(modifyvideoasyncpath, (error, value) => {
if (value != undefined) {
var fileAsset = value[0].name;
console.info('MediaLibraryTest:file to be modified is: ' + fileAsset);
value[0].startModify((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest:startModify 1 returns true');
value[0].name = 'newaudioasync_modify.mp4'
value[0].commitModify((error, data) => {
console.info('MediaLibraryTest:commitModify 1 returns' + data);
expect(data).assertTrue();
if (data == true) {
expect(true).assertTrue();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_VIDEOFILE_01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_VIDEOFILE_01:FAIL');
}
done();
});
done();
console.info('MediaLibraryTest:End of modify video 1. Now waiting for result');
} else {
console.info('MediaLibraryTest:startModify 1 returns false');
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number   : START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_01
* @tc.name     :Modify an video file in the system
* @tc.desc     :Modify an audio file in the system
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_01', 0, async function (done) {
media.getVideoAssets(modifyvideoasyncpath, (error, value) => {
if (value != undefined) {
var fileAsset = value[0].name;
console.info('MediaLibraryTest:file to be modified is: ' + fileAsset);
value[0].startModify((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest:startModify 1 returns true');
value[0].name = 'abc.mp3'
value[0].commitModify((error, data) => {
console.info('MediaLibraryTest:commitModify 1 returns' + data);
expect(data).assertTrue();
if (data == false) {
expect(false).assertFalse();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_01:FAIL');
}
done();
});
done();
console.info('MediaLibraryTest:End of modify video 1. Now waiting for result');
} else {
console.info('MediaLibraryTest:startModify 1 returns false');
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number   : START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_02
* @tc.name     :Modify an video file in the system
* @tc.desc     :Modify an audio file in the system
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_02', 0, async function (done) {
media.getVideoAssets(modifyvideoasyncpath, (error, value) => {
if (value != undefined) {
var fileAsset = value[0].name;
console.info('MediaLibraryTest:file to be modified is: ' + fileAsset);
value[0].startModify((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest:startModify 1 returns true');
value[0].name = 'abc.txt'
value[0].commitModify((error, data) => {
console.info('MediaLibraryTest:commitModify 1 returns' + data);
expect(data).assertTrue();
if (data == false) {
expect(false).assertFalse();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_02:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_02:FAIL');
}
done();
});
done();
console.info('MediaLibraryTest:End of modify video 1. Now waiting for result');
} else {
console.info('MediaLibraryTest:startModify 1 returns false');
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number   : START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_03
* @tc.name     :Modify an video file in the system
* @tc.desc     :Modify an audio file in the system
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_03', 0, async function (done) {
media.getVideoAssets(modifyvideoasyncpath, (error, value) => {
if (value != undefined) {
var fileAsset = value[0].name;
console.info('MediaLibraryTest:file to be modified is: ' + fileAsset);
value[0].startModify((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest:startModify 1 returns true');
value[0].name = '?:"*|/\<>".mp4'
value[0].commitModify((error, data) => {
console.info('MediaLibraryTest:commitModify 1 returns' + data);
if (data == false) {
expect(false).assertFalse();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_03:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_03:FAIL');
}
done();
});
done();
console.info('MediaLibraryTest:End of modify video 1. Now waiting for result');
} else {
console.info('MediaLibraryTest:startModify 1 returns false');
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number   : START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_04
* @tc.name     :Modify an video file in the system
* @tc.desc     :Modify an audio file in the system
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_04', 0, async function (done) {
media.getVideoAssets(modifyvideoasyncpath, (error, value) => {
if (value != undefined) {
var fileAsset = value[0].name;
console.info('MediaLibraryTest:file to be modified is: ' + fileAsset);
value[0].startModify((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest:startModify 1 returns true');
value[0].name = '.mp4'
value[0].commitModify((error, data) => {
console.info('MediaLibraryTest:commitModify 1 returns' + data);
expect(data).assertTrue();
if (data == false) {
expect(false).assertFalse();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_04:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest: START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_04:FAIL');
}
done();
});
done();
console.info('MediaLibraryTest:End of modify video 1. Now waiting for result');
} else {
console.info('MediaLibraryTest:startModify 1 returns false');
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number   : MODIFY_START_PROMISE_COMMIT_PROMISE_VIDEOFILE_01
* @tc.name     :Modify an video file in the system
* @tc.desc     :Modify an video file in the system
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' MODIFY_START_PROMISE_COMMIT_PROMISE_VIDEOFILE_01', 0, async function (done) {
//it(' MODIFY_START_PROMISE_COMMIT_PROMISE_AUDIOFILE_01', 0, function () {
const promise = media.getVideoAssets(modifyvideopromisepath);
//media.getAudioAssets(modifyaudioapromisepath).then(function(value){
promise.then(function (value) {
if (value != undefined) {
console.info('MediaLibraryTest:file to be modified is: ' + value[0].name);
value[0].startModify().then(function (value1) {
if (value1 == true) {
console.info('MediaLibraryTest:startModify returns true');
value[0].name = 'newimagepromise_modify.mp4'
value[0].commitModify().then(function (data) {
if (data == true) {
console.info('MediaLibraryTest:commitModify returns' + data);
expect(true).assertTrue();
console.info('MediaLibraryTest:' + '  MODIFY_START_PROMISE_COMMIT_PROMISE_VIDEOFILE_01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest:' + '  MODIFY_START_PROMISE_COMMIT_PROMISE_VIDEOFILE_01:FAIL');
}
});
console.info('MediaLibraryTest:End of modify image. Now waiting for result');
} else {
console.info('MediaLibraryTest:startModify image returns false');
}
});
}
});
await promise;
done();
})
/* *
* @tc.number   : COPY_ASYNC_AUDIOFILE_01
* @tc.name     :Copy an audio file in the different directory
* @tc.desc     :Copy an audio file in the different directory
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' COPY_ASYNC_AUDIOFILE_01', 0, async function (done) {
console.info('MediaLibraryTest:  testing  COPY_ASYNC_AUDIOFILE_01');
media.getAudioAssets(MP3, (error, value1) => {
if (value1 != undefined) {
console.info('MediaLibraryTest:  2nd File to be copied is :' + value1[0].name);
media.createAudioAsset((error, value) => {
if (value != undefined) {
console.info('MediaLibraryTest: createAudioAsset returned an value' + value);
value.startCreate((error, value2) => {
if (value2 == true) {
console.info('MediaLibraryTest: startCreate returned an value' + value2);
value.albumName = 'onelevel/copyaudio/async/TOMP3';
console.info('MediaLibraryTest:  Album is yet to create :' + value.albumName);
value1[0].commitCopy(value, (error, data) => {
console.info('MediaLibraryTest: commitCopy returns ' + data);
console.info('MediaLibraryTest:  Album is created :' + value.albumName);
//expect(data).assertTrue();
if (data == true) {
console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is copied to MP3');
expect(true).assertTrue();
console.info('MediaLibraryTest:  COPY_ASYNC_AUDIOFILE_01:PASS');
} else {
console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is not copied to MP3');
expect().assertFail();
console.info('MediaLibraryTest:  COPY_ASYNC_AUDIOFILE_01:FAIL');
}
done();
});
done();
}
done();
});
done();
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number   : COPY_ASYNC_AUDIOFILE_NO_ALBUM_NAME_01
* @tc.name     :Copy an audio file in the different directory
* @tc.desc     :Copy an audio file in the different directory
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' COPY_ASYNC_AUDIOFILE_NO_ALBUM_NAME_01', 0, async function (done) {
console.info('MediaLibraryTest:  testing  COPY_ASYNC_AUDIOFILE_NO_ALBUM_NAME_01');
media.getAudioAssets(MP3, (error, value1) => {
if (value1 != undefined) {
console.info('MediaLibraryTest:  2nd File to be copied is :' + value1[0].name);
media.createAudioAsset((error, value) => {
if (value != undefined) {
console.info('MediaLibraryTest: createAudioAsset returned an value' + value);
value.startCreate((error, value2) => {
if (value2 == true) {
console.info('MediaLibraryTest: startCreate returned an value' + value2);
value.albumName = '';
console.info('MediaLibraryTest:  Album is yet to create :' + value.albumName);
value1[0].commitCopy(value, (error, data) => {
console.info('MediaLibraryTest: commitCopy returns ' + data);
console.info('MediaLibraryTest:  Album is created :' + value.albumName);
//expect(data).assertTrue();
if (data == false) {
console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is copied to MP3');
expect(false).assertFalse();
console.info('MediaLibraryTest:  COPY_ASYNC_AUDIOFILE_NO_ALBUM_NAME_01:PASS');
} else {
console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is not copied to MP3');
expect().assertFail();
console.info('MediaLibraryTest:  COPY_ASYNC_AUDIOFILE_NO_ALBUM_NAME_01:FAIL');
}
done();
});
done();
}
done();
});
done();
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number   : COPY_ASYNC_AUDIOFILE_INVALID_ALBUM_NAME_01
* @tc.name     :Copy an audio file in the different directory
* @tc.desc     :Copy an audio file in the different directory
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' COPY_ASYNC_AUDIOFILE_INVALID_ALBUM_NAME_01', 0, async function (done) {
console.info('MediaLibraryTest:  testing  COPY_ASYNC_AUDIOFILE_INVALID_ALBUM_NAME_01');
media.getAudioAssets(MP3, (error, value1) => {
if (value1 != undefined) {
console.info('MediaLibraryTest:  2nd File to be copied is :' + value1[0].name);
media.createAudioAsset((error, value) => {
if (value != undefined) {
console.info('MediaLibraryTest: createAudioAsset returned an value' + value);
value.startCreate((error, value2) => {
if (value2 == true) {
console.info('MediaLibraryTest: startCreate returned an value' + value2);
value.albumName = '?<>!@#$%.copyaudio';
console.info('MediaLibraryTest:  Album is yet to create :' + value.albumName);
value1[0].commitCopy(value, (error, data) => {
console.info('MediaLibraryTest: commitCopy returns ' + data);
console.info('MediaLibraryTest:  Album is created :' + value.albumName);
//expect(data).assertTrue();
if (data == false) {
expect(false).assertFalse();
console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is copied to MP3');
console.info('MediaLibraryTest:  COPY_ASYNC_AUDIOFILE_INVALID_ALBUM_NAME_01:PASS');
} else {
console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is not copied to MP3');
expect().assertFail();
console.info('MediaLibraryTest:  COPY_ASYNC_AUDIOFILE_INVALID_ALBUM_NAME_01:FAIL');
}
done();
});
done();
}
done();
});
done();
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number   : COPY_PROMISE_AUDIOFILE_01
* @tc.name     :Copy an audio file in the different directory
* @tc.desc     :Copy an audio file in the different directory
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' COPY_PROMISE_AUDIOFILE_01', 0, async function (done) {
//media.getAudioAssets(f1,(error,value1)=>{
const promise = media.getAudioAssets(MP3);
promise.then(function (value1) {
if (value1 != undefined) {
console.info('MediaLibraryTest: File to be copied for case 1 is :' + value1[0].name);
media.createAudioAsset((error, value) => {
if (value != undefined) {
console.info('MediaLibraryTest: CreateAudioAsset returned successfully');
value.startCreate((error, value2) => {
if (value2 == true) {
console.info('MediaLibraryTest: startCreate returns true');
value.albumName = 'onelevel/copyaudio/promise/TOMP3';
value1[0].commitCopy(value).then(function (data) {
console.info('MediaLibraryTest: commitCopy case 1 returns :' + data);
if (data == true) {
expect(true).assertTrue();
console.info('MediaLibraryTest: ' +
' COPY_PROMISE_AUDIOFILE_01:PASS');
} else {
console.info('MediaLibraryTest: File' + value1[0].name +
'is not copied to /data/media/audio');
expect().assertFail();
console.info('MediaLibraryTest: ' +
' COPY_PROMISE_AUDIOFILE_01:FAIL');
}
});
} else {
console.info('startCreate returns false');
}
});
}
});
}
});
await promise;
done();
})
/* *
* @tc.number   : COPY_ASYNC_IMAGEFILE_01
* @tc.name     :Copy an image file in the different directory
* @tc.desc     :Copy an image file in the different directory
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' COPY_ASYNC_IMAGEFILE_01', 0, async function (done) {
console.info('MediaLibraryTest:  testing  COPY_ASYNC_IMAGEFILE_01');
media.getImageAssets(PNG, (error, value1) => {
if (value1 != undefined) {
console.info('MediaLibraryTest:  2nd File to be copied is :' + value1[0].name);
media.createImageAsset((error, value) => {
if (value != undefined) {
console.info('MediaLibraryTest: createImageAsset returned an value' + value);
value.startCreate((error, value2) => {
if (value2 == true) {
console.info('MediaLibraryTest: startCreate returned an value' + value2);
value.albumName = 'onelevel/copyimage/async/TOPNG';
console.info('MediaLibraryTest:  Album is yet to create :' + value.albumName);
value1[0].commitCopy(value, (error, data) => {
console.info('MediaLibraryTest: commitCopy returns ' + data);
console.info('MediaLibraryTest:  Album is created :' + value.albumName);
//expect(data).assertTrue();
if (data == true) {
expect(true).assertTrue();
console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is copied to PNG');
console.info('MediaLibraryTest:  COPY_ASYNC_IMAGEFILE_01:PASS');
} else {
console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is not copied to PNG');
expect().assertFail();
console.info('MediaLibraryTest:  COPY_ASYNC_IMAGEFILE_01:FAIL');
}
done();
});
done();
}
done();
});
done();
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number   : COPY_ASYNC_IMAGEFILE_NO_ALBUM_NAME_01
* @tc.name     :Copy an audio file in the different directory
* @tc.desc     :Copy an audio file in the different directory
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' COPY_ASYNC_IMAGEFILE_NO_ALBUM_NAME_01', 0, async function (done) {
console.info('MediaLibraryTest:  testing  COPY_ASYNC_IMAGEFILE_NO_ALBUM_NAME_01');
media.getImageAssets(PNG, (error, value1) => {
if (value1 != undefined) {
console.info('MediaLibraryTest:  2nd File to be copied is :' + value1[0].name);
media.createImageAsset((error, value) => {
if (value != undefined) {
console.info('MediaLibraryTest: createImageAsset returned an value' + value);
value.startCreate((error, value2) => {
if (value2 == true) {
console.info('MediaLibraryTest: startCreate returned an value' + value2);
value.albumName = '';
console.info('MediaLibraryTest:  Album is yet to create :' + value.albumName);
value1[0].commitCopy(value, (error, data) => {
console.info('MediaLibraryTest: commitCopy returns ' + data);
console.info('MediaLibraryTest:  Album is created :' + value.albumName);
//expect(data).assertTrue();
if (data == false) {
expect(false).assertFalse();
console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is copied to MP3');
console.info('MediaLibraryTest:  COPY_ASYNC_IMAGEFILE_NO_ALBUM_NAME_01:PASS');
} else {
console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is not copied to MP3');
expect().assertFail();
console.info('MediaLibraryTest:  COPY_ASYNC_IMAGEFILE_NO_ALBUM_NAME_01:FAIL');
}
done();
});
done();
}
done();
});
done();
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number   : COPY_ASYNC_IMAGEFILE_INVALID_ALBUM_NAME_01
* @tc.name     :Copy an image file in the different directory
* @tc.desc     :Copy an image file in the different directory
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' COPY_ASYNC_IMAGEFILE_INVALID_ALBUM_NAME_01', 0, async function (done) {
console.info('MediaLibraryTest:  testing  COPY_ASYNC_IMAGEFILE_INVALID_ALBUM_NAME_01');
media.getImageAssets(MP3, (error, value1) => {
if (value1 != undefined) {
console.info('MediaLibraryTest:  2nd File to be copied is :' + value1[0].name);
media.createImageAsset((error, value) => {
if (value != undefined) {
console.info('MediaLibraryTest: createImageAsset returned an value' + value);
value.startCreate((error, value2) => {
if (value2 == true) {
console.info('MediaLibraryTest: startCreate returned an value' + value2);
value.albumName = '?<>!@#$%.copyimage';
console.info('MediaLibraryTest:  Album is yet to create :' + value.albumName);
value1[0].commitCopy(value, (error, data) => {
console.info('MediaLibraryTest: commitCopy returns ' + data);
console.info('MediaLibraryTest:  Album is created :' + value.albumName);
//expect(data).assertTrue();
if (data == false) {
console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is copied to MP3');
expect(false).assertFalse();
console.info('MediaLibraryTest:  COPY_ASYNC_IMAGEFILE_INVALID_ALBUM_NAME_01:PASS');
} else {
console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is not copied to MP3');
expect().assertFail();
console.info('MediaLibraryTest:  COPY_ASYNC_IMAGEFILE_INVALID_ALBUM_NAME_01:FAIL');
}
done();
});
done();
}
done();
});
done();
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number   : COPY_PROMISE_IMAGEFILE_01
* @tc.name     :Copy an image file in the different directory
* @tc.desc     :Copy an image file in the different directory
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' COPY_PROMISE_IMAGEFILE_01', 0, async function (done) {
//media.getAudioAssets(f1,(error,value1)=>{
const promise = media.getImageAssets(PNG);
promise.then(function (value1) {
if (value1 != undefined) {
console.info('MediaLibraryTest: File to be copied for case 1 is :' + value1[0].name);
media.createImageAsset((error, value) => {
if (value != undefined) {
console.info('MediaLibraryTest: createImageAsset returned successfully');
value.startCreate((error, value2) => {
if (value2 == true) {
console.info('MediaLibraryTest: startCreate returns true');
value.albumName = 'onelevel/copyimage/promise/TOPNG';
value1[0].commitCopy(value).then(function (data) {
console.info('MediaLibraryTest: commitCopy case 1 returns :' + data);
if (data == true) {
console.info('MediaLibraryTest: File' + value1[0].name +
'is copied to /data/media/onelevel/copyimage/promise/TOPNG');
expect(true).assertTrue();
console.info('MediaLibraryTest: ' +
' COPY_PROMISE_IMAGEFILE_01:PASS');
} else {
console.info('MediaLibraryTest: File' + value1[0].name +
'is not copied to /data/media/onelevel/copyimage/promise/TOPNG');
expect().assertFail();
console.info('MediaLibraryTest: ' +
' COPY_PROMISE_IMAGEFILE_01:FAIL');
}
});
} else {
console.info('startCreate returns false');
}
});
}
});
}
});
await promise;
done();
})
/* *
* @tc.number   : COPY_ASYNC_VIDEOFILE_01
* @tc.name     :Copy an video file in the different directory
* @tc.desc     :Copy an video file in the different directory
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' COPY_ASYNC_VIDEOFILE_01', 0, async function (done) {
console.info('MediaLibraryTest:  testing  COPY_ASYNC_VIDEOFILE_01');
media.getVideoAssets(MP4, (error, value1) => {
if (value1 != undefined) {
console.info('MediaLibraryTest:  2nd File to be copied is :' + value1[0].name);
media.createVideoAsset((error, value) => {
if (value != undefined) {
console.info('MediaLibraryTest: createVideoAsset returned an value' + value);
value.startCreate((error, value2) => {
if (value2 == true) {
console.info('MediaLibraryTest: startCreate returned an value' + value2);
value.albumName = 'onelevel/copyvideo/async/TOMP4';
console.info('MediaLibraryTest:  Album is yet to create :' + value.albumName);
value1[0].commitCopy(value, (error, data) => {
console.info('MediaLibraryTest: commitCopy returns ' + data);
console.info('MediaLibraryTest:  Album is created :' + value.albumName);
//expect(data).assertTrue();
if (data == true) {
console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is copied to PNG');
expect(true).assertTrue();
console.info('MediaLibraryTest:  COPY_ASYNC_VIDEOFILE_01:PASS');
} else {
console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is not copied to PNG');
expect().assertFail();
console.info('MediaLibraryTest:  COPY_ASYNC_VIDEOFILE_01:FAIL');
}
done();
});
done();
}
done();
});
done();
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number   : COPY_ASYNC_VIDEOFILE_NO_ALBUM_NAME_01
* @tc.name     :Copy an video file in the different directory
* @tc.desc     :Copy an video file in the different directory
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' COPY_ASYNC_VIDEOFILE_NO_ALBUM_NAME_01', 0, async function (done) {
console.info('MediaLibraryTest:  testing  COPY_ASYNC_VIDEOFILE_NO_ALBUM_NAME_01');
media.getVideoAssets(MP4, (error, value1) => {
if (value1 != undefined) {
console.info('MediaLibraryTest:  2nd File to be copied is :' + value1[0].name);
media.createVideoAsset((error, value) => {
if (value != undefined) {
console.info('MediaLibraryTest: createVideoAsset returned an value' + value);
value.startCreate((error, value2) => {
if (value2 == true) {
console.info('MediaLibraryTest: startCreate returned an value' + value2);
value.albumName = '';
console.info('MediaLibraryTest:  Album is yet to create :' + value.albumName);
value1[0].commitCopy(value, (error, data) => {
console.info('MediaLibraryTest: commitCopy returns ' + data);
console.info('MediaLibraryTest:  Album is created :' + value.albumName);
//expect(data).assertTrue();
if (data == false) {
console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is copied to MP3');
expect(false).assertFalse();
console.info('MediaLibraryTest:  COPY_ASYNC_VIDEOFILE_NO_ALBUM_NAME_01:PASS');
} else {
console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is not copied to MP3');
expect().assertFail();
console.info('MediaLibraryTest:  COPY_ASYNC_VIDEOFILE_NO_ALBUM_NAME_01:FAIL');
}
done();
});
done();
}
done();
});
done();
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number   : COPY_ASYNC_VIDEOFILE_INVALID_ALBUM_NAME_01
* @tc.name     :Copy an video file in the different directory
* @tc.desc     :Copy an video file in the different directory
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' COPY_ASYNC_VIDEOFILE_INVALID_ALBUM_NAME_01', 0, async function (done) {
console.info('MediaLibraryTest:  testing  COPY_ASYNC_VIDEOFILE_INVALID_ALBUM_NAME_01');
media.getVideoAssets(MP3, (error, value1) => {
if (value1 != undefined) {
console.info('MediaLibraryTest:  2nd File to be copied is :' + value1[0].name);
media.createVideoAsset((error, value) => {
if (value != undefined) {
console.info('MediaLibraryTest: createVideoAsset returned an value' + value);
value.startCreate((error, value2) => {
if (value2 == true) {
console.info('MediaLibraryTest: startCreate returned an value' + value2);
value.albumName = '?<>!@#$%.copyvideo';
console.info('MediaLibraryTest:  Album is yet to create :' + value.albumName);
value1[0].commitCopy(value, (error, data) => {
console.info('MediaLibraryTest: commitCopy returns ' + data);
console.info('MediaLibraryTest:  Album is created :' + value.albumName);
//expect(data).assertTrue();
if (data == false) {
console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is copied to MP3');
expect(false).assertFalse();
console.info('MediaLibraryTest:  COPY_ASYNC_IMAGEFILE_INVALID_ALBUM_NAME_01:PASS');
} else {
console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is not copied to MP3');
expect().assertFail();
console.info('MediaLibraryTest:  COPY_ASYNC_IMAGEFILE_INVALID_ALBUM_NAME_01:FAIL');
}
done();
});
done();
}
done();
});
done();
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number   : COPY_PROMISE_VIDEOFILE_01
* @tc.name     :Copy an video file in the different directory
* @tc.desc     :Copy an video file in the different directory
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' COPY_PROMISE_VIDEOFILE_01', 0, async function (done) {
//media.getAudioAssets(f1,(error,value1)=>{
const promise = media.getVideoAssets(MP4);
promise.then(function (value1) {
if (value1 != undefined) {
console.info('MediaLibraryTest: File to be copied for case 1 is :' + value1[0].name);
media.createVideoAsset((error, value) => {
if (value != undefined) {
console.info('MediaLibraryTest: createImageAsset returned successfully');
value.startCreate((error, value2) => {
if (value2 == true) {
console.info('MediaLibraryTest: startCreate returns true');
value.albumName = 'onelevel/copyvideo/promise/TOPNG';
value1[0].commitCopy(value).then(function (data) {
console.info('MediaLibraryTest: commitCopy case 1 returns :' + data);
if (data == true) {
console.info('MediaLibraryTest: File' + value1[0].name +
'is copied to /data/media/onelevel/copyvideo/promise/TOPNG');
expect(true).assertTrue();
console.info('MediaLibraryTest: ' +
' COPY_PROMISE_VIDEOFILE_01:PASS');
} else {
console.info('MediaLibraryTest: File' + value1[0].name +
'is not copied to /data/media/onelevel/copyvideo/promise/TOPNG');
expect().assertFail();
console.info('MediaLibraryTest: ' +
' COPY_PROMISE_VIDEOFILE_01:FAIL');
}
});
} else {
console.info('startCreate returns false');
}
});
}
});
}
});
await promise;
done();
})
/* *
* @tc.number   : DELETE_ASYNC_IMAGEFILE_01
* @tc.name     :Delete an image file in the device
* @tc.desc     :Delete an image file in the device as per the selected audioasset
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' DELETE_ASYNC_IMAGEFILE_01', 0, async function (done) {
media.getImageAssets(deleteimageasyncpath, (error, value) => {
if (value != undefined) {
var fileAsset = value[0].name;
console.info('MediaLibraryTest: file selected is:' + 'data/media/' +
deleteimageasyncpath.selections + '/' + fileAsset);
value[0].commitDelete((error, value1) => {
console.info('MediaLibraryTest: commitDelete 1 returns ' + value1);
if (value1 == true) {
expect(true).assertTrue();
console.info('MediaLibraryTest: ' + ' DELETE_ASYNC_IMAGEFILE_01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest: ' + ' DELETE_ASYNC_IMAGEFILE_01:FAIL');
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number   : DELETE_ASYNC_AUDIOFILE_01
* @tc.name     :Delete an audio file in the device
* @tc.desc     :Delete an audio file in the device as per the selected audioasset
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' DELETE_ASYNC_AUDIOFILE_01', 0, async function (done) {
media.getAudioAssets(deleteaudioasyncpath, (error, value) => {
if (value != undefined) {
var fileAsset = value[0].name;
console.info('MediaLibraryTest: file selected is:' + 'data/media/' +
deleteaudioasyncpath.selections + '/' + fileAsset);
value[0].commitDelete((error, value1) => {
console.info('MediaLibraryTest: commitDelete 1 returns ' + value1);
if (value1 == true) {
expect(true).assertTrue();
console.info('MediaLibraryTest: ' + ' DELETE_ASYNC_AUDIOFILE_01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest: ' + ' DELETE_ASYNC_AUDIOFILE_01:FAIL');
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number   : DELETE_ASYNC_VIDEOFILE_01
* @tc.name     :Delete an video file in the device
* @tc.desc     :Delete an video file in the device as per the selected audioasset
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' DELETE_ASYNC_VIDEOFILE_01', 0, async function (done) {
media.getVideoAssets(deletevideoasyncpath, (error, value) => {
if (value != undefined) {
var fileAsset = value[0].name;
console.info('MediaLibraryTest: file selected is:' + 'data/media/' +
deletevideoasyncpath.selections + '/' + fileAsset);
value[0].commitDelete((error, value1) => {
console.info('MediaLibraryTest: commitDelete 1 returns ' + value1);
if (value1 == true) {
expect(true).assertTrue();
console.info('MediaLibraryTest: ' + ' DELETE_ASYNC_VIDEOFILE_01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest: ' + ' DELETE_ASYNC_VIDEOFILE_01:FAIL');
}
done();
});
done();
}
done();
});
done();
})
/* *
* @tc.number   : DELETE_PROMISE_AUDIOFILE_01
* @tc.name     :Delete an audio file in the device
* @tc.desc     :Delete an audio file in the device as per the selected audioasset
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' DELETE_PROMISE_AUDIOFILE_01', 0, async function (done) {
//const promise = media.getAudioAssets(deleteaudiopromisepath,(error, value)=> {
const promise = media.getAudioAssets(deleteaudiopromisepath);
promise.then(function (value) {
var fileAsset = value[0].name;
if (value != undefined) {
console.info('MediaLibraryTest: file selected is:' + 'data/media/' +
deleteaudiopromisepath.selections + '/' + fileAsset);
value[0].commitDelete().then(function (value1) {
console.info('MediaLibraryTest:commitDelete 2 returns ' + value1);
//expect(value1).assertTrue();
if (value1 == true) {
expect(true).assertTrue();
console.info('MediaLibraryTest:  DELETE_PROMISE_AUDIOFILE_01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest:  DELETE_PROMISE_AUDIOFILE_01:FAIL');
}
});
}
});
await promise;
done();
})
/* *
* @tc.number   : DELETE_PROMISE_IMAGEFILE_01
* @tc.name     :Delete an image file in the device
* @tc.desc     :Delete an image file in the device as per the selected audioasset
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' DELETE_PROMISE_IMAGEFILE_01', 0, async function (done) {
//const promise = media.getAudioAssets(deleteaudiopromisepath,(error, value)=> {
const promise = media.getImageAssets(deleteimagepromisepath);
promise.then(function (value) {
var fileAsset = value[0].name;
if (value != undefined) {
console.info('MediaLibraryTest: file selected is:' + 'data/media/' +
deleteimagepromisepath.selections + '/' + fileAsset);
value[0].commitDelete().then(function (value1) {
console.info('MediaLibraryTest:commitDelete 2 returns ' + value1);
//expect(value1).assertTrue();
if (value1 == true) {
expect(true).assertTrue();
console.info('MediaLibraryTest:  DELETE_PROMISE_IMAGEFILE_01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest:  DELETE_PROMISE_IMAGEFILE_01:FAIL');
}
});
}
});
await promise;
done();
})
/* *
* @tc.number   : DELETE_PROMISE_VIDEOFILE_01
* @tc.name     :Delete an video file in the device
* @tc.desc     :Delete an video file in the device as per the selected audioasset
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' DELETE_PROMISE_VIDEOFILE_01', 0, async function (done) {
const promise = media.getVideoAssets(deletevideopromisepath);
promise.then(function (value) {
var fileAsset = value[0].name;
if (value != undefined) {
console.info('MediaLibraryTest: file selected is:' + 'data/media/' +
deletevideopromisepath.selections + '/' + fileAsset);
value[0].commitDelete().then(function (value1) {
console.info('MediaLibraryTest:commitDelete 2 returns ' + value1);
//expect(value1).assertTrue();
if (value1 == true) {
expect(true).assertTrue();
console.info('MediaLibraryTest:  DELETE_PROMISE_VIDEOFILE_01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest:  DELETE_PROMISE_VIDEOFILE_01:FAIL');
}
});
}
});
await promise;
done();
})
/* *
* @tc.number    :CREATE_CANCEL_ASYNC_AUDIOFILE_01
* @tc.name     :Cancel Create an audio file in the device as per the album value [/data/media/onelevel/CreateCancelAudio] [ASYNC]
* @tc.desc     :Create an audio file in the device as per the album value [/data/media/onelevel/CreateCancelAudio]
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CANCEL_ASYNC_AUDIOFILE_01', 0, async function (done) {
const promise = media.createAudioAsset();
promise.then(function (value) {
if (value != undefined) {
console.info('MediaLibraryTest:CreateAudio 2 returns successful data');
value.startCreate((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest:startCreate 2 returns true');
value.albumName = 'onelevel/createcancelaudioasync';
value.name = 'cancel_newaudio1.aac'
value.cancelCreate((error, data) => {
console.info('MediaLibraryTest:cancelCreate returns' + data);
console.info('MediaLibraryTest:Check if file 2 is cancelled or not:' + value);
expect(data).assertTrue();
if (data == true) {
expect(true).assertTrue();
console.info('MediaLibraryTest: CANCEL_ASYNC_AUDIOFILE_01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest: CANCEL_ASYNC_AUDIOFILE_01:FAIL');
}
});
console.info('MediaLibraryTest:End of createAudioAsset 2. Now waiting for result');
} else {
console.info('MediaLibraryTest:startCreate 2 returns false');
}
});
}
});
await promise;
done();
})
/* *
* @tc.number    :CREATE_CANCEL_ASYNC_IMAGEFILE_01
* @tc.name     :Cancel Create an image file in the device as per the album value
* @tc.desc     :Create an audio image in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CANCEL_ASYNC_IMAGEFILE_01', 0, async function (done) {
const promise = media.createImageAsset();
promise.then(function (value) {
if (value != undefined) {
console.info('MediaLibraryTest:CreateImage 2 returns successful data');
value.startCreate((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest:startCreate 2 returns true');
value.albumName = 'onelevel/createcancelimageasync';
value.name = 'cancel_newimage1.png'
value.cancelCreate((error, data) => {
console.info('MediaLibraryTest:cancelCreate returns' + data);
console.info('MediaLibraryTest:Check if file 2 is cancelled or not:' + value);
expect(data).assertTrue();
if (data == true) {
expect(true).assertTrue();
console.info('MediaLibraryTest: CANCEL_ASYNC_IMAGEFILE_01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest: CANCEL_ASYNC_IMAGEFILE_01:FAIL');
}
});
console.info('MediaLibraryTest:End of createImageAsset 2. Now waiting for result');
} else {
console.info('MediaLibraryTest:startCreate 2 returns false');
}
});
}
});
await promise;
done();
})
/* *
* @tc.number    :CREATE_CANCEL_ASYNC_VIDEOFILE_01
* @tc.name     :Cancel Create an video file in the device as per the album value
* @tc.desc     :Create an audio video in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CANCEL_ASYNC_VIDEOFILE_01', 0, async function (done) {
const promise = media.createVideoAsset();
promise.then(function (value) {
if (value != undefined) {
console.info('MediaLibraryTest:CreateVideo 2 returns successful data');
value.startCreate((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest:startCreate 2 returns true');
value.albumName = 'onelevel/createcancelvideoasync';
value.name = 'cancel_newvideo1.mp4'
value.cancelCreate((error, data) => {
console.info('MediaLibraryTest:cancelCreate returns' + data);
console.info('MediaLibraryTest:Check if file 2 is cancelled or not:' + value);
expect(data).assertTrue();
if (data == true) {
expect(true).assertTrue();
console.info('MediaLibraryTest: CANCEL_ASYNC_VIDEOFILE_01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest: CANCEL_ASYNC_VIDEOFILE_01:FAIL');
}
});
console.info('MediaLibraryTest:End of createImageAsset 2. Now waiting for result');
} else {
console.info('MediaLibraryTest:startCreate 2 returns false');
}
});
}
});
await promise;
done();
})
/* *
* @tc.number   : CANCEL_PROMISE_AUDIOFILE_01
* @tc.name     :Cancel Create an audio file in the device as per the album value
* @tc.desc     :Create an audio file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CANCEL_PROMISE_AUDIOFILE_01', 0, async function (done) {
const promise = media.createAudioAsset();
promise.then(function (value) {
if (value != undefined) {
console.info('MediaLibraryTest:CreateAudio 1 returns successful data');
value.startCreate((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest:startCreate 1 returns true');
value.albumName = 'onelevel/CreateCancelAudioPromise';
value.name = 'cancel_newaudio.aac'
value.cancelCreate().then(function (data) {
console.info('MediaLibraryTest:cancelCreate returns' + data);
console.info('MediaLibraryTest:Check if file 1 is cancelled or not:' + value);
//expect(data).assertTrue();
if (data == true) {
expect(true).assertTrue();
console.info('MediaLibraryTest: CANCEL_PROMISE_AUDIOFILE_01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest: CANCEL_PROMISE_AUDIOFILE_01:FAIL');
}
});
console.info('MediaLibraryTest:End of createAudioAsset 1. Now waiting for result');
} else {
console.info('MediaLibraryTest:startCreate 1 returns false');
}
});
}
});
await promise;
done();
})
/* *
* @tc.number   : CANCEL_PROMISE_IMAGEFILE_01
* @tc.name     :Cancel Create an audio file in the device as per the album value
* @tc.desc     :Create an audio file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CANCEL_PROMISE_IMAGEFILE_01', 0, async function (done) {
const promise = media.createImageAsset();
promise.then(function (value) {
if (value != undefined) {
console.info('MediaLibraryTest:CreateImage 1 returns successful data');
value.startCreate((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest:startCreate 1 returns true');
value.albumName = 'onelevel/createcancelimagepromise';
value.name = 'cancel_newimage1.png'
value.cancelCreate().then(function (data) {
console.info('MediaLibraryTest:cancelCreate returns' + data);
console.info('MediaLibraryTest:Check if file 1 is cancelled or not:' + value);
//expect(data).assertTrue();
if (data == true) {
expect(true).assertTrue();
console.info('MediaLibraryTest: CANCEL_PROMISE_IMAGEFILE_01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest: CANCEL_PROMISE_IMAGEFILE_01:FAIL');
}
});
console.info('MediaLibraryTest:End of createImageAsset 1. Now waiting for result');
} else {
console.info('MediaLibraryTest:startCreate 1 returns false');
}
});
}
});
await promise;
done();
})
/* *
* @tc.number   : CANCEL_PROMISE_VIDEOFILE_01
* @tc.name     :Cancel Create an video file in the device as per the album value
* @tc.desc     :Create an video file in the device as per the album value
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' CANCEL_PROMISE_VIDEOFILE_01', 0, async function (done) {
const promise = media.createVideoAsset();
promise.then(function (value) {
if (value != undefined) {
console.info('MediaLibraryTest:CreateVideo 1 returns successful data');
value.startCreate((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest:startCreate 1 returns true');
value.albumName = 'onelevel/createcancelvideopromise';
value.name = 'cancel_newvideo1.mp4'
value.cancelCreate().then(function (data) {
console.info('MediaLibraryTest:cancelCreate returns' + data);
console.info('MediaLibraryTest:Check if file 1 is cancelled or not:' + value);
//expect(data).assertTrue();
if (data == true) {
expect(true).assertTrue();
console.info('MediaLibraryTest: CANCEL_PROMISE_VIDEOFILE_01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest: CANCEL_PROMISE_VIDEOFILE_01:FAIL');
}
});
console.info('MediaLibraryTest:End of createVideoAsset 1. Now waiting for result');
} else {
console.info('MediaLibraryTest:startCreate 1 returns false');
}
});
}
});
await promise;
done();
})
/* *
* @tc.number   : MODIFYCANCEL_ASYNC_AUDIOFILE_01
* @tc.name     :Modify cancel an audio file in the device
* @tc.desc     :Modify cancel an audio file in the device
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' MODIFYCANCEL_ASYNC_AUDIOFILE_01', 0, async function (done) {
const promise = media.getAudioAssets(MP3);
promise.then(function (value) {
if (value != undefined) {
var file_name = value[0].name;
console.info('MediaLibraryTest: File name to be modified is:' + file_name);
value[0].startModify((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest: startModify 1 returns true');
value[0].name = 'newaudio10_modify.mp3';
value[0].cancelModify((error, data) => {
console.info('MediaLibraryTest: cancelModify returns' + data);
console.info('MediaLibraryTest: File name after cancelModify is:' + value[0].name);
if (data == true) {
expect(true).assertTrue();
console.info('MediaLibraryTest: MODIFYCANCEL_ASYNC_AUDIOFILE_01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest: MODIFYCANCEL_ASYNC_AUDIOFILE_01:FAIL');
}
});
console.info('MediaLibraryTest: End of modify cancel audio 1. Now waiting for result');
} else {
console.info('MediaLibraryTest: startModify 1 returns false');
}
});
}
});
await promise;
done();
})
/* *
* @tc.number   : MODIFYCANCEL_ASYNC_IMAGEFILE_01
* @tc.name     :Modify cancel an image file in the device
* @tc.desc     :Modify cancel an image file in the device
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' MODIFYCANCEL_ASYNC_IMAGEFILE_01', 0, async function (done) {
const promise = media.getImageAssets(PNG);
promise.then(function (value) {
if (value != undefined) {
var file_name = value[0].name;
console.info('MediaLibraryTest: File name to be modified is:' + file_name);
value[0].startModify((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest: startModify 1 returns true');
value[0].name = 'newimage10_modify.PNG';
value[0].cancelModify((error, data) => {
console.info('MediaLibraryTest: cancelModify returns' + data);
console.info('MediaLibraryTest: File name after cancelModify is:' + value[0].name);
if (data == true) {
expect(true).assertTrue();
console.info('MediaLibraryTest: MODIFYCANCEL_ASYNC_IMAGEFILE_01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest: MODIFYCANCEL_ASYNC_IMAGEFILE_01:FAIL');
}
});
console.info('MediaLibraryTest: End of modify cancel image 1. Now waiting for result');
} else {
console.info('MediaLibraryTest: startModify 1 returns false');
}
});
}
});
await promise;
done();
})
/* *
* @tc.number   : MODIFYCANCEL_ASYNC_VIDEOFILE_01
* @tc.name     :Modify cancel an video file in the device
* @tc.desc     :Modify cancel an video file in the device
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' MODIFYCANCEL_ASYNC_VIDEOFILE_01', 0, async function (done) {
const promise = media.getVideoAssets(MP4);
promise.then(function (value) {
if (value != undefined) {
var file_name = value[0].name;
console.info('MediaLibraryTest: File name to be modified is:' + file_name);
value[0].startModify((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest: startModify 1 returns true');
value[0].name = 'newvideo10_modify.MP4';
value[0].cancelModify((error, data) => {
console.info('MediaLibraryTest: cancelModify returns' + data);
console.info('MediaLibraryTest: File name after cancelModify is:' + value[0].name);
if (data == true) {
expect(true).assertTrue();
console.info('MediaLibraryTest: MODIFYCANCEL_ASYNC_VIDEOFILE_01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest: MODIFYCANCEL_ASYNC_VIDEOFILE_01:FAIL');
}
});
console.info('MediaLibraryTest: End of modify cancel video 1. Now waiting for result');
} else {
console.info('MediaLibraryTest: startModify 1 returns false');
}
});
}
});
await promise;
done();
})
/* *
* @tc.number   : MODIFYCANCEL_PROMISE_AUDIOFILE_01
* @tc.name     :Modify cancel an audio file in the device
* @tc.desc     :Modify cancel an audio file in the device
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' MODIFYCANCEL_PROMISE_AUDIOFILE_01', 0, async function (done) {
const promise = media.getAudioAssets(MP3);
promise.then(function (value) {
if (value != undefined) {
console.info('MediaLibraryTest: file to be modified is: ' + value[0].name);
value[0].startModify((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest: startModify 2 returns true');
value[0].name = 'newaudio_modify.mp3'
value[0].cancelModify().then(function (data) {
console.info('MediaLibraryTest: cancelModify returns' + data);
//expect(data).assertTrue();
if (data == true) {
console.info('MediaLibraryTest: File name is:' + value[0].name);
expect(true).assertTrue();
console.info('MediaLibraryTest:  MODIFYCANCEL_PROMISE_AUDIOFILE_01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest:  MODIFYCANCEL_PROMISE_AUDIOFILE_01:FAIL');
}
});
console.info('MediaLibraryTest: End of modify cancel audio 2. Now waiting for result');
} else {
console.info('MediaLibraryTest: startModify 2 returns false');
}
});
}
});
await promise;
done();
})
/* *
* @tc.number   : MODIFYCANCEL_PROMISE_IMAGEFILE_01
* @tc.name     :Modify cancel an audio file in the device
* @tc.desc     :Modify cancel an audio file in the device
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' MODIFYCANCEL_PROMISE_IMAGEFILE_01', 0, async function (done) {
const promise = media.getImageAssets(PNG);
promise.then(function (value) {
if (value != undefined) {
console.info('MediaLibraryTest: file to be modified is: ' + value[0].name);
value[0].startModify((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest: startModify 2 returns true');
value[0].name = 'newimage_modify.png'
value[0].cancelModify().then(function (data) {
console.info('MediaLibraryTest: cancelModify returns' + data);
//expect(data).assertTrue();
if (data == true) {
console.info('MediaLibraryTest: File name is:' + value[0].name);
expect(true).assertTrue();
console.info('MediaLibraryTest:  MODIFYCANCEL_PROMISE_IMAGEFILE_01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest:  MODIFYCANCEL_PROMISE_IMAGEFILE_01:FAIL');
}
});
console.info('MediaLibraryTest: End of modify cancel image 2. Now waiting for result');
} else {
console.info('MediaLibraryTest: startModify 2 returns false');
}
});
}
});
await promise;
done();
})
/* *
* @tc.number   : MODIFYCANCEL_PROMISE_VIDEOFILE_01
* @tc.name     :Modify cancel an video file in the device
* @tc.desc     :Modify cancel an video file in the device
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' MODIFYCANCEL_PROMISE_VIDEOFILE_01', 0, async function (done) {
const promise = media.getVideoAssets(MP4);
promise.then(function (value) {
if (value != undefined) {
console.info('MediaLibraryTest: file to be modified is: ' + value[0].name);
value[0].startModify((error, value1) => {
if (value1 == true) {
console.info('MediaLibraryTest: startModify 2 returns true');
value[0].name = 'newvideo_modify.mp4'
value[0].cancelModify().then(function (data) {
console.info('MediaLibraryTest: cancelModify returns' + data);
//expect(data).assertTrue();
if (data == true) {
console.info('MediaLibraryTest: File name is:' + value[0].name);
expect(true).assertTrue();
console.info('MediaLibraryTest:  MODIFYCANCEL_PROMISE_VIDEOFILE_01:PASS');
} else {
expect().assertFail();
console.info('MediaLibraryTest:  MODIFYCANCEL_PROMISE_VIDEOFILE_01:FAIL');
}
});
console.info('MediaLibraryTest: End of modify cancel video 2. Now waiting for result');
} else {
console.info('MediaLibraryTest: startModify 2 returns false');
}
});
}
});
await promise;
done();
})
/* *
* @tc.number   : MODIFYIMAGEALBUM_ASYNC__FETCH_01
* @tc.name     :Get all Album details from /data/media/imagealbum using promise +
check album id and album name
* @tc.desc     :Get all Album details from /data/media/imagealbum using promise +
check album id and album name
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' MODIFYIMAGEALBUM_ASYNC__FETCH_01', 0, function () {
console.info('MediaLibraryTest: path for image is' + modifyimagealbumasyncpath.selections);
const promise = media.getImageAlbums(modifyimagealbumasyncpath);
promise.then(function (data) {
if ((data == undefined) || (data != undefined)) {
console.info('MediaLibraryTest: There are no image files in ' + modifyimagealbumasyncpath.selections);
console.info("orginal value of album is :" + data[0].albumName);
data[0].albumName = 'modify_imagealbum';
data[0].commitModify((error, value1) => {
console.info("value is :" + value1);
if (value1 == true) {
expect(true).assertTrue();
console.info('MediaLibraryTest:  MODIFYIMAGEALBUM_ASYNC__FETCH_01:PASS ');
} else {
expect().assertFail();
console.info('MediaLibraryTest:  MODIFYIMAGEALBUM_ASYNC__FETCH_01:FAIL ');
}
});
}
});
})
/* *
* @tc.number   : MODIFYIMAGEALBUM_ASYNC__NONAME_01
* @tc.name     :Get all Album details from /data/media/imagealbum using promise +
check album id and album name
* @tc.desc     :Get all Album details from /data/media/imagealbum using promise +
check album id and album name
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' MODIFYIMAGEALBUM_ASYNC__NONAME_01', 0, function () {
console.info('MediaLibraryTest: path for image is' + modifyimagealbumasyncpath.selections);
const promise = media.getImageAlbums(modifyimagealbumasyncpath);
promise.then(function (data) {
if ((data == undefined) || (data != undefined)) {
console.info('MediaLibraryTest: There are no image files in ' + modifyimagealbumasyncpath.selections);
console.info("orginal value of album is :" + data[0].albumName);
data[0].albumName = '';
data[0].commitModify((error, value1) => {
console.info("value is :" + value1);
if (value1 == false) {
expect(false).assertFalse();
console.info('MediaLibraryTest:  MODIFYIMAGEALBUM_ASYNC__NONAME_01:PASS ');
} else {
expect().assertFail();
console.info('MediaLibraryTest:  MODIFYIMAGEALBUM_ASYNC__NONAME_01:FAIL ');
}
});
}
});
})
/* *
* @tc.number   : MODIFYIMAGEALBUM_ASYNC__INVALID_CHARACTERS_01
* @tc.name     :Get all Album details from /data/media/imagealbum using promise +
check album id and album name
* @tc.desc     :Get all Album details from /data/media/imagealbum using promise +
check album id and album name
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' MODIFYIMAGEALBUM_ASYNC__INVALID_CHARACTERS_01', 0, function () {
console.info('MediaLibraryTest: path for image is' + modifyimagealbumasyncpath.selections);
const promise = media.getImageAlbums(modifyimagealbumasyncpath);
promise.then(function (data) {
if ((data == undefined) || (data != undefined)) {
console.info('MediaLibraryTest: There are no image files in ' + modifyimagealbumasyncpath.selections);
console.info("orginal value of album is :" + data[0].albumName);
data[0].albumName = '?:\"*|/\\<>';
data[0].commitModify((error, value1) => {
console.info("value is :" + value1);
if (value1 == false) {
expect(false).assertFalse();
console.info('MediaLibraryTest:  MODIFYIMAGEALBUM_ASYNC__INVALID_CHARACTERS_01:PASS ');
} else {
expect().assertFail();
console.info('MediaLibraryTest:  MODIFYIMAGEALBUM_ASYNC__INVALID_CHARACTERS_01:FAIL ');
}
});
}
});
})
/* *
* @tc.number   : MODIFYVIDEOALBUM_ASYNC__FETCH_01
* @tc.name     :Get all Album details from /data/media/videoalbum using promise +
check album id and album name
* @tc.desc     :Get all Album details from /data/media/videoalbum using promise +
check album id and album name
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' MODIFYVIDEOALBUM_ASYNC__FETCH_01', 0, async function (done) {
console.info('MediaLibraryTest: path for image is' + modifyvideoalbumasyncpath.selections);
const promise = media.getVideoAlbums(modifyvideoalbumasyncpath);
promise.then(function (data) {
if (data == undefined) {
console.info('MediaLibraryTest: There are no video files in ' + modifyvideoalbumasyncpath.selections);
} else if (data != undefined) {
console.info("orginal value of album is :" + data[0].albumName);
data[0].albumName = 'modify_videoalbum';
data[0].commitModify((error, value1) => {
console.info("value is :" + value1);
if (value1 == true) {
expect(true).assertTrue();
console.info('MediaLibraryTest:  MODIFYVIDEOALBUM_ASYNC__FETCH_01:PASS ');
} else {
expect().assertFail();
console.info('MediaLibraryTest:  MODIFYVIDEOALBUM_ASYNC__FETCH_01:FAIL ');
}
});
} else {
console.info("MOdify album is not defined / undefined");
}
});
await promise;
done();
})
/* *
* @tc.number   : MODIFYVIDEOALBUM_ASYNC__NO_NAME_01
* @tc.name     :Get all Album details from /data/media/videoalbum using promise +
check album id and album name
* @tc.desc     :Get all Album details from /data/media/videoalbum using promise +
check album id and album name
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' MODIFYVIDEOALBUM_ASYNC__NO_NAME_01', 0, async function (done) {
console.info('MediaLibraryTest: path for image is' + modifyvideoalbumasyncpath.selections);
const promise = media.getVideoAlbums(modifyvideoalbumasyncpath);
promise.then(function (data) {
if (data == undefined) {
console.info('MediaLibraryTest: There are no video files in ' + modifyvideoalbumasyncpath.selections);
} else if (data != undefined) {
console.info("orginal value of album is :" + data[0].albumName);
data[0].albumName = '';
data[0].commitModify((error, value1) => {
console.info("value is :" + value1);
if (value1 == false) {
expect(false).assertFalse();
console.info('MediaLibraryTest:  MODIFYVIDEOALBUM_ASYNC__NO_NAME_01:PASS ');
} else {
expect().assertFail();
console.info('MediaLibraryTest:  MODIFYVIDEOALBUM_ASYNC__NO_NAME_01:FAIL ');
}
});
} else {
console.info("MOdify album is not defined / undefined");
}
});
await promise;
done();
})
/* *
* @tc.number   : MODIFYVIDEOALBUM_ASYNC__INVALID_CHARACTERS_01
* @tc.name     :Get all Album details from /data/media/videoalbum using promise +
check album id and album name
* @tc.desc     :Get all Album details from /data/media/videoalbum using promise +
check album id and album name
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' MODIFYVIDEOALBUM_ASYNC__INVALID_CHARACTERS_01', 0, async function (done) {
console.info('MediaLibraryTest: path for image is' + modifyvideoalbumasyncpath.selections);
const promise = media.getVideoAlbums(modifyvideoalbumasyncpath);
promise.then(function (data) {
if (data == undefined) {
console.info('MediaLibraryTest: There are no video files in ' + modifyvideoalbumasyncpath.selections);
} else if (data != undefined) {
console.info("orginal value of album is :" + data[0].albumName);
data[0].albumName = '?:\"*|/\\<>';
data[0].commitModify((error, value1) => {
console.info("value is :" + value1);
if (value1 == false) {
expect(false).assertFalse();
console.info('MediaLibraryTest:  MODIFYVIDEOALBUM_ASYNC__INVALID_CHARACTERS_01:PASS ');
} else {
expect().assertFail();
console.info('MediaLibraryTest:  MODIFYVIDEOALBUM_ASYNC__INVALID_CHARACTERS_01:FAIL ');
}
});
} else {
console.info("MOdify album is not defined / undefined");
}
});
await promise;
done();
})
/* *
* @tc.number   : MODIFYVIDEOALBUM_PROMISE__FETCH_01
* @tc.name     :Get all Album details from /data/media/videoalbum using promise +
check album id and album name
* @tc.desc     :Get all Album details from /data/media/videoalbum using promise +
check album id and album name
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' MODIFYVIDEOALBUM_PROMISE__FETCH_01', 0, async function (done) {
console.info('MediaLibraryTest: path for image is' + modifyvideoalbumpromisepath.selections);
const promise = media.getVideoAlbums(modifyvideoalbumpromisepath);
promise.then(function (data) {
if (data == undefined) {
console.info('MediaLibraryTest: There are no video files in ' + modifyvideoalbumpromisepath.selections);
} else if (data != undefined) {
console.info("orginal value of album is :" + data[0].albumName);
data[0].albumName = 'modify_videoalbum';
data[0].commitModify().then(function (value1) {
console.info("value is :" + value1);
if (value1 == true) {
expect(true).assertTrue();
console.info('MediaLibraryTest:  MODIFYVIDEOALBUM_PROMISE__FETCH_01:PASS ');
} else {
expect().assertFail();
console.info('MediaLibraryTest:  MODIFYVIDEOALBUM_PROMISE__FETCH_01:FAIL ');
}
});
} else {
console.info('MOdify album is not defined / undefined');
}
});
await promise;
done();
})
/* *
* @tc.number   : MODIFYIMAGEALBUM_PROMISE__FETCH_01
* @tc.name     :Get all Album details from /data/media/imagealbum using promise +
check album id and album name
* @tc.desc     :Get all Album details from /data/media/imagealbum using promise +
check album id and album name
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
it(' MODIFYIMAGEALBUM_PROMISE__FETCH_01', 0, async function (done) {
console.info('MediaLibraryTest: path for image is' + modifyimagealbumpromisepath.selections);
const promise = media.getImageAlbums(modifyimagealbumpromisepath);
promise.then(function (data) {
if ((data == undefined) || (data != undefined)) {
console.info('MediaLibraryTest: There are no image files in ' + modifyimagealbumpromisepath.selections);
console.info("orginal value of album is :" + data[0].albumName);
data[0].albumName = 'modify_imagealbum';
data[0].commitModify().then(function (value1) {
console.info("value is :" + value1);
if (value1 == true) {
expect(true).assertTrue();
console.info('MediaLibraryTest:  MODIFYIMAGEALBUM_PROMISE__FETCH_01:PASS ');
} else {
expect().assertFail();
console.info('MediaLibraryTest:  MODIFYIMAGEALBUM_PROMISE__FETCH_01:FAIL ');
}
});
}
});
await promise;
done();
})



/* *
* @tc.number   :NA
* @tc.name     :NA
* @tc.desc     :Get metadata of each file in the folder ("media/data" or "media/data/onelevel")
based on condition
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
function getMediaData(value) {
var result1=[];
var name = value.name;
var URI = value.URI;
var nameUri = URI.slice(-(name.length));
expect(name).assertEqual(nameUri);
result1.push('albumName:' + value.albumName,'albumId:' + value.albumId,
'id:' + value.id, 'URI:' + value.URI, 'mediaType:' + value.mediaType,
'name:' + value.name, 'size:' + value.size, 'dateAdded:' + value.dateAdded,
'dateModified:' + value.dateModified);
console.info('MediaLibraryTest: Media assets data of id:' + value.id + ':' + result1);
}

function getImageDataCheckMimeMediaType(value)  {
var result1 = [];
result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
console.log('MediaLibraryTest:given directory has a BMP file'+result1);
console.log('MediaLibraryTest:given directory has a BMP file'+result1[0]+result1[1]+result1[2]);
console.info('MediaLibraryTest: Image data of id:'+ value.id + ':' + value.name + ':' +
value.mimeType + ':'+value.mediaType);
console.log('MediaLibraryTest:given directory has a media file'+result1[0].slice(-7)+result1[1].slice(-1));
if ((result1[0].slice(-7) == 'image/*') &&  (result1[1].slice(-1) == '3')){
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + 'IS A IMAGE FILE');
}else {
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + 'IS NOT A IMAGE FILE');
}
}

/* *
* @tc.number   :NA
* @tc.name     :NA
* @tc.desc     :Get metadata of each file in the folder ("media/data" or "media/data/onelevel")
based on condition
* @tc.size     :MEDIUM
* @tc.type     :Function
* @tc.level    :Level 0
*/
function getImageData(value) {
var result1 = [];
expect(value.mimeType).assertEqual('image/*');
expect(value.mediaType).assertEqual(3);
var name = value.name;
var URI = value.URI;
var nameUri = URI.slice(-(name.length));
expect(name).assertEqual(nameUri);
result1.push('mimeType:' + value.mimeType, 'width:' + value.width, 'height:' + value.height,
'albumName:' + value.albumName,'albumId:' + value.albumId, 'id:' + value.id, ' URI:' + value.URI,
'mediaType:' + value.mediaType, 'name:' + value.name,'size:' + value.size,
'dateAdded:' + value.dateAdded, 'dateModified:' + value.dateModified);
if ((result1[0].slice(-7) == 'image/*') && (result1[7].slice(-1) == '3')){
console.info(' MediaLibraryTest: Image data of id:'+ value.id + ':' + result1);
}
}

function getImageDataBmp(value) {
var result1 = [];
expect(value.mimeType).assertEqual('image/*');
expect(value.mediaType).assertEqual(3);
//mimeType = value.mimeType;
//mimeTypeBmpArray = mimeType.substring(0,mimeType.indexOf("/"));
//mimeTypeBmp = mimeTypeBmpArray[1];
//var Bmpname = value.name[-3];
var name = value.name;
var URI = value.URI;
var nameUri = URI.slice(-(name.length));
expect(name).assertEqual(nameUri);
result1.push('mimeType:' + value.mimeType, 'width:' + value.width, 'height:' + value.height,
'albumName:' + value.albumName,'albumId:' + value.albumId, 'id:' + value.id, ' URI:' + value.URI,
'mediaType:' + value.mediaType, 'name:' + value.name,'size:' + value.size,
'dateAdded:' + value.dateAdded, 'dateModified:' + value.dateModified);
//console.log('MediaLibraryTest:given directory has a BMP file before slice'+result1[8]);
var Bmpname = result1[8].slice(-3);
//console.log('MediaLibraryTest:given directory has a BMP file after slice'+Bmpname);
if (Bmpname == "bmp" || Bmpname == "BMP"){
console.log('given directory has a BMP file')
console.info(' MediaLibraryTest: Image data of id:'+ value.id + ':' + result1);
}
}
function getBMPImageDataCheckMimeMediaType(value)  {
console.log('MediaLibraryTest:given directory has a BMP file'+value.name);
var result1 = [];
result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
console.log('MediaLibraryTest:given directory has a BMP file'+result1);
console.log('MediaLibraryTest:given directory has a BMP file'+ result1[0]+ result1[1]+ result1[2]);
var Bmpname = result1[2].slice(-3);
console.log('MediaLibraryTest:given directory has a BMP file'+result1[0].slice(-7)+result1[1].slice(-1));
if ((result1[0].slice(-7) == 'image/*') && (result1[1].slice(-1) == '3')){
// Check whether the file is wav format or not//
if (Bmpname == "bmp" || Bmpname == "BMP"){
console.log('given directory has a BMP file')
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' +
'BMP IS A IMAGE FILE');
}
}else {
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' +
'BMP IS NOT A IMAGE FILE');
}
}
function getImageDataGif(value) {
var result1 = [];
expect(value.mimeType).assertEqual('image/*');
expect(value.mediaType).assertEqual(3);
//mimeType = value.mimeType;
//mimeTypeGifArray = mimeType.substring(0,mimeType.indexOf("/"));
//mimeTypeGif = mimeTypeGifArray[1];
//var Gifname = value.name[-3];
var name = value.name;
var URI = value.URI;
var nameUri = URI.slice(-(name.length));
expect(name).assertEqual(nameUri);
result1.push('mimeType:' + value.mimeType, 'width:' + value.width, 'height:' + value.height,
'albumName:' + value.albumName,'albumId:' + value.albumId, 'id:' + value.id, ' URI:' + value.URI,
'mediaType:' + value.mediaType, 'name:' + value.name,'size:' + value.size,
'dateAdded:' + value.dateAdded, 'dateModified:' + value.dateModified);
var Gifname = result1[8].slice(-3);
if (Gifname == "gif" || Gifname == "GIF") {
console.log('given directory has a GIF file')
console.info(' MediaLibraryTest: Image data of id:'+ value.id + ':' + result1);
}
}
function getGIFImageDataCheckMimeMediaType(value)  {
var result1 = [];
result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
console.log('MediaLibraryTest:given directory has a BMP file'+result1);
console.log('MediaLibraryTest:given directory has a BMP file'+ result1[0]+ result1[1]+ result1[2]);
var Gifname = result1[2].slice(-3);
console.log('MediaLibraryTest:given directory has a BMP file'+result1[0].slice(-7)+result1[1].slice(-1));
if ((result1[0].slice(-7) == 'image/*') && (result1[1].slice(-1) == '3')){
// Check whether the file is wav format or not//
if (Gifname == "gif" || Gifname == "GIF"){
console.log('given directory has a gif file')
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' +
'GIF IS A IMAGE FILE');
}
}else {
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' +
'GIF IS NOT A IMAGE FILE');
}
}
function getImageDataJpg(value) {
var result1 = [];
expect(value.mimeType).assertEqual('image/*');
expect(value.mediaType).assertEqual(3);
//mimeType = value.mimeType;
//mimeTypeJpgArray = mimeType.substring(0,mimeType.indexOf("/"));
//mimeTypeJpg = mimeTypeJpgArray[1];
//var Jpgname = value.name[-3];
var name = value.name;
var URI = value.URI;
var nameUri = URI.slice(-(name.length));
expect(name).assertEqual(nameUri);
result1.push('mimeType:' + value.mimeType, 'width:' + value.width, 'height:' + value.height,
'albumName:' + value.albumName,'albumId:' + value.albumId, 'id:' + value.id, ' URI:' + value.URI,
'mediaType:' + value.mediaType, 'name:' + value.name,'size:' + value.size,
'dateAdded:' + value.dateAdded, 'dateModified:' + value.dateModified);
var Jpgname = result1[8].slice(-3);
if (Jpgname == "jpg" || Jpgname == "JPG") {
console.log('given directory has a JPG file')
console.info(' MediaLibraryTest: Image data of id:'+ value.id + ':' + result1);
}
}
function getJPGImageDataCheckMimeMediaType(value)  {
var result1 = [];
result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
console.log('MediaLibraryTest:given directory has a BMP file'+result1);
console.log('MediaLibraryTest:given directory has a BMP file'+ result1[0]+ result1[1]+ result1[2]);
var Jpgname = result1[2].slice(-3);
console.log('MediaLibraryTest:given directory has a BMP file'+result1[0].slice(-7)+result1[1].slice(-1));
if ((result1[0].slice(-7) == 'image/*') && (result1[1].slice(-1) == '3')){
// Check whether the file is wav format or not//
if (Jpgname == "jpg" || Jpgname == "JPG"){
console.log('given directory has a JPG file')
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' +
'JPG IS A IMAGE FILE');
}
}else {
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' +
'JPG IS NOT A IMAGE FILE');
}
}
function getImageDataPng(value) {
var result1 = [];
expect(value.mimeType).assertEqual('image/*');
expect(value.mediaType).assertEqual(3);
//mimeType = value.mimeType;
//mimeTypePngArray = mimeType.substring(0,mimeType.indexOf("/"));
//mimeTypePng = mimeTypePngArray[1];
//var Pngname = value.name[-3];
var name = value.name;
var URI = value.URI;
var nameUri = URI.slice(-(name.length));
expect(name).assertEqual(nameUri);
result1.push('mimeType:' + value.mimeType, 'width:' + value.width, 'height:' + value.height,
'albumName:' + value.albumName,'albumId:' + value.albumId, 'id:' + value.id, ' URI:' + value.URI,
'mediaType:' + value.mediaType, 'name:' + value.name,'size:' + value.size,
'dateAdded:' + value.dateAdded, 'dateModified:' + value.dateModified);
var Pngname = result1[8].slice(-3);
if (Pngname == "png" || Pngname == "PNG") {
console.log('given directory has a PNG file');
console.info(' MediaLibraryTest: Image data of id:'+ value.id + ':' + result1);
}
}
function getPNGImageDataCheckMimeMediaType(value)  {
var result1 = [];
result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
console.log('MediaLibraryTest:given directory has a BMP file'+result1);
console.log('MediaLibraryTest:given directory has a BMP file'+ result1[0]+ result1[1]+ result1[2]);
var Pngname = result1[2].slice(-3);
console.log('MediaLibraryTest:given directory has a BMP file'+result1[0].slice(-7)+result1[1].slice(-1));
if ((result1[0].slice(-7) == 'image/*') && (result1[1].slice(-1) == '3')){
// Check whether the file is wav format or not//
if (Pngname == "png" || Pngname == "PNG"){
console.log('given directory has a PNG file')
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' +
'PNG IS A IMAGE FILE');
}
}else {
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' +
'PNG IS NOT A IMAGE FILE');
}
}
function getAudioData(value) {
var result1 = [];
var name = value.name;
var URI = value.URI;
var nameUri = URI.slice(-(name.length));
expect(name).assertEqual(nameUri);
result1.push('mimeType:'+ value.mimeType, 'title:' + value.title, 'artist:' + value.artist,
'duration:' + value.duration, 'albumName:' + value.albumName,'albumId:' + value.albumId,
'id:' + value.id, ' URI:' + value.URI, ' mediaType:' + value.mediaType,
'name:' + value.name,' size:' + value.size, 'dateAdded:' + value.dateAdded,
'dateModified:' + value.dateModified);
if ((result1[0].slice(-7) == 'audio/*') && (result1[8].slice(-1) == '5')){
console.info(' MediaLibraryTest: Image data of id:'+ value.id + ':' + result1);
}
}
function getAudioDataCheckMimeMediaType(value) {
var result1 = [];
result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
console.log('MediaLibraryTest:given directory has a BMP file'+result1);
console.log('MediaLibraryTest:given directory has a BMP file'+ result1[0]+ result1[1]+ result1[2]);
console.log('MediaLibraryTest:given directory has a BMP file'+result1[0].slice(-7)+result1[1].slice(-1));
if ((result1[0].slice(-7) == 'audio/*') && (result1[1].slice(-1) == '5')){
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' + result1);
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + 'IS A AUDIO FILE');
}else {
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + 'IS NOT A AUDIO FILE');
}
}
function getAudioDatawav(value) {
var result1 = [];
expect(value.mimeType).assertEqual('audio/*');
expect(value.mediaType).assertEqual(5);
//mimeType = value.mimeType;
//mimeTypeWavArray = mimeType.substring(0,mimeType.indexOf("/"));
//mimeTypeWav = mimeTypeWavArray[1];
//var wavname ;
var name = value.name;
var URI = value.URI;
var nameUri = URI.slice(-(name.length));
expect(name).assertEqual(nameUri);
result1.push('mimeType:'+ value.mimeType, 'title:' + value.title, 'artist:' + value.artist,
'duration:' + value.duration, 'albumName:' + value.albumName,'albumId:' + value.albumId,
'id:' + value.id, ' URI:' + value.URI, ' mediaType:' + value.mediaType,
'name:' + value.name,' size:' + value.size, 'dateAdded:' + value.dateAdded,
'dateModified:' + value.dateModified);
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + result1[9].slice(-3));
var wavname = result1[9].slice(-3);
// Check whether the file is wav format or not//
if (wavname == "wav" || wavname == "WAV"){
console.log('given directory has a wav file')
}
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + result1);
}
function getAudioDatawavCheckMimeMediaType(value) {
var result1 = [];
result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
console.log('MediaLibraryTest:given directory has a BMP file'+result1);
console.log('MediaLibraryTest:given directory has a BMP file'+ result1[0]+ result1[1]+ result1[2]);
var wavname = result1[2].slice(-3);
console.log('MediaLibraryTest:given directory has a BMP file'+result1[0].slice(-7)+result1[1].slice(-1));
if ((result1[0].slice(-7) == 'audio/*') && (result1[1].slice(-1) == '5')){
// Check whether the file is wav format or not//
if (wavname == "wav" || wavname == "WAV"){
console.log('given directory has a wav file')
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' +
'WAV IS A AUDIO FILE');
}
}else {
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' +
'WAV IS NOT A AUDIO FILE');
}
}
function getAudioDataAac(value) {
var result1 = [];
expect(value.mimeType).assertEqual('audio/*');
expect(value.mediaType).assertEqual(5);
//var Aacname ;
//mimeType = value.mimeType;
//mimeTypeAacArray = mimeType.substring(0,mimeType.indexOf("/"));
//mimeTypeAac = mimeTypeAacArray[1];
var name = value.name;
var URI = value.URI;
var nameUri = URI.slice(-(name.length));
expect(name).assertEqual(nameUri);
result1.push('mimeType:'+ value.mimeType, 'title:' + value.title, 'artist:' + value.artist,
'duration:' + value.duration, 'albumName:' + value.albumName,'albumId:' + value.albumId,
'id:' + value.id, ' URI:' + value.URI, ' mediaType:' + value.mediaType,
'name:' + value.name,' size:' + value.size, 'dateAdded:' + value.dateAdded,
'dateModified:' + value.dateModified);
var Aacname = result1[9].slice(-3);
// Check whether the file is wav format or not//
if (Aacname == "aac" || Aacname == "AAC"){
console.log('given directory has a wav file')
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + result1);
}
}
function getAudioDataAacCheckMimeMediaType(value) {
	var result1 = [] ;
result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
console.log('MediaLibraryTest:given directory has a BMP file'+result1);
console.log('MediaLibraryTest:given directory has a BMP file'+ result1[0]+ result1[1]+ result1[2]);
var Aacname = result1[2].slice(-3);
console.log('MediaLibraryTest:given directory has a BMP file'+result1[0].slice(-7)+result1[1].slice(-1));
if ((result1[0].slice(-7) == 'audio/*') && (result1[1].slice(-1) == '5')){
// Check whether the file is wav format or not//
if (Aacname == "aac" || Aacname == "AAC"){
console.log('given directory has a wav file')
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' +
'AAC IS A AUDIO FILE');
}
}else {
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' +
'AAC IS NOT A AUDIO FILE');
}
}
function getAudioDataMp3(value) {
var result1 = [];
expect(value.mimeType).assertEqual('audio/*');
expect(value.mediaType).assertEqual(5);
//mimeType = value.mimeType;
//mimeTypeMp3Array = mimeType.substring(0,mimeType.indexOf("/"));
//mimeTypeMp3 = mimeTypeMp3Array[1];
//var Mp3name ;
var name = value.name;
var URI = value.URI;
var nameUri = URI.slice(-(name.length));
expect(name).assertEqual(nameUri);
result1.push('mimeType:'+ value.mimeType, 'title:' + value.title, 'artist:' + value.artist,
'duration:' + value.duration, 'albumName:' + value.albumName,'albumId:' + value.albumId,
'id:' + value.id, ' URI:' + value.URI, ' mediaType:' + value.mediaType,
'name:' + value.name,' size:' + value.size, 'dateAdded:' + value.dateAdded,
'dateModified:' + value.dateModified);
var Mp3name = result1[9].slice(-3);
// Check whether the file is wav format or not//
if (Mp3name == "mp3" || Mp3name == "MP3"){
console.log('given directory has a MP3 file')
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + result1);
}
}
function getAudioDataMp3CheckMimeMediaType(value) {
var result1 = [];
result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
console.log('MediaLibraryTest:given directory has a BMP file'+result1);
console.log('MediaLibraryTest:given directory has a BMP file'+ result1[0]+ result1[1]+ result1[2]);
var Mp3name = result1[2].slice(-3);
console.log('MediaLibraryTest:given directory has a BMP file'+result1[0].slice(-7)+result1[1].slice(-1));
if ((result1[0].slice(-7) == 'audio/*') && (result1[1].slice(-1) == '5')){
// Check whether the file is wav format or not//
if (Mp3name == "mp3" || Mp3name == "MP3"){
console.log('given directory has a wav file')
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' +
'MP3 IS A AUDIO FILE');
}
}else {
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' +
'MP3 IS NOT A AUDIO FILE');
}
}
function getAudioDataFlac(value) {
var result1 = [];
expect(value.mimeType).assertEqual('audio/*');
expect(value.mediaType).assertEqual(5);
//mimeType = value.mimeType;
//mimeTypeFlacArray = mimeType.substring(0,mimeType.indexOf("/"));
//mimeTypeFlac = mimeTypeFlacArray[1];
//var Flacname;
var name = value.name;
var URI = value.URI;
var nameUri = URI.slice(-(name.length));
expect(name).assertEqual(nameUri);
result1.push('mimeType:'+ value.mimeType, 'title:' + value.title, 'artist:' + value.artist,
'duration:' + value.duration, 'albumName:' + value.albumName,'albumId:' + value.albumId,
'id:' + value.id, ' URI:' + value.URI, ' mediaType:' + value.mediaType,
'name:' + value.name,' size:' + value.size, 'dateAdded:' + value.dateAdded,
'dateModified:' + value.dateModified);
var Flacname = result1[9].slice(-4);
// Check whether the file is wav format or not//
if (Flacname == "flac" || Flacname == "FLAC"){
console.log('given directory has a Flac file')
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + result1);
}
}
function getAudioDataFlacCheckMimeMediaType(value) {
var result1 = [];
result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
console.log('MediaLibraryTest:given directory has a BMP file'+result1);
console.log('MediaLibraryTest:given directory has a BMP file'+ result1[0]+ result1[1]+ result1[2]);
var Flacname = result1[2].slice(-4);
console.log('MediaLibraryTest:given directory has a BMP file'+result1[0].slice(-7)+result1[1].slice(-1));
if ((result1[0].slice(-7) == 'audio/*') && (result1[1].slice(-1) == '5')){
// Check whether the file is wav format or not//
if (Flacname == "flac" || Flacname == "FLAC"){
console.log('given directory has a wav file')
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' +
'FLAC IS A AUDIO FILE');
}
}else {
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' +
'FLAC IS NOT A AUDIO FILE');
}
}
function getAudioDataOGG(value) {
var result1 = [];
expect(value.mimeType).assertEqual('audio/*');
expect(value.mediaType).assertEqual(5);
//mimeType = value.mimeType;
//mimeTypeFlacArray = mimeType.substring(0,mimeType.indexOf("/"));
//mimeTypeFlac = mimeTypeFlacArray[1];
//var OGGname ;
var name = value.name;
var URI = value.URI;
var nameUri = URI.slice(-(name.length));
expect(name).assertEqual(nameUri);
result1.push('mimeType:'+ value.mimeType, 'title:' + value.title, 'artist:' + value.artist,
'duration:' + value.duration, 'albumName:' + value.albumName,'albumId:' + value.albumId,
'id:' + value.id, ' URI:' + value.URI, ' mediaType:' + value.mediaType,
'name:' + value.name,' size:' + value.size, 'dateAdded:' + value.dateAdded,
'dateModified:' + value.dateModified);
var OGGname = result1[9].slice(-3);
// Check whether the file is wav format or not//
if (OGGname == "OGG" || OGGname == "OGG"){
console.log('given directory has a Flac file')
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + result1);
}
}
function getAudioDataOOGCheckMimeMediaType(value) {
var result1 = [];
result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
console.log('MediaLibraryTest:given directory has a OOG file'+result1);
console.log('MediaLibraryTest:given directory has a OOG file'+ result1[0]+ result1[1]+ result1[2]);
var OOGname = result1[2].slice(-3);
console.log('MediaLibraryTest:given directory has a OOG file'+result1[0].slice(-7)+result1[1].slice(-1));
if ((result1[0].slice(-7) == 'audio/*') && (result1[1].slice(-1) == '5')){
// Check whether the file is wav format or not//
if (OOGname == "oog" || OOGname == "OOG"){
console.log('given directory has a OOG file')
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' +
'OOG IS A AUDIO FILE');
}
}else {
console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' +
'OOG IS NOT A AUDIO FILE');
}
}
function getVideoData(value) {
var result1=[];
expect(value.mimeType).assertEqual('video/*');
expect(value.mediaType).assertEqual(4);
var name = value.name;
var URI = value.URI;
var nameUri = URI.slice(-(name.length));
expect(name).assertEqual(nameUri);
result1.push(' mimeType:'+ value.mimeType, 'width:' + value.width, 'height:' + value.height,
'duration:' + value.duration, 'albumName:'+ value.albumName,'albumId:' + value.albumId,
'id:' + value.id, 'URI:' + value.URI, 'mediaType:'+ value.mediaType,
'name:' + value.name, 'size:' + value.size, 'dateAdded:' + value.dateAdded,
'dateModified:' + value.dateModified);
if ((result1[0].slice(-7) == 'video/*') && (result1[8].slice(-1) == '4')){
console.info(' MediaLibraryTest: video data of id:'+ value.id + ':' + result1);
}
}
function getVideoDataCheckMimeMediaType(value) {
var result1 = [];
result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
console.log('MediaLibraryTest:given directory has a OOG file'+result1);
console.log('MediaLibraryTest:given directory has a OOG file'+ result1[0]+ result1[1]+ result1[2]);
console.log('MediaLibraryTest:given directory has a OOG file'+result1[0].slice(-7)+result1[1].slice(-1));
if ((result1[0].slice(-7) == 'video/*') && (result1[1].slice(-1) == '4')){
console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + value.name + ':' + result1);
console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + 'IS A VIDEO FILE');
}else {
console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + 'IS NOT A VIDEO FILE');
}
}
function getVideoData3gp(value) {
var result1=[];
expect(value.mimeType).assertEqual('video/*');
expect(value.mediaType).assertEqual(4);
//mimeType = value.mimeType;
//mimeType3gpArray = mimeType.substring(0,mimeType.indexOf("/"));
//mimeType3gp = mimeType3gpArray[1];
//name3gp = value.name[-3];
var name = value.name;
var URI = value.URI;
var nameUri = URI.slice(-(name.length));
expect(name).assertEqual(nameUri);
result1.push(' mimeType:'+ value.mimeType, 'width:' + value.width, 'height:' + value.height,
'duration:' + value.duration, 'albumName:'+ value.albumName,'albumId:' + value.albumId,
'id:' + value.id, 'URI:' + value.URI, 'mediaType:'+ value.mediaType,
'name:' + value.name, 'size:' + value.size, 'dateAdded:' + value.dateAdded,
'dateModified:' + value.dateModified);
var name3gp = result1[9].slice(-3);
if (name3gp == "3gp" || name3gp == "3GP"){
console.log('given directory has a 3GP file')
console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + result1);
}
}
function getAudioData3gpCheckMimeMediaType(value) {
var result1 = [];
result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
console.log('MediaLibraryTest:given directory has a 3GP file'+result1);
console.log('MediaLibraryTest:given directory has a 3GP file'+ result1[0]+ result1[1]+ result1[2]);
var name3gp = result1[2].slice(-3);
console.log('MediaLibraryTest:given directory has a 3GP file'+result1[0].slice(-7)+result1[1].slice(-1));
if ((result1[0].slice(-7) == 'video/*') && (result1[1].slice(-1) == '4')){
// Check whether the file is wav format or not//
if (name3gp == "3gp" || name3gp == "3GP"){
console.log('given directory has a 3gp file')
console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + value.name + ':' +
'3GP IS A VIDEO FILE');
}
}else {
console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + value.name + ':' +
'3GP IS NOT A VIDEO FILE');
}
}
function getVideoDataMov(value) {
var result1=[];
expect(value.mimeType).assertEqual('video/*');
expect(value.mediaType).assertEqual(4);
//mimeType = value.mimeType;
//mimeTypeMovArray = mimeType.substring(0,mimeType.indexOf("/"));
//mimeTypeMov = mimeTypeMovArray[1];
//nameMov = value.name[-3];
var name = value.name;
var URI = value.URI;
var nameUri = URI.slice(-(name.length));
expect(name).assertEqual(nameUri);
result1.push(' mimeType:'+ value.mimeType, 'width:' + value.width, 'height:' + value.height,
'duration:' + value.duration, 'albumName:'+ value.albumName,'albumId:' + value.albumId,
'id:' + value.id, 'URI:' + value.URI, 'mediaType:'+ value.mediaType,
'name:' + value.name, 'size:' + value.size, 'dateAdded:' + value.dateAdded,
'dateModified:' + value.dateModified);
var nameMov = result1[9].slice(-3);
if (nameMov == "mov" || nameMov == "MOV"){
console.log('given directory has a MOV file')
console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + result1);
}
}
function getAudioDataMOVCheckMimeMediaType(value) {
var result1 = [];
result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
console.log('MediaLibraryTest:given directory has a MOV file'+result1);
console.log('MediaLibraryTest:given directory has a MOV file'+ result1[0]+ result1[1]+ result1[2]);
var nameMov = result1[2].slice(-3);
console.log('MediaLibraryTest:given directory has a MOV file'+result1[0].slice(-7)+result1[1].slice(-1));
if ((result1[0].slice(-7) == 'video/*') && (result1[1].slice(-1) == '4')){
// Check whether the file is wav format or not//
if (nameMov == "mov" || nameMov == "MOV"){
console.log('given directory has a MOV file')
console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + value.name + ':' +
'MOV IS A VIDEO FILE');
}
}else {
console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + value.name + ':' +
'MOV IS NOT A VIDEO FILE');
}
}
function getVideoDataMP4(value) {
var result1=[];
expect(value.mimeType).assertEqual('video/*');
expect(value.mediaType).assertEqual(4);
//mimeType = value.mimeType;
//mimeTypeMp4Array = mimeType.substring(0,mimeType.indexOf("/"));
//mimeTypeMp4 = mimeTypeMp4Array[1];
//nameMp4 = value.name[-3];
var name = value.name;
var URI = value.URI;
var nameUri = URI.slice(-(name.length));
expect(name).assertEqual(nameUri);
result1.push(' mimeType:'+ value.mimeType, 'width:' + value.width, 'height:' + value.height,
'duration:' + value.duration, 'albumName:'+ value.albumName,'albumId:' + value.albumId,
'id:' + value.id, 'URI:' + value.URI, 'mediaType:'+ value.mediaType,
'name:' + value.name, 'size:' + value.size, 'dateAdded:' + value.dateAdded,
'dateModified:' + value.dateModified);
var nameMp4 = result1[9].slice(-3);
if (nameMp4 == "mp4" || nameMp4 == "MP4"){
console.log('given directory has a mp4 file')
}
console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + result1);
}
function getAudioDataMP4CheckMimeMediaType(value) {
var result1 = [];
result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
console.log('MediaLibraryTest:given directory has a MP4 file'+result1);
console.log('MediaLibraryTest:given directory has a MP4 file'+ result1[0]+ result1[1]+ result1[2]);
var nameMp4 = result1[2].slice(-3);
console.log('MediaLibraryTest:given directory has a MP4 file'+result1[0].slice(-7)+result1[1].slice(-1));
if ((result1[0].slice(-7) == 'video/*') && (result1[1].slice(-1) == '4')){
// Check whether the file is wav format or not//
if (nameMp4 == "mp4" || nameMp4 == "MP4"){
console.log('given directory has a MP4 file')
console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + value.name + ':' +
'MP4 IS A VIDEO FILE');
}
}else {
console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + value.name + ':' +
'MP4 IS NOT A VIDEO FILE');
}
}
function getVideoDataMpg(value) {
var result1=[];
expect(value.mimeType).assertEqual('video/*');
expect(value.mediaType).assertEqual(4);
//mimeType = value.mimeType;
//mimeTypeMpgArray = mimeType.substring(0,mimeType.indexOf("/"));
//mimeTypeMpg = mimeTypeMpgArray[1];
//nameMpg = value.name[-3];
var name = value.name;
var URI = value.URI;
var nameUri = URI.slice(-(name.length));
expect(name).assertEqual(nameUri);
result1.push(' mimeType:'+ value.mimeType, 'width:' + value.width, 'height:' + value.height,
'duration:' + value.duration, 'albumName:'+ value.albumName,'albumId:' + value.albumId,
'id:' + value.id, 'URI:' + value.URI, 'mediaType:'+ value.mediaType,
'name:' + value.name, 'size:' + value.size, 'dateAdded:' + value.dateAdded,
'dateModified:' + value.dateModified);
var nameMpg = result1[9].slice(-3);
if (nameMpg == "mpg" || nameMpg == "MPG"){
console.log('given directory has a mpg file')
}
console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + result1);
}
function getAudioDataMPGCheckMimeMediaType(value) {
var result1 = [];
result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
console.log('MediaLibraryTest:given directory has a MPG file'+result1);
console.log('MediaLibraryTest:given directory has a MPG file'+ result1[0]+ result1[1]+ result1[2]);
var nameMpg = result1[2].slice(-3);
console.log('MediaLibraryTest:given directory has a MPG file'+result1[0].slice(-7)+result1[1].slice(-1));
if ((result1[0].slice(-7) == 'video/*') && (result1[1].slice(-1) == '4')){
// Check whether the file is wav format or not//
if (nameMpg == "mpg" || nameMpg == "MPG"){
console.log('given directory has a MPG file')
console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + value.name + ':' +
'MPG IS A VIDEO FILE');
}
}else {
console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + value.name + ':' +
'MPG IS NOT A VIDEO FILE');
}
}
function getVideoDataWebm(value) {
var result1=[];
expect(value.mimeType).assertEqual('video/*');
expect(value.mediaType).assertEqual(4);
//mimeType = value.mimeType;
//mimeTypeWebmArray = mimeType.substring(0,mimeType.indexOf("/"));
//mimeTypeWebm = mimeTypeWebmArray[1];
var nameWebm = value.name[-4];
var name = value.name;
var URI = value.URI;
var nameUri = URI.slice(-(name.length));
expect(name).assertEqual(nameUri);
result1.push(' mimeType:'+ value.mimeType, 'width:' + value.width, 'height:' + value.height,
'duration:' + value.duration, 'albumName:'+ value.albumName,'albumId:' + value.albumId,
'id:' + value.id, 'URI:' + value.URI, 'mediaType:'+ value.mediaType,
'name:' + value.name, 'size:' + value.size, 'dateAdded:' + value.dateAdded,
'dateModified:' + value.dateModified);
nameWebm = result1[9].slice(-4);
if (nameWebm == "webm" || nameWebm == "WEBM"){
console.log('given directory has a WEBM file')
}
console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + result1);
}
function getAudioDataWEBMCheckMimeMediaType(value) {
var result1 = [];
result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
console.log('MediaLibraryTest:given directory has a WEBM file'+result1);
console.log('MediaLibraryTest:given directory has a WEBM file'+ result1[0]+ result1[1]+ result1[2]);
var nameWebm = result1[2].slice(-4);
console.log('MediaLibraryTest:given directory has a WEBM file'+result1[0].slice(-7)+result1[1].slice(-1));
if ((result1[0].slice(-7) == 'video/*') && (result1[1].slice(-1) == '4')){
// Check whether the file is wav format or not//
if (nameWebm == "webm" || nameWebm == "WEBM"){
console.log('given directory has a WEBM file')
console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + value.name + ':' +
'WEBM IS A VIDEO FILE');
}
}else {
console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + value.name + ':' +
'WEBM IS NOT A VIDEO FILE');
}
}
function getImageDataRaw(value) {
var result1 = [];
expect(value.mimeType).assertEqual('image/*');
expect(value.mediaType).assertEqual(3);
var name = value.name;
var URI = value.URI;
var nameUri = URI.slice(-(name.length));
expect(name).assertEqual(nameUri);
result1.push('mimeType:' + value.mimeType, 'width:' + value.width, 'height:' + value.height,
'albumName:' + value.albumName,'albumId:' + value.albumId, 'id:' + value.id, ' URI:' + value.URI,
'mediaType:' + value.mediaType, 'name:' + value.name,'size:' + value.size,
'dateAdded:' + value.dateAdded, 'dateModified:' + value.dateModified);
//console.log('MediaLibraryTest:given directory has a RAW file before slice'+result1[8]);
var nameRaw = result1[8].slice(-3);
//console.log('MediaLibraryTest:given directory has a RAW file after slice'+Bmpname);
if (nameRaw == "raw" || nameRaw == "RAW"){
console.log('given directory has a RAW file')
console.info(' MediaLibraryTest: Image data of id:'+ value.id + ':' + result1);
}
}
function getRawImageDataCheckMimeMediaType(value)  {
console.log('MediaLibraryTest:given directory has a RAW file'+value.name);
var result1 = [];
result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
console.log('MediaLibraryTest:given directory has a RAW file'+result1);
console.log('MediaLibraryTest:given directory has a RAW file'+ result1[0]+ result1[1]+ result1[2]);
var nameRaw = result1[2].slice(-3);
console.log('MediaLibraryTest:given directory has a RAW file'+result1[0].slice(-7)+result1[1].slice(-1));
if ((result1[0].slice(-7) == 'image/*') && (result1[1].slice(-1) == '3')){
// Check whether the file is wav format or not//
if (nameRaw == "raw" || nameRaw == "RAW"){
console.log('given directory has a RAW file')
console.info('MediaLibraryTest: Image data of id:'+ value.id + ':' + value.name + ':' +
'BMP IS A IMAGE FILE');
}
}else {
console.info('MediaLibraryTest: Image data of id:'+ value.id + ':' + value.name + ':' +
'BMP IS NOT A IMAGE FILE');
}
}
function getImageDataHeif(value) {
var result1 = [];
expect(value.mimeType).assertEqual('image/*');
expect(value.mediaType).assertEqual(3);
var name = value.name;
var URI = value.URI;
var nameUri = URI.slice(-(name.length));
expect(name).assertEqual(nameUri);
result1.push('mimeType:' + value.mimeType, 'width:' + value.width, 'height:' + value.height,
'albumName:' + value.albumName,'albumId:' + value.albumId, 'id:' + value.id, ' URI:' + value.URI,
'mediaType:' + value.mediaType, 'name:' + value.name,'size:' + value.size,
'dateAdded:' + value.dateAdded, 'dateModified:' + value.dateModified);
//console.log('MediaLibraryTest:given directory has a HEIF file before slice'+result1[8]);
var nameHeif = result1[8].slice(-4);
//console.log('MediaLibraryTest:given directory has a HEIF file after slice'+Bmpname);
if (nameHeif == "heif" || nameHeif == "HEIF"){
console.log('given directory has a HEIF file')
console.info(' MediaLibraryTest: Image data of id:'+ value.id + ':' + result1);
}
}
function getHeifImageDataCheckMimeMediaType(value)  {
console.log('MediaLibraryTest:given directory has a HEIF file'+value.name);
var result1 = [];
result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
console.log('MediaLibraryTest:given directory has a HEIF file'+result1);
console.log('MediaLibraryTest:given directory has a HEIF file'+ result1[0]+ result1[1]+ result1[2]);
var nameHeif = result1[2].slice(-4);
console.log('MediaLibraryTest:given directory has a HEIF file'+result1[0].slice(-7)+result1[1].slice(-1));
if ((result1[0].slice(-7) == 'image/*') && (result1[1].slice(-1) == '3')){
// Check whether the file is wav format or not//
if (nameHeif == "heif" || nameHeif == "HEIF"){
console.log('given directory has a HEIF file')
console.info('MediaLibraryTest: Image data of id:'+ value.id + ':' + value.name + ':' +
'HEIF IS A IMAGE FILE');
}
}else {
console.info('MediaLibraryTest: Image data of id:'+ value.id + ':' + value.name + ':' +
'HEIF IS NOT A IMAGE FILE');
}
}
function getImageDataSvg(value) {
var result1 = [];
expect(value.mimeType).assertEqual('image/*');
expect(value.mediaType).assertEqual(3);
var name = value.name;
var URI = value.URI;
var nameUri = URI.slice(-(name.length));
expect(name).assertEqual(nameUri);
result1.push('mimeType:' + value.mimeType, 'width:' + value.width, 'height:' + value.height,
'albumName:' + value.albumName,'albumId:' + value.albumId, 'id:' + value.id, ' URI:' + value.URI,
'mediaType:' + value.mediaType, 'name:' + value.name,'size:' + value.size,
'dateAdded:' + value.dateAdded, 'dateModified:' + value.dateModified);
//console.log('MediaLibraryTest:given directory has a SVG file before slice'+result1[8]);
var nameSvg = result1[8].slice(-3);
//console.log('MediaLibraryTest:given directory has a SVG file after slice'+Bmpname);
if (nameSvg == "svg" || nameSvg == "SVG"){
console.log('given directory has a SVG file')
console.info(' MediaLibraryTest: Image data of id:'+ value.id + ':' + result1);
}
}
function getSvgImageDataCheckMimeMediaType(value)  {
console.log('MediaLibraryTest:given directory has a SVG file'+value.name);
var result1 = [];
result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
console.log('MediaLibraryTest:given directory has a SVG file'+result1);
console.log('MediaLibraryTest:given directory has a SVG file'+ result1[0]+ result1[1]+ result1[2]);
var nameSvg = result1[2].slice(-3);
console.log('MediaLibraryTest:given directory has a SVG file'+result1[0].slice(-7)+result1[1].slice(-1));
if ((result1[0].slice(-7) == 'image/*') && (result1[1].slice(-1) == '3')){
// Check whether the file is wav format or not//
if (nameSvg == "svg" || nameSvg == "SVG"){
console.log('given directory has a SVG file')
console.info('MediaLibraryTest: Image data of id:'+ value.id + ':' + value.name + ':' +
'SVG IS A IMAGE FILE');
}
}else {
console.info('MediaLibraryTest: Image data of id:'+ value.id + ':' + value.name + ':' +
'SVG IS NOT A IMAGE FILE');
}
}
function getImageDataWebp(value) {
var result1 = [];
expect(value.mimeType).assertEqual('image/*');
expect(value.mediaType).assertEqual(3);
var name = value.name;
var URI = value.URI;
var nameUri = URI.slice(-(name.length));
expect(name).assertEqual(nameUri);
result1.push('mimeType:' + value.mimeType, 'width:' + value.width, 'height:' + value.height,
'albumName:' + value.albumName,'albumId:' + value.albumId, 'id:' + value.id, ' URI:' + value.URI,
'mediaType:' + value.mediaType, 'name:' + value.name,'size:' + value.size,
'dateAdded:' + value.dateAdded, 'dateModified:' + value.dateModified);
//console.log('MediaLibraryTest:given directory has a Webp file before slice'+result1[8]);
var nameWebp = result1[8].slice(-4);
//console.log('MediaLibraryTest:given directory has a Webp file after slice'+Bmpname);
if (nameWebp == "webp" || nameWebp == "WEBP"){
console.log('given directory has a Webp file')
console.info(' MediaLibraryTest: Image data of id:'+ value.id + ':' + result1);
}
}
function getWebpImageDataCheckMimeMediaType(value)  {
console.log('MediaLibraryTest:given directory has a Webp file'+value.name);
var result1 = [];
result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
console.log('MediaLibraryTest:given directory has a Webp file'+result1);
console.log('MediaLibraryTest:given directory has a Webp file'+ result1[0]+ result1[1]+ result1[2]);
var nameWebp = result1[2].slice(-4);
console.log('MediaLibraryTest:given directory has a Webp file'+result1[0].slice(-7)+result1[1].slice(-1));
if ((result1[0].slice(-7) == 'image/*') && (result1[1].slice(-1) == '3')){
// Check whether the file is wav format or not//
if (nameWebp == "webp" || nameWebp == "WEBP"){
console.log('given directory has a Webp file')
console.info('MediaLibraryTest: Image data of id:'+ value.id + ':' + value.name + ':' +
'Webp IS A IMAGE FILE');
}
}else {
console.info('MediaLibraryTest: Image data of id:'+ value.id + ':' + value.name + ':' +
'Webp IS NOT A IMAGE FILE');
}
}
})
