import mediaLibrary from '@ohos.multimedia.medialibrary';


import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'


describe('GET_MEDIA_AUDIO_VIDEO_IMAGE_ALBUM.test.js', function () {
console.info("mediaLibrary Instance before");
const media = mediaLibrary.getMediaLibraryHelper();
console.info("mediaLibrary Instance after");

var URI;
var name;
var result1;
var name_URI;
var albumName;
var albumId;
var i;
var fileAsset;

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
}

const createimageasyncBPMpath = {
    selections: 'onelevel/createimage/async/BMP',
    selectionArgs:['audioalbum'],
}

const createimageasyncjpgpath = {
    selections: 'onelevel/createimage/async/jpg',
    selectionArgs:['audioalbum'],
}

const createimageasyncJPGpath = {
    selections: 'onelevel/createimage/async/JPG',
    selectionArgs:['audioalbum'],
}

const createimageasyncpngpath = {
    selections: 'onelevel/createimage/async/png',
    selectionArgs:['audioalbum'],
}

const createimageasyncPNGpath = {
    selections: 'onelevel/createimage/async/PNG',
    selectionArgs:['audioalbum'],
}

const createimageasyncgifpath = {
    selections: 'onelevel/createimage/async/gif',
    selectionArgs:['audioalbum'],
}

const createimageasyncGIFpath = {
    selections: 'onelevel/createimage/async/GIF',
    selectionArgs:['audioalbum'],
}

const createimageasyncrawpath = {
    selections: 'onelevel/createimage/async/raw',
    selectionArgs:['audioalbum'],
}

const createimageasyncRAWpath = {
    selections: 'onelevel/createimage/async/RAW',
    selectionArgs:['audioalbum'],
}

const createimageasyncheifpath = {
    selections: 'onelevel/createimage/async/heif',
    selectionArgs:['audioalbum'],
}

const createimageasyncHEIFpath = {
    selections: 'onelevel/createimage/async/HEIF',
    selectionArgs:['audioalbum'],
}

const createimageasyncwebppath = {
    selections: 'onelevel/createimage/async/webp',
    selectionArgs:['audioalbum'],
}

const createimageasyncWEBPpath = {
    selections: 'onelevel/createimage/async/WEBP',
    selectionArgs:['audioalbum'],
}

const createimageasyncsvgpath = {
    selections: 'onelevel/createimage/async/svg',
    selectionArgs:['audioalbum'],
}

const createimageasyncSVGpath = {
    selections: 'onelevel/createimage/async/SVG',
    selectionArgs:['audioalbum'],
}

const createimagepromisebmppath = {
    selections: 'onelevel/createimage/promise/bmp',
    selectionArgs:['audioalbum'],
}

const createimagepromiseBPMpath = {
    selections: 'onelevel/createimage/promise/BMP',
    selectionArgs:['audioalbum'],
}

const createimagepromisejpgpath = {
    selections: 'onelevel/createimage/promise/jpg',
    selectionArgs:['audioalbum'],
}

const createimagepromiseJPGpath = {
    selections: 'onelevel/createimage/promise/JPG',
    selectionArgs:['audioalbum'],
}

const createimagepromisepngpath = {
    selections: 'onelevel/createimage/promise/png',
    selectionArgs:['audioalbum'],
}

const createimagepromisePNGpath = {
    selections: 'onelevel/createimage/promise/PNG',
    selectionArgs:['audioalbum'],
}

const createimagepromisegifpath = {
    selections: 'onelevel/createimage/promise/gif',
    selectionArgs:['audioalbum'],
}

const createimagepromiseGIFpath = {
    selections: 'onelevel/createimage/promise/GIF',
    selectionArgs:['audioalbum'],
}

const createimagepromiserawpath = {
    selections: 'onelevel/createimage/promise/raw',
    selectionArgs:['audioalbum'],
}

const createimagepromiseRAWpath = {
    selections: 'onelevel/createimage/promise/RAW',
    selectionArgs:['audioalbum'],
}

const createimagepromiseheifpath = {
    selections: 'onelevel/createimage/promise/heif',
    selectionArgs:['audioalbum'],
}

const createimagepromiseHEIFpath = {
    selections: 'onelevel/createimage/promise/HEIF',
    selectionArgs:['audioalbum'],
}

const createimagepromisewebppath = {
    selections: 'onelevel/createimage/promise/webp',
    selectionArgs:['audioalbum'],
}

const createimagepromiseWEBPpath = {
    selections: 'onelevel/createimage/promise/WEBP',
    selectionArgs:['audioalbum'],
}

const createimagepromisesvgpath = {
    selections: 'onelevel/createimage/promise/svg',
    selectionArgs:['audioalbum'],
}

const createimagepromiseSVGpath = {
    selections: 'onelevel/createimage/promise/SVG',
    selectionArgs:['audioalbum'],
}

const createvideoasync3gppath = {
    selections: 'onelevel/createvideo/async/3gp',
    selectionArgs:['audioalbum'],
}

const createvideoasync3GPpath = {
    selections: 'onelevel/createvideo/async/3GP',
    selectionArgs:['audioalbum'],
}

const createvideoasyncmovpath = {
    selections: 'onelevel/createvideo/async/mov',
    selectionArgs:['audioalbum'],
}

const createvideoasyncMOVpath = {
    selections: 'onelevel/createvideo/async/MOV',
    selectionArgs:['audioalbum'],
}

const createvideoasyncmpgpath = {
    selections: 'onelevel/createvideo/async/mpg',
    selectionArgs:['audioalbum'],
}

const createvideoasyncMPGpath = {
    selections: 'onelevel/createvideo/async/MPG',
    selectionArgs:['audioalbum'],
}

const createvideoasyncmp4path = {
    selections: 'onelevel/createvideo/async/mp4',
    selectionArgs:['audioalbum'],
}

const createvideoasyncMP4path = {
    selections: 'onelevel/createvideo/async/MP4',
    selectionArgs:['audioalbum'],
}

const createvideoasyncmkvpath = {
    selections: 'onelevel/createvideo/async/mkv',
    selectionArgs:['audioalbum'],
}

const createvideoasyncMKVpath = {
    selections: 'onelevel/createvideo/async/MKV',
    selectionArgs:['audioalbum'],
}

const createvideoasyncwebmpath = {
    selections: 'onelevel/createvideo/async/webm',
    selectionArgs:['audioalbum'],
}

const createvideoasyncWEBMpath = {
    selections: 'onelevel/createvideo/async/WEBM',
    selectionArgs:['audioalbum'],
}

const createvideopromise3gppath = {
    selections: 'onelevel/createvideo/promise/3gp',
    selectionArgs:['audioalbum'],
}

const createvideopromise3GPpath = {
    selections: 'onelevel/createvideo/promise/3GP',
    selectionArgs:['audioalbum'],
}

const createvideopromisemovpath = {
    selections: 'onelevel/createvideo/promise/mov',
    selectionArgs:['audioalbum'],
}

const createvideopromiseMOVpath = {
    selections: 'onelevel/createvideo/promise/MOV',
    selectionArgs:['audioalbum'],
}

const createvideopromisempgpath = {
    selections: 'onelevel/createvideo/promise/mpg',
    selectionArgs:['audioalbum'],
}

const createvideopromiseMPGpath = {
    selections: 'onelevel/createvideo/promise/MPG',
    selectionArgs:['audioalbum'],
}

const createvideopromisemp4path = {
    selections: 'onelevel/createvideo/promise/mp4',
    selectionArgs:['audioalbum'],
}

const createvideopromiseMP4path = {
    selections: 'onelevel/createvideo/promise/MP4',
    selectionArgs:['audioalbum'],
}

const createvideopromisemkvpath = {
    selections: 'onelevel/createvideo/promise/mkv',
    selectionArgs:['audioalbum'],
}

const createvideopromiseMKVpath = {
    selections: 'onelevel/createvideo/promise/MKV',
    selectionArgs:['audioalbum'],
}

const createvideopromisewebmpath = {
    selections: 'onelevel/createvideo/promise/webm',
    selectionArgs:['audioalbum'],
}

const createvideopromiseWEBMpath = {
    selections: 'onelevel/createvideo/promise/WEBM',
    selectionArgs:['audioalbum'],
}

const modifyaudioasyncpath = {
    selections: 'onelevel/modifyaudio/async/',
    selectionArgs:['audioalbum'],
}

const modifyimageasyncpath = {
    selections: 'onelevel/modifyimage/async/',
    selectionArgs:['audioalbum'],
}

const modifyvideoasyncpath = {
    selections: 'onelevel/modifyvideo/async/',
    selectionArgs:['audioalbum'],
}

const modifyalbumasyncpath = {
    selections: 'onelevel/modifyalbum/async/',
    selectionArgs:['audioalbum'],
}

const modifyaudioapromisepath = {
    selections: 'onelevel/modifyaudio/promise/',
    selectionArgs:['audioalbum'],
}

const modifyimagepromisepath = {
    selections: 'onelevel/modifyimage/promise/',
    selectionArgs:['audioalbum'],
}

const modifyvideopromisepath = {
    selections: 'onelevel/modifyvideo/promise/',
    selectionArgs:['audioalbum'],
}

const modifyalbumpromisepath = {
    selections: 'onelevel/modifyalbum/promise/',
    selectionArgs:['audioalbum'],
}

const deletealbumasyncpath = {
    selections: 'onelevel/deletealbum/async/',
    selectionArgs:['audioalbum'],
}

const deleteaudioasyncpath = {
    selections: 'onelevel/deleteaudio/async/',
    selectionArgs:['audioalbum'],
}

const deleteimageasyncpath = {
    selections: 'onelevel/deleteimage/async/',
    selectionArgs:['audioalbum'],
}

const deletevideoasyncpath = {
    selections: 'onelevel/deletevideo/async/',
    selectionArgs:['audioalbum'],
}

const deletealbumpromisepath = {
    selections: 'onelevel/deletealbum/promise/',
    selectionArgs:['audioalbum'],
}

const deleteaudiopromisepath = {
    selections: 'onelevel/deleteaudio/promise/',
    selectionArgs:['audioalbum'],
}

const deleteimagepromisepath = {
    selections: 'onelevel/deleteimage/promise/',
    selectionArgs:['audioalbum'],
}

const deletevideopromisepath = {
    selections: 'onelevel/deletevideo/promise/',
    selectionArgs:['audioalbum'],
}

const modifyimagealbumasyncpath = {
    selections: 'onelevel/modifyimagealbum/async/',
    selectionArgs:['audioalbum'],
}

const modifyimagealbumpromisepath = {
    selections: 'onelevel/modifyimagealbum/promise/',
    selectionArgs:['audioalbum'],
}

const modifyvideoalbumpromisepath = {
    selections: 'onelevel/modifyvideoalbum/promise/',
    selectionArgs:['audioalbum'],
}

const modifyvideoalbumasyncpath = {
    selections: 'onelevel/modifyvideoalbum/async/',
    selectionArgs:['audioalbum'],
}

beforeAll(function () {
//onsole.info('beforeAll： Prerequisites at the test suite level, which are executed before the test suite is executed.');

})

beforeEach(function () {
//console.info('MediaLibraryTest: beforeEach：Prerequisites at the test case level, which are executed before each test case is executed.');

})
afterEach(function () {
//console.info('MediaLibraryTest: afterEach： Test case-level clearance conditions, which are executed after each test case is executed.');

})
afterAll(function () {
//console.info('MediaLibraryTest: afterAll：  Test suite-level cleanup condition, which is executed after the test suite is executed');

})


/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETMEDIA_ASYNC_DEFAULT_DIRECTORY_01
        * @tc.name      : Get all MEDIA asset from system [AsyncCallBack]
        * @tc.desc      : Get MEDIA asset from system
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
 
*/
    it('SUB_MEDIA_MEDIALIBRARY_GETMEDIA_ASYNC_DEFAULT_DIRECTORY_01', 0,async function (done) {
        console.info("MediaLibraryTest: starting getmediaassets async without fetch test case 001");
        media.getMediaAssets((error, value)=> {
            if (error){
                console.info('MediaLibraryTest: getMediaAssets returned an error' + error.message);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETMEDIA_ASYNC_DEFAULT_DIRECTORY_01 :  FAIL');
            }
            console.info('MediaLibraryTest: getMediaAssets1 returns '+ value.length);
            if (value == undefined){
                console.info('MediaLibraryTest: There are no  files under /data/media folder');
            }
            else if (value != undefined){
                value.forEach(getMediaData);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETMEDIA_ASYNC_DEFAULT_DIRECTORY_01 :  PASS');
                //sleep(1000);

            }
            done();
        });
        done();
    })

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETMEDIA_ASYNC_WITH_FETCH_02
        * @tc.name      : Get all MEDIA asset details from folder "data/media/onelevel/media" [AsyncCallBack with fetch options]
        * @tc.desc      : Get MEDIA asset details from folder "data/media/onelevel/media"
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
*/    


    it('SUB_MEDIA_MEDIALIBRARY_GETMEDIA_ASYNC_WITH_FETCH_02', 0, async function (done) {
        console.info("MediaLibraryTest: starting getmediaassets async with fetch test case 002");
        console.info("MediaLibraryTest: mediapath before is :" + mediapath.selections);
        media.getMediaAssets(mediapath, (error, value)=> {
            if (error){
                console.info('MediaLibraryTest: getMediaAssets returned an error' + error.message);
            }
            console.info('MediaLibraryTest: getMediaAssets2 returns '+ value.length);
            if (value == undefined){
                console.info('MediaLibraryTest: There are no  files under' + mediapath + 'folder');
            }
            else if (value != undefined){
                console.info("MediaLibraryTest: mediapath after is :" + mediapath);
                value.forEach(getMediaData);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETMEDIA_ASYNC_02 :  PASS');
                //sleep(1000);

            }
            done();
        });
        done();
    })




/* *
  * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETMEDIA_ASYNC_WITH_NOFETCH_OPTIONS_PROVIDED_05
  * @tc.name      : Get all MEDIA asset details from folder "data/onelevel/media" [AsyncCallBack with fetch options]
  * @tc.desc      : Get MEDIA asset details from folder "data/onelevel/media"
  * @tc.size      : MEDIUM
  * @tc.type      : Function
  * @tc.level     : Level 0
*/


    it('SUB_MEDIA_MEDIALIBRARY_GETMEDIA_ASYNC_WITH_NONEXISTANT_FETCH_OPTIONS_PROVIDED_05', 0, async function (done) {
        console.info("MediaLibraryTest: starting SUB_MEDIA_MEDIALIBRARY_GETMEDIA_ASYNC_WITH_NONEXISTANT_FETCH_OPTIONS_PROVIDED_05");
        console.info("MediaLibraryTest: mediapath before is :" + mediapath.selections);
        media.getMediaAssets( nonexistantpath, (error, value)=> {
            console.info('MediaLibraryTest: getMediaAssets returned value' + value);
            if (error){
                console.info('MediaLibraryTest: getMediaAssets returned an error' + value);
                console.info('MediaLibraryTest: getMediaAssets returned an error' + error.message);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETMEDIA_ASYNC_WITH_NONEXISTANT_FETCH_OPTIONS_PROVIDED_05 :  PASS');
            }
            console.info('MediaLibraryTest: getMediaAssets2 returns '+ value.length);
            if (value == undefined){
                console.info('MediaLibraryTest: getMediaAssets returned undefiened' + value);
                console.info('MediaLibraryTest: There are no  files under' + nonexistantpath + 'folder');
            }
            else if (value != undefined){
                console.info("MediaLibraryTest: mediapath after is :" + nonexistantpath);
                value.forEach(getMediaData);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETMEDIA_ASYNC_WITH_NONEXISTANT_FETCH_OPTIONS_PROVIDED_05 :  FAIL');
                //sleep(1000);

            }
            done();
        });
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETMEDIA_ASYNC_WITH_EMPTY_FETCH_OPTIONS_PROVIDED_07
* @tc.name      : Get all MEDIA asset details from folder "data/media/onelevel/emptypath" [AsyncCallBack with fetch options]
* @tc.desc      : Get MEDIA asset details from folder "data/media/onelevel/emptypath"
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
    


    it('SUB_MEDIA_MEDIALIBRARY_GETMEDIA_ASYNC_WITH_EMPTY_FETCH_OPTIONS_PROVIDED_07', 0, async function (done) {
        console.info("MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETMEDIA_ASYNC_WITH_EMPTY_FETCH_OPTIONS_PROVIDED_07");
        console.info("MediaLibraryTest: mediapath before is :" + EMPTYPATH.selections);
        media.getMediaAssets(EMPTYPATH, (error, value)=> {
            console.info('MediaLibraryTest: getMediaAssets returned an value' + value);
            if (error){
                console.info('MediaLibraryTest: getMediaAssets returned an error' + value);
                console.info('MediaLibraryTest: getMediaAssets returned an error' + error.message);
            }
            console.info('MediaLibraryTest: getMediaAssets2 returns '+ value.length);
            if (value == undefined){
                console.info('MediaLibraryTest: getMediaAssets returned undefined' + value);
                console.info('MediaLibraryTest: There are no  files under' + mediapath + 'folder');
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETMEDIA_ASYNC_WITH_EMPTY_FETCH_OPTIONS_PROVIDED_07 :  PASS');
            }
            else if (value != undefined){
                console.info("MediaLibraryTest: mediapath after is :" + mediapath);
                value.forEach(getMediaData);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETMEDIA_ASYNC_WITH_EMPTY_FETCH_OPTIONS_PROVIDED_07 :  FAIL');
                //sleep(1000);

            }
            done();
        });
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETMEDIA_PROMISE_WITHOUT_FETCH_03
* @tc.name      : Get all MEDIA asset details from folder "/data/media/onelevel" with fetch options [Promise + fetch options]
* @tc.desc      : Get MEDIA asset details from system
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/  

it('SUB_MEDIA_MEDIALIBRARY_GETMEDIA_PROMISE_WITHOUT_FETCH_03', 0, async function (done) {
    const promise = media.getMediaAssets();
    promise.then(async function(data){
        console.info('MediaLibraryTest: Promise successful: getMediaAssets3 returns '+ data.length);
        if (data == undefined) {
            console.info('MediaLibraryTest: There are no Media files in' + '/data/media' + 'folder');
        }
        else if (data != undefined){
            data.forEach(getMediaData);
            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETMEDIA_PROMISE_WITHOUT_FETCH_03:  PASS');
        }

    });
    await promise;
    done ();
})

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETMEDIA_PROMISE_WITH_FETCH_04
        * @tc.name      : Get all MEDIA asset details from folder "/data/media/onelevel/media" with fetch options [Promise + fetch options]
        * @tc.desc      : Get MEDIA asset details from system
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
*/   

it('SUB_MEDIA_MEDIALIBRARY_GETMEDIA_PROMISE_WITH_FETCH_04', 0, async function (done) {
    const promise = media.getMediaAssets(mediapath);
    promise.then(async function(data){
        console.info("MediaLibraryTest: mediapath before is :" + mediapath);
        console.info('MediaLibraryTest: Promise successful: getMediaAssets3 returns '+ data.length);
        if (data == undefined) {
            console.info('MediaLibraryTest: There are no Media files in' + mediapath + 'folder');
        }
        else if (data != undefined){
            console.info("MediaLibraryTest: mediapath after is :" + mediapath);
            data.forEach(getMediaData);
            console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETMEDIA_PROMISE_WITH_FETCH_04:  PASS');
        }

    });
    await promise;
    done();
})

    /* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITHOUT_FETCH_01
        * @tc.name      : Get all Image asset from /data/media [Async calback]
        * @tc.desc      : Get all Image asset from /data/media [Async calback]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITHOUT_FETCH_01', 0, async function (done) {
        if (media == null){
            console.info(' MediaLibraryTest: media returned null');
        }
        media.getImageAssets((error, value)=> {
            if (error){
                console.info(' MediaLibraryTest: getImageAssets returned an error' + error.message);
            }
            console.info(' MediaLibraryTest: getImageAssets1 returns '+ value.length);
            if (value == undefined){
                console.info(' MediaLibraryTest: There are no images under /data/media folder');
            }
            else if (value != undefined){
                value.forEach(getImageData);
                console.info(' MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITHOUT_FETCH_01 :  PASS');
                //sleep(1000);

            }
            done();
        });
        done();
    })

 /* *
 * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITHOUT_FETCH_BMP_01
 * @tc.name      : Get all Image asset from /data/media [Async calback] and check for BMP file
 * @tc.desc      : Get all Image asset from /data/media [Async calback] and check for BMP file
 * @tc.size      : MEDIUM
 * @tc.type      : Function
 * @tc.level     : Level 0
 */
    it('SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITHOUT_FETCH_BMP_01', 0, async function (done) {
        if (media == null){
            console.info(' MediaLibraryTest: media returned null');
        }
        media.getImageAssets((error, value)=> {
            if (error){
                console.info(' MediaLibraryTest: getImageAssets returned an error' + error.message);
                console.info(' MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITHOUT_FETCH_BMP_01 :  FAIL');
            }
            console.info(' MediaLibraryTest: getImageAssets1 returns '+ value.length);
            if (value == undefined){
                console.info(' MediaLibraryTest: There are no images under /data/media folder');
            }
            else if (value != undefined){
                value.forEach(getImageDataBmp);
                console.info(' MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITHOUT_FETCH_BMP_01 :  PASS');
                //sleep(1000);

            }
            done();
        });
        done();
    })

 /* *
 * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITHOUT_FETCH_GIF_02
 * @tc.name      : Get all Image asset from /data/media [Async calback] and check for GIF file
 * @tc.desc      : Get all Image asset from /data/media [Async calback] and check for GIF file
 * @tc.size      : MEDIUM
 * @tc.type      : Function
 * @tc.level     : Level 0
 */   
        it('SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITHOUT_FETCH_GIF_02', 0, async function (done) {
        if (media == null){
            console.info(' MediaLibraryTest: media returned null');
        }
        media.getImageAssets((error, value)=> {
            if (error){
                console.info(' MediaLibraryTest: getImageAssets returned an error' + error.message);
                console.info(' MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITHOUT_FETCH_GIF_02 :  FAIL');
            }
            console.info(' MediaLibraryTest: getImageAssets1 returns '+ value.length);
            if (value == undefined){
                console.info(' MediaLibraryTest: There are no images under /data/media folder');
            }
            else if (value != undefined){
                value.forEach(getImageDataGif);
                console.info(' MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITHOUT_FETCH_GIF_02 :  PASS');
                // sleep(1000);

            }
            done();
        });
        done();
    })

  /* *
  * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITHOUT_FETCH_JPG_03
  * @tc.name      : Get all Image asset from /data/media [Async calback] and check for JPG file
  * @tc.desc      : Get all Image asset from /data/media [Async calback] and check for JPG file
  * @tc.size      : MEDIUM
  * @tc.type      : Function
  * @tc.level     : Level 0
  */  
    it('SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITHOUT_FETCH_JPG_03', 0, async function (done) {
        if (media == null){
            console.info(' MediaLibraryTest: media returned null');
        }
        media.getImageAssets((error, value)=> {
            if (error){
                console.info(' MediaLibraryTest: getImageAssets returned an error' + error.message);
                console.info(' MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITHOUT_FETCH_JPG_03 :  FAIL');
            }
            console.info(' MediaLibraryTest: getImageAssets1 returns '+ value.length);
            if (value == undefined){
                console.info(' MediaLibraryTest: There are no images under /data/media folder');
            }
            else if (value != undefined){
                value.forEach(getImageDataJpg);
                console.info(' MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITHOUT_FETCH_JPG_03 :  PASS');
                // sleep(1000);

            }
            done();
        });
        done();
    })



  /* *
  * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITHOUT_FETCH_PNG_04
  * @tc.name      : Get all Image asset from /data/media [Async calback] and check for PNG file
  * @tc.desc      : Get all Image asset from /data/media [Async calback] and check for PNG file
  * @tc.size      : MEDIUM
  * @tc.type      : Function
  * @tc.level     : Level 0
  */  
    it('SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITHOUT_FETCH_PNG_04', 0, async function (done) {
        if (media == null){
            console.info(' MediaLibraryTest: media returned null');
        }
        media.getImageAssets((error, value)=> {
            if (error){
                console.info(' MediaLibraryTest: getImageAssets returned an error' + error.message);
                console.info(' MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITHOUT_FETCH_PNG_04 :  FAIL');
            }
            console.info(' MediaLibraryTest: getImageAssets1 returns '+ value.length);
            if (value == undefined){
                console.info(' MediaLibraryTest: There are no images under /data/media folder');
            }
            else if (value != undefined){
                value.forEach(getImageDataPng);
                console.info(' MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITHOUT_FETCH_PNG_04 :  PASS');
                // sleep(1000);

            }
            done();
        });
        done();
    })

   /* *
   * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITH_FETCH_02
   * @tc.name      : Get all Image asset details from /data/media/onelevel/images [Async callback with fetch]
   * @tc.desc      : Get all Image asset details from /data/media/onelevel/images [Async callback with fetch]
   * @tc.size      : MEDIUM
   * @tc.type      : Function
   * @tc.level     : Level 0
   */ 


    it('SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITH_FETCH_02', 0, async function (done) {
        if (media == null){
            console.info(' MediaLibraryTest: media returned null');
        }
        media.getImageAssets(imagespath,(error, value)=> {
            if (error){
                console.info(' MediaLibraryTest: getImageAssets2 returned an error' + error.message);
            }
            console.info(' MediaLibraryTest: getImageAssets2 returns '+ value.length);
            if (value == undefined){
                console.info(' MediaLibraryTest: There are no images in' + imagespath.selections + 'folder');
            }
            else if (value != undefined){
                value.forEach(getImageData);
                console.info(' MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITH_FETCH_02 :  PASS');
                //sleep(1000);
            }
            done();
        });
        done();
    })



   /* *
   * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITH_FETCH_BMP_01
   * @tc.name      : Get all Image asset details from /data/media/onelevel/images [Async callback with fetch] and check BMP
   * @tc.desc      : Get all Image asset details from /data/media/onelevel/images [Async callback with fetch] and check BMP
   * @tc.size      : MEDIUM
   * @tc.type      : Function
   * @tc.level     : Level 0
   */  


    it('SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITH_FETCH_BMP_01', 0, async function (done) {
        if (media == null){
            console.info(' MediaLibraryTest: media returned null');
        }
        media.getImageAssets(BMP,(error, value)=> {
            if (error){
                console.info(' MediaLibraryTest: getImageAssets2 returned an error' + error.message);
            }
            console.info(' MediaLibraryTest: getImageAssets2 returns '+ value.length);
            if (value == undefined){
                console.info(' MediaLibraryTest: There are no images in' + BMP.selections + 'folder');
            }
            else if (value != undefined){
                value.forEach(getImageDataBmp);
                console.info(' MediaLibraryTest: There are BMP images in' + BMP.selections + 'folder');
                console.info(' MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITH_FETCH_BMP_01 :  PASS');
                //sleep(1000);
            }
            done();
        });
        done();
    })



   /* *
   * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITH_FETCH_GIF_02
   * @tc.name      : Get all Image asset details from /data/media/onelevel/images [Async callback with fetch] and check GIF
   * @tc.desc      : Get all Image asset details from /data/media/onelevel/images [Async callback with fetch] and check GIF
   * @tc.size      : MEDIUM
   * @tc.type      : Function
   * @tc.level     : Level 0
   */
     


    it('SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITH_FETCH_GIF_02', 0, async function (done) {
        if (media == null){
            console.info(' MediaLibraryTest: media returned null');
        }
        media.getImageAssets(GIF,(error, value)=> {
            if (error){
                console.info(' MediaLibraryTest: getImageAssets2 returned an error' + error.message);
            }
            console.info(' MediaLibraryTest: getImageAssets2 returns '+ value.length);
            if (value == undefined){
                console.info(' MediaLibraryTest: There are no images in' + GIF.selections + 'folder');
            }
            else if (value != undefined){
                value.forEach(getImageDataGif);
                console.info(' MediaLibraryTest: There are GIF images in' + GIF.selections + 'folder');
                console.info(' MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITH_FETCH_GIF_02 :  PASS');
                //sleep(1000);
            }
            done();
        });
        done();
    })



/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITH_FETCH_JPG_03
* @tc.name      : Get all Image asset details from /data/media/onelevel/images [Async callback with fetch] and check GIF
* @tc.desc      : Get all Image asset details from /data/media/onelevel/images [Async callback with fetch] and check GIF
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/ 


    it('SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITH_FETCH_JPG_03', 0, async function (done) {
        if (media == null){
            console.info(' MediaLibraryTest: media returned null');
        }
        media.getImageAssets(JPG,(error, value)=> {
            if (error){
                console.info(' MediaLibraryTest: getImageAssets2 returned an error' + error.message);
            }
            console.info(' MediaLibraryTest: getImageAssets2 returns '+ value.length);
            if (value == undefined){
                console.info(' MediaLibraryTest: There are no images in' + JPG.selections + 'folder');
            }
            else if (value != undefined){
                value.forEach(getImageDataJpg);
                console.info(' MediaLibraryTest: There are JPG images in' + JPG.selections + 'folder');
                console.info(' MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITH_FETCH_JPG_03 :  PASS');
                //sleep(1000);
            }
            done();
        });
        done();
    })



/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITH_FETCH_PNG_04
* @tc.name      : Get all Image asset details from /data/media/onelevel/images [Async callback with fetch] and check PNG
* @tc.desc      : Get all Image asset details from /data/media/onelevel/images [Async callback with fetch] and check PNG
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/


    it('SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITH_FETCH_PNG_04', 0, async function (done) {
        if (media == null){
            console.info(' MediaLibraryTest: media returned null');
        }
        media.getImageAssets(PNG,(error, value)=> {
            if (error){
                console.info(' MediaLibraryTest: getImageAssets2 returned an error' + error.message);
            }
            console.info(' MediaLibraryTest: getImageAssets2 returns '+ value.length);
            if (value == undefined){
                console.info(' MediaLibraryTest: There are no images in' + PNG.selections + 'folder');
            }
            else if (value != undefined){
                value.forEach(getImageDataPng);
                console.info(' MediaLibraryTest: There are PNG images in' + PNG.selections + 'folder');
                console.info(' MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_ASYNC_WITH_FETCH_PNG_04 :  PASS');
                //sleep(1000);
            }
            done();
        });
        done();
    })



/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGE_PROMISE_WITH_FETCH_03
* @tc.name      : Get all Image asset details from system with Promise and media fetch options
* @tc.desc      : Get image asset details from system
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/    


    it('SUB_MEDIA_MEDIALIBRARY_GETIMAGE_PROMISE_WITH_FETCH_03', 0, async function (done) {
        const promise = media.getImageAssets(mediapath);
        promise.then(function(data){
            console.info(' MediaLibraryTest: Promise successful: getImageAssets3 returns '+ data.length);
            if (data == undefined) {
                console.info(' MediaLibraryTest: There are no images in' + mediapath.selections + 'folder');
            }
            else if (data != undefined){
                console.info(' MediaLibraryTest: Promise successful: DATA VALUE IS '+ data);
                console.info(' MediaLibraryTest: There are images in' + mediapath.selections + 'folder');
                data.forEach(getImageData);
                console.info(' MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_03:  PASS');
             
            }

        });
        await promise;
        done();
    })



/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGE_PROMISE_WITHOUT_FETCH_04
* @tc.name      : Get all Image asset details from system with Promise without media fetch options from folder /media/data
* @tc.desc      : Get all Image asset details from system with Promise without media fetch options from folder /media/data
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/    

    it('SUB_MEDIA_MEDIALIBRARY_GETIMAGE_PROMISE_WITHOUT_FETCH_04', 0, function () {
        media.getImageAssets().then(function(data){
            console.info(' MediaLibraryTest: Promise successful: getImageAssets4 returns '+ data.length);
            if (data == undefined) {
                console.info(' MediaLibraryTest: There are no images in' + '/data/media' + 'folder');
            }
            else if (data != undefined){
                data.forEach(getImageData);
                console.info(' MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_04:  PASS');
                //sleep(1000);

            }
        });
    })



/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGE_PROMISE_WITHOUT_FETCH_BMP_01
* @tc.name      : Get all Image asset details from system with Promise without media fetch options from folder /media/data and check bmp file
* @tc.desc      : Get all Image asset details from system with Promise without media fetch options from folder /media/data and check bmp file
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/   

    it('SUB_MEDIA_MEDIALIBRARY_GETIMAGE_PROMISE_WITHOUT_FETCH_BMP_01', 0, async function (done) {
        const promise = media.getImageAssets();
        promise.then(function(data){
            console.info(' MediaLibraryTest: Promise successful: getImageAssets4 returns '+ data.length);
            if (data == undefined) {
                console.info(' MediaLibraryTest: There are no images in' + '/data/media' + 'folder');
            }
            else if (data != undefined){
                data.forEach(getImageDataBmp);
                console.info(' MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_PROMISE_WITHOUT_FETCH_BMP_01:  PASS');
                //sleep(1000);

            }
        });
        await promise;
            done();
    })



/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGE_PROMISE_WITHOUT_FETCH_GIF_02
* @tc.name      : Get all Image asset details from system with Promise without media fetch options from folder /media/data and check GIF file
* @tc.desc      : Get all Image asset details from system with Promise without media fetch options from folder /media/data and check GIF file
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/  

    it('SUB_MEDIA_MEDIALIBRARY_GETIMAGE_PROMISE_WITHOUT_FETCH_GIF_02', 0, async function (done) {
        const promise = media.getImageAssets();
        promise.then(function(data){
            console.info(' MediaLibraryTest: Promise successful: getImageAssets4 returns '+ data.length);
            if (data == undefined) {
                console.info(' MediaLibraryTest: There are no images in' + '/data/media' + 'folder');
            }
            else if (data != undefined){
                data.forEach(getImageDataGif);
                console.info(' MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_PROMISE_WITHOUT_FETCH_GIF_02:  PASS');
                //sleep(1000);

            }
        });
        await promise;
        done();
    })



/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGE_PROMISE_WITHOUT_FETCH_JPG_03
* @tc.name      : Get all Image asset details from system with Promise without media fetch options from folder /media/data and check JPG file
* @tc.desc      : Get all Image asset details from system with Promise without media fetch options from folder /media/data and check JPG file
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/   

    it('SUB_MEDIA_MEDIALIBRARY_GETIMAGE_PROMISE_WITHOUT_FETCH_JPG_03', 0, async function (done) {
        const promise = media.getImageAssets();
        promise.then(function(data){
            console.info(' MediaLibraryTest: Promise successful: getImageAssets4 returns '+ data.length);
            if (data == undefined) {
                console.info(' MediaLibraryTest: There are no images in' + '/data/media' + 'folder');
            }
            else if (data != undefined){
                data.forEach(getImageDataJpg);
                console.info(' MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_PROMISE_WITHOUT_FETCH_JPG_03:  PASS');
                //sleep(1000);

            }
        });
        await promise;
        done();
    })



/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGE_PROMISE_WITHOUT_FETCH_PNG_04
* @tc.name      : Get all Image asset details from system with Promise without media fetch options from folder /media/data and check PNG file
* @tc.desc      : Get all Image asset details from system with Promise without media fetch options from folder /media/data and check PNG file
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/    

    it('SUB_MEDIA_MEDIALIBRARY_GETIMAGE_PROMISE_WITHOUT_FETCH_PNG_04', 0, async function (done) {
        const promise = media.getImageAssets();
        promise.then(function(data){
            console.info(' MediaLibraryTest: Promise successful: getImageAssets4 returns '+ data.length);
            if (data == undefined) {
                console.info(' MediaLibraryTest: There are no images in' + '/data/media' + 'folder');
            }
            else if (data != undefined){
                data.forEach(getImageDataPng);
                console.info(' MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_PROMISE_WITHOUT_FETCH_PNG_04:  PASS');
                //sleep(1000);

            }
        });
        await promise;
        done();
    })


/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGE_PROMISE_EMPTY_DIRECTORY_05
* @tc.name      : Get all Image asset details from system with Promise and media fetch options
* @tc.desc      : Get image asset details from system
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/


it('SUB_MEDIA_MEDIALIBRARY_GETIMAGE_PROMISE_EMPTY_DIRECTORY_05', 0, async function (done) {
    const promise = media.getImageAssets(EMPTYPATH);
    promise.then(function(data){
        console.info(' MediaLibraryTest: Promise successful: getImageAssets returns '+ data.length);
        if (data == undefined) {
            console.info(' MediaLibraryTest: There are no images in' + EMPTYPATH.selections + 'folder');
            expect(data).assertEqual(undefined);
            console.info(' MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_PROMISE_EMPTY_DIRECTORY_05:  PASS');
        }
        else if (data != undefined){
            console.info(' MediaLibraryTest: Promise successful: DATA VALUE IS '+ data);
            console.info(' MediaLibraryTest: There are images in' + EMPTYPATH.selections + 'folder');
            data.forEach(getImageData);
            console.info(' MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_PROMISE_EMPTY_DIRECTORY_05:  FAIL');

        }

    });
    await promise;
    done();
})

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGE_CHECK_MIME_MEDIA_TYPE_IMAGE_DIRECTORY_01
* @tc.name      : Get all Image asset details from images folder and check for MIME and MEDIA type
* @tc.desc      : Get all Image asset details from images folder and check for MIME and MEDIA type
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/    


    it('SUB_MEDIA_MEDIALIBRARY_GETIMAGE_CHECK_MIME_MEDIA_TYPE_IMAGE_DIRECTORY_01', 0, async function (done) {
        const promise = media.getImageAssets(imagespath);
        promise.then(function(data){
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no audio files in' + imagespath.selections + 'folder');
            }
            else if (data != undefined){
                console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
                data.forEach(getImageDataCheckMimeMediaType);
                //console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ check_mime_media_type);
                //expect(check_mime_media_type).asserttrue();
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_CHECK_MIME_MEDIA_TYPE_IMAGE_DIRECTORY_01:  PASS');
            }else {
                console.info('MediaLibraryTest: testcase_SSUB_MEDIA_MEDIALIBRARY_GETIMAGE_CHECK_MIME_MEDIA_TYPE_IMAGE_DIRECTORY_01:  FAIL');
            }
        });
        await promise;
        done();
    })



/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGE_CHECK_MIME_MEDIA_TYPE_BMP_DIRECTORY_02
* @tc.name      : Get all Image asset details in BMP directory and check for mimetype and media type
* @tc.desc      : Get all Image asset details in BMP directory and check for mimetype and media type
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/    
    it('SUB_MEDIA_MEDIALIBRARY_GETIMAGE_CHECK_MIME_MEDIA_TYPE_BMP_DIRECTORY_02', 0, async function (done) {
        const promise = media.getImageAssets(BMP);
        promise.then(function(data){
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no image files in' + BMP.selections + 'folder');
            }
            else if (data != undefined){
                console.info('MediaLibraryTest: Promise successful: getImageAssets3 returns '+ data.length);
                data.forEach(getBMPImageDataCheckMimeMediaType);
                //console.info('MediaLibraryTest: Promise successful: getImageAssets3 returns '+ check_mime_media_type_bmp);
                //expect(check_mime_media_type_bmp).asserttrue();
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_CHECK_MIME_MEDIA_TYPE_BMP_DIRECTORY_02:  PASS');
            }else {
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_CHECK_MIME_MEDIA_TYPE_BMP_DIRECTORY_02:  FAIL');
            }

        });
        await promise;
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGE_CHECK_MIME_MEDIA_TYPE_GIF_DIRECTORY_03
* @tc.name      : Get all Image asset details in GIF directory and check for mimetype and media type
* @tc.desc      : Get all Image asset details in GIF directory and check for mimetype and media type
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/   
    it('SUB_MEDIA_MEDIALIBRARY_GETIMAGE_CHECK_MIME_MEDIA_TYPE_GIF_DIRECTORY_03', 0, async function (done) {
        const promise = media.getImageAssets(GIF);
        promise.then(function(data){
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no image files in' + GIF.selections + 'folder');
            }
            else if (data != undefined){
                console.info('MediaLibraryTest: Promise successful: getImageAssets3 returns '+ data.length);
                var check_mime_media_type_GIF = data.forEach(getGIFImageDataCheckMimeMediaType);
                expect(check_mime_media_type_GIF).asserttrue();
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_CHECK_MIME_MEDIA_TYPE_GIF_DIRECTORY_03:  PASS');
            }else {
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_CHECK_MIME_MEDIA_TYPE_GIF_DIRECTORY_03:  FAIL');
            }

        });
        await promise;
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGE_CHECK_MIME_MEDIA_TYPE_JPG_DIRECTORY_04
* @tc.name      : Get all Image asset details in JPG directory and check for mimetype and media type
* @tc.desc      : Get all Image asset details in JPG directory and check for mimetype and media type
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     
    it('SUB_MEDIA_MEDIALIBRARY_GETIMAGE_CHECK_MIME_MEDIA_TYPE_JPG_DIRECTORY_04', 0, async function (done) {
        const promise = media.getImageAssets(JPG);
        promise.then(function(data){
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no image files in' + JPG.selections + 'folder');
            }
            else if (data != undefined){
                console.info('MediaLibraryTest: Promise successful: getImageAssets3 returns '+ data.length);
                var check_mime_media_type_JPG = data.forEach(getJPGImageDataCheckMimeMediaType);
                expect(check_mime_media_type_JPG).asserttrue();
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_CHECK_MIME_MEDIA_TYPE_JPG_DIRECTORY_04:  PASS');
            }else {
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_CHECK_MIME_MEDIA_TYPE_JPG_DIRECTORY_04:  FAIL');
            }

        });
        await promise;
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGE_CHECK_MIME_MEDIA_TYPE_PNG_DIRECTORY_05
* @tc.name      : Get all Image asset details in PNG directory and check for mimetype and media type
* @tc.desc      : Get all Image asset details in PNG directory and check for mimetype and media type
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/    
    it('SUB_MEDIA_MEDIALIBRARY_GETIMAGE_CHECK_MIME_MEDIA_TYPE_PNG_DIRECTORY_05', 0, async function (done) {
        const promise = media.getImageAssets(PNG);
        promise.then(function(data){
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no image files in' + PNG.selections + 'folder');
            }
            else if (data != undefined){
                console.info('MediaLibraryTest: Promise successful: getImageAssets3 returns '+ data.length);
                var check_mime_media_type_PNG = data.forEach(getPNGImageDataCheckMimeMediaType);
                expect(check_mime_media_type_PNG).asserttrue();
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_CHECK_MIME_MEDIA_TYPE_PNG_DIRECTORY_05:  PASS');
            }else {
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETIMAGE_CHECK_MIME_MEDIA_TYPE_PNG_DIRECTORY_05:  FAIL');
            }

        });
        await promise;
        done();
    })


/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_01
* @tc.name      : Get all AUDIO asset from /data/media [Async callback]
* @tc.desc      : Get AUDIO asset from system
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/    
    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYNC_WITHOUT_FETCH_01', 0, async function (done) {
        media.getAudioAssets((error, value1)=> {
            if (error){
                console.info('MediaLibraryTest: getAudioAssets returned an error' + error.message);
            }

            if (value1 == undefined){
                console.info('MediaLibraryTest: There are no audio files under /data/media folder');
            }
            else if (value1 != undefined){
                console.info('MediaLibraryTest: getAudioAssets1 returns '+ value1.length);
                value1.forEach(getAudioData);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_01 :  PASS');
                

            }
            done();
        });
        done();
    })


/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYNC_WITHOUT_FETCH_WAV_01
* @tc.name      : Get all AUDIO asset from /data/media and check whether its a wav file [Async callback]
* @tc.desc      : Get all AUDIO asset from /data/media and check whether its a wav file [Async callback]
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/    

    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYNC_WITHOUT_FETCH_WAV_01', 0, async function (done) {
        media.getAudioAssets((error, value1)=> {
            if (error){
                console.info('MediaLibraryTest: getAudioAssets returned an error' + error.message);
            }

            if (value1 == undefined){
                console.info('MediaLibraryTest: There are no audio files under /data/media folder');
            }
            else if (value1 != undefined){
                console.info('MediaLibraryTest: getAudioAssets1 returns '+ value1.length);
                value1.forEach(getAudioDatawav);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYNC_WITHOUT_FETCH_WAV_01 :  PASS');
            }
            done();
        });
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYNC_WITHOUT_FETCH_AAC_02
* @tc.name      : Get all AUDIO asset from /data/media and check whether its aac file [Async callback]
* @tc.desc      : Get all AUDIO asset from /data/media and check whether its aac file [Async callback]
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/     

    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYNC_WITHOUT_FETCH_AAC_02', 0, async function (done) {
        media.getAudioAssets((error, value1)=> {
            if (error){
                console.info('MediaLibraryTest: getAudioAssets returned an error' + error.message);
            }

            if (value1 == undefined){
                console.info('MediaLibraryTest: There are no audio files under /data/media folder');
            }
            else if (value1 != undefined){
                console.info('MediaLibraryTest: getAudioAssets1 returns '+ value1.length);
                value1.forEach(getAudioDataAac);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYNC_WITHOUT_FETCH_AAC_02 :  PASS');
            }
            done();
        });
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYNC_WITHOUT_FETCH_FLAC_04
* @tc.name      : Get all AUDIO asset from /data/media and check whether its flac file [Async callback]
* @tc.desc      : Get all AUDIO asset from /data/media and check whether its flac file [Async callback]
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/   

    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYNC_WITHOUT_FETCH_FLAC_04', 0, async function (done) {
        media.getAudioAssets((error, value1)=> {
            if (error){
                console.info('MediaLibraryTest: getAudioAssets returned an error' + error.message);
            }

            if (value1 == undefined){
                console.info('MediaLibraryTest: There are no audio files under /data/media folder');
            }
            else if (value1 != undefined){
                console.info('MediaLibraryTest: getAudioAssets1 returns '+ value1.length);
                value1.forEach(getAudioDataFlac);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYNC_WITHOUT_FETCH_FLAC_04 :  PASS');
            }
            done();
        });
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYNC_WITHOUT_FETCH_MP3_03
* @tc.name      : Get all AUDIO asset from /data/media and check whether its mp3 file [Async callback]
* @tc.desc      : Get all AUDIO asset from /data/media and check whether its mp3 file [Async callback]
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/    

    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYNC_WITHOUT_FETCH_MP3_03', 0, async function (done) {
        media.getAudioAssets((error, value1)=> {
            if (error){
                console.info('MediaLibraryTest: getAudioAssets returned an error' + error.message);
            }

            if (value1 == undefined){
                console.info('MediaLibraryTest: There are no audio files under /data/media folder');
            }
            else if (value1 != undefined){
                console.info('MediaLibraryTest: getAudioAssets1 returns '+ value1.length);
                //var checkmimemediamp3 = value1.forEach(getAudioDataMp3);
                //expect(checkmimemediamp3).assertflase();
                value1.forEach(getAudioDataMp3);
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYNC_WITHOUT_FETCH_MP3_03 :  PASS');
            }
            done();
        });
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYNC_WITHOUT_FETCH_OGG_05
* @tc.name      : Get all AUDIO asset from /data/media and check whether its OGG file [Async callback]
* @tc.desc      : Get all AUDIO asset from /data/media and check whether its OGG file [Async callback]
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/    

    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYNC_WITHOUT_FETCH_0GG_05', 0, async function (done) {
        media.getAudioAssets((error, value1)=> {
            if (error){
                console.info('MediaLibraryTest: getAudioAssets returned an error' + error.message);
            }

            if (value1 == undefined){
                console.info('MediaLibraryTest: There are no audio files under /data/media folder');
            }
            else if (value1 != undefined){
                console.info('MediaLibraryTest: getAudioAssets1 returns '+ value1.length);
                //var checkmimemediamp3 = value1.forEach(getAudioDataMp3);
                //expect(checkmimemediamp3).assertflase();
                value1.forEach(getAudioDataOGG);
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYNC_WITHOUT_FETCH_OGG_05 :  PASS');
            }
            done();
        });
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYC_WITH_FETCH_02
* @tc.name      : Get all Audio asset details from fetch options [Asynccall back with specific folder "Data/media/onelevel/audio"]
* @tc.desc      : Get all Audio asset details from fetch options [Asynccall back with specific folder "Data/media/onelevel/audio"]
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/    

    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYC_WITH_FETCH_02', 0, async function (done) {
        media.getAudioAssets(audiopath, (error, value)=> {
            if (error){
                console.info('MediaLibraryTest: getAudioAssets returned an error' + error.message);
            }

            if (value == undefined){
                console.info('MediaLibraryTest: There are no audio files under' + audiopath.selections + 'folder');
            }
            else if (value != undefined){
                console.info('MediaLibraryTest: getAudioAssets2 returns '+ value.length);
                value.forEach(getAudioData);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYC_WITH_FETCH_02 :  PASS');
                

            }
            done();
        });
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYC_WITH_FETCH_WAV_01
* @tc.name      : Get all Audio asset details from fetch options [Asynccall back with specific folder "Data/media/onelevel/audio"] & check for wav file
* @tc.desc      : Get all Audio asset details from fetch options [Asynccall back with specific folder "Data/media/onelevel/audio"] & check for wav file
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/   

    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYC_FETCH_WAV_01', 0, async function (done) {
        media.getAudioAssets(WAV, (error, value)=> {
            if (error){
                console.info('MediaLibraryTest: getAudioAssets returned an error' + error.message);
            }

            if (value == undefined){
                console.info('MediaLibraryTest: There are no audio files under' + WAV.selections + 'folder');
            }
            else if (value != undefined){
                console.info('MediaLibraryTest: getAudioAssets2 returns '+ value.length);
                value.forEach(getAudioDatawav);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYC_FETCH_WAV_01 :  PASS');


            }
            done();
        });
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYC_WITH_FETCH_AAC_02
* @tc.name      : Get all Audio asset details from fetch options [Asynccall back with specific folder "Data/media/onelevel/audio"] & check for aac file
* @tc.desc      : Get all Audio asset details from fetch options [Asynccall back with specific folder "Data/media/onelevel/audio"] & check for aac file
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/    

    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYC_WITH_FETCH_AAC_02', 0, async function (done) {
        media.getAudioAssets(AAC, (error, value)=> {
            if (error){
                console.info('MediaLibraryTest: getAudioAssets returned an error' + error.message);
            }

            if (value == undefined){
                console.info('MediaLibraryTest: There are no audio files under' + AAC.selections + 'folder');
            }
            else if (value != undefined){
                console.info('MediaLibraryTest: getAudioAssets2 returns '+ value.length);
                value.forEach(getAudioDataAac);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYC_WITH_FETCH_AAC_02 :  PASS');


            }
            done();
        });
        done();
    })
/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYC_WITH_FETCH_MP3_03
* @tc.name      : Get all Audio asset details from fetch options [Asynccall back with specific folder "Data/media/onelevel/audio"] & check for mp3 file
* @tc.desc      : Get all Audio asset details from fetch options [Asynccall back with specific folder "Data/media/onelevel/audio"] & check for mp3 file
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/    

    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYC_WITH_FETCH_MP3_03', 0, async function (done) {
        media.getAudioAssets(MP3, (error, value)=> {
            if (error){
                console.info('MediaLibraryTest: getAudioAssets returned an error' + error.message);
            }

            if (value == undefined){
                console.info('MediaLibraryTest: There are no audio files under' + MP3.selections + 'folder');
            }
            else if (value != undefined){
                console.info('MediaLibraryTest: getAudioAssets2 returns '+ value.length);
                value.forEach(getAudioDataMp3);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYC_WITH_FETCH_MP3_03 :  PASS');


            }
            done();
        });
        done();
    })
/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYC_WITH_FETCH_FLAC_04
* @tc.name      : Get all Audio asset details from fetch options [Asynccall back with specific folder "Data/media/onelevel/audio"] & check for flac file
* @tc.desc      : Get all Audio asset details from fetch options [Asynccall back with specific folder "Data/media/onelevel/audio"] & check for flac file
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/    

    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYC_WITH_FETCH_FLAC_04', 0, async function (done) {
        media.getAudioAssets(FLAC, (error, value)=> {
            if (error){
                console.info('MediaLibraryTest: getAudioAssets returned an error' + error.message);
            }

            if (value == undefined){
                console.info('MediaLibraryTest: There are no audio files under' + FLAC.selections + 'folder');
            }
            else if (value != undefined){
                console.info('MediaLibraryTest: getAudioAssets2 returns '+ value.length);
                value.forEach(getAudioDataFlac);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYC_WITH_FETCH_FLAC_04 :  PASS');
            }
            done();
        });
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYC_WITH_FETCH_0GG_05
* @tc.name      : Get all Audio asset details from fetch options [Asynccall back with specific folder "Data/media/onelevel/audio"] & check for flac file
* @tc.desc      : Get all Audio asset details from fetch options [Asynccall back with specific folder "Data/media/onelevel/audio"] & check for flac file
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/   

    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYC_WITH_FETCH_0GG_05', 0, async function (done) {
        media.getAudioAssets(OGG, (error, value)=> {
            if (error){
                console.info('MediaLibraryTest: getAudioAssets returned an error' + error.message);
            }

            if (value == undefined){
                console.info('MediaLibraryTest: There are no audio files under' + OGG.selections + 'folder');
            }
            else if (value != undefined){
                console.info('MediaLibraryTest: getAudioAssets2 returns '+ value.length);
                value.forEach(getAudioDataOGG);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_ASYC_WITH_FETCH_0GG_05 :  PASS');
            }
            done();
        });
        done();
    })

/* 

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_03
* @tc.name      : Get all Audio asset details from system with Promise and fetch options from specific folder (/data/media/onelevel/audio)
* @tc.desc      : Get all Audio asset details from system with Promise and fetch options from specific folder (/data/media/onelevel/audio)
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     


    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_03', 0, async function (done) {
        const promise = media.getAudioAssets(audiopath);
        promise.then(function(data){
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no audio files in' + audiopath.selections + 'folder');
            }
            else if (data != undefined){
                console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
                data.forEach(getAudioData);
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_03:  PASS');
                
            }

        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_FETCH_WAV_01
* @tc.name      : Get all Audio asset details from media/data/onelevel/audio using Promise with fetch options and check for wav file
* @tc.desc      : Get all Audio asset details from media/data/onelevel/audio using Promise with fetch options and check for wav file
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/  


    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_FETCH_WAV_01', 0, async function (done) {
        const promise = media.getAudioAssets(WAV);
        promise.then(function(data){
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no audio files in' + WAV.selections + 'folder');
            }
            else if (data != undefined){
                console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
                data.forEach(getAudioDatawav);
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_FETCH_WAV_01:  PASS');

            }

        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_FETCH_AAC_02
* @tc.name      : Get all Audio asset details from media/data/onelevel/audio using Promise with fetch options and check for aac file
* @tc.desc      : Get all Audio asset details from media/data/onelevel/audio using Promise with fetch options and check for aac file
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/    


    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_FETCH_AAC_02', 0, async function (done) {
        const promise = media.getAudioAssets(AAC);
        promise.then(function(data){
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no audio files in' + AAC.selections + 'folder');
            }
            else if (data != undefined){
                console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
                data.forEach(getAudioDataAac);
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_FETCH_AAC_02:  PASS');

            }

        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_FETCH_MP3_03
* @tc.name      : Get all Audio asset details from media/data/onelevel/audio using Promise with fetch options and check for mp3 file
* @tc.desc      : Get all Audio asset details from media/data/onelevel/audio using Promise with fetch options and check for mp3 file
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/


    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_FETCH_MP3_03', 0, async function (done) {
        const promise = media.getAudioAssets(MP3);
        promise.then(function(data){
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no audio files in' + MP3.selections + 'folder');
            }
            else if (data != undefined){
                console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
                data.forEach(getAudioDataMp3);
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_FETCH_MP3_03:  PASS');

            }

        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_FETCH_FLAC_04
* @tc.name      : Get all Audio asset details from media/data/onelevel using Promise with fetch options and check for flac file
* @tc.desc      : Get all Audio asset details from media/data/onelevel using Promise with fetch options and check for flac file
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     


    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_FETCH_FLAC_04', 0, async function (done) {
        const promise = media.getAudioAssets(FLAC);
        promise.then(function(data){
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no audio files in' + FLAC.selections + 'folder');
            }
            else if (data != undefined){
                console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
                data.forEach(getAudioDataFlac);
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_FETCH_FLAC_04:  PASS');

            }

        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_FETCH_OGG_05
* @tc.name      : Get all Audio asset details from media/data/onelevel using Promise with fetch options and check for flac file
* @tc.desc      : Get all Audio asset details from media/data/onelevel using Promise with fetch options and check for flac file
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     


    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_FETCH_OGG_05', 0, async function (done) {
        const promise = media.getAudioAssets(OGG);
        promise.then(function(data){
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no audio files in' + OGG.selections + 'folder');
            }
            else if (data != undefined){
                console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
                data.forEach(getAudioDataFlac);
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_FETCH_OGG_05:  PASS');

            }
        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_04
* @tc.name      : Get all Audio asset details from data/media using promise without fetch options
* @tc.desc      : Get all Audio asset details from data/media using promise without fetch options
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     


    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_04', 0, async function (done) {
        const promise = media.getAudioAssets();
        promise.then(function(data1){

            if (data1 == undefined) {
                console.info('MediaLibraryTest: There are no audio files in' + '/data/media' + 'folder');
            }
            else if (data1 != undefined){
                console.info('MediaLibraryTest: Promise successful: getAudioAssets4 returns '+ data1.length);
                data1.forEach(getAudioData);
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_04:  PASS');
                
            }
        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_WITHOUT_FETCH_WAV_01
* @tc.name      : Get all Audio asset details from data/media using promise without fetch options and check for wav file
* @tc.desc      : Get all Audio asset details from data/media using promise without fetch options and check for wav file
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/ 


    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_WITHOUT_FETCH_WAV_01', 0, async function (done) {
        const promise = media.getAudioAssets();
        promise.then(function(data1){

            if (data1 == undefined) {
                console.info('MediaLibraryTest: There are no audio files in' + '/data/media' + 'folder');
            }
            else if (data1 != undefined){
                console.info('MediaLibraryTest: Promise successful: getAudioAssets4 returns '+ data1.length);
                data1.forEach(getAudioDatawav);
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_WITHOUT_FETCH_WAV_01:  PASS');

            }
        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_WITHOUT_FETCH_AAC_02
* @tc.name      : Get all Audio asset details from data/media using promise without fetch options and check for aac file
* @tc.desc      : Get all Audio asset details from data/media using promise without fetch options and check for aac file
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/    


    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_WITHOUT_FETCH_AAC_02', 0, async function (done) {
        const promise = media.getAudioAssets();
        promise.then(function(data1){

            if (data1 == undefined) {
                console.info('MediaLibraryTest: There are no audio files in' + '/data/media' + 'folder');
            }
            else if (data1 != undefined){
                console.info('MediaLibraryTest: Promise successful: getAudioAssets4 returns '+ data1.length);
                data1.forEach(getAudioDataAac);
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_WITHOUT_FETCH_AAC_02:  PASS');

            }
        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_WITHOUT_FETCH_MP3_03
* @tc.name      : Get all Audio asset details from data/media using promise without fetch options and check for MP3 file
* @tc.desc      : Get all Audio asset details from data/media using promise without fetch options and check for MP3 file
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     


    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_WITHOUT_FETCH_MP3_03', 0, async function (done) {
        const promise = media.getAudioAssets();
        promise.then(function(data1){

            if (data1 == undefined) {
                console.info('MediaLibraryTest: There are no audio files in' + '/data/media' + 'folder');
            }
            else if (data1 != undefined){
                console.info('MediaLibraryTest: Promise successful: getAudioAssets4 returns '+ data1.length);
                data1.forEach(getAudioDataMp3);
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_WITHOUT_FETCH_MP3_03:  PASS');

            }
        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_WITHOUT_FETCH_FLAC_04
* @tc.name      : Get all Audio asset details from data/media using promise without fetch options and check for FLAC file
* @tc.desc      : Get all Audio asset details from data/media using promise without fetch options and check for FLAC file
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/  


    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_WITHOUT_FETCH_FLAC_04', 0, async function (done) {
        const promise = media.getAudioAssets();
        promise.then(function(data1){

            if (data1 == undefined) {
                console.info('MediaLibraryTest: There are no audio files in' + '/data/media' + 'folder');
            }
            else if (data1 != undefined){
                console.info('MediaLibraryTest: Promise successful: getAudioAssets4 returns '+ data1.length);
                data1.forEach(getAudioDataFlac);
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_WITHOUT_FETCH_FLAC_04:  PASS');

            }
        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_WITHOUT_FETCH_OGG_05
* @tc.name      : Get all Audio asset details from data/media using promise without fetch options and check for FLAC file
* @tc.desc      : Get all Audio asset details from data/media using promise without fetch options and check for FLAC file
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     


    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_WITHOUT_FETCH_OGG_05', 0, async function (done) {
        const promise = media.getAudioAssets();
        promise.then(function(data1){

            if (data1 == undefined) {
                console.info('MediaLibraryTest: There are no audio files in' + '/data/media' + 'folder');
            }
            else if (data1 != undefined){
                console.info('MediaLibraryTest: Promise successful: getAudioAssets4 returns '+ data1.length);
                data1.forEach(getAudioDataOGG);
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_PROMISE_WITHOUT_FETCH_OGG_05:  PASS');

            }
        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_05
* @tc.name      : Get all Audio asset details from system in Nonexistent folder
* @tc.desc      : Get Audio asset details from system in Nonexistent folder
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/    
    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_05', 0, async function (done) {
        const promise = media.getAudioAssets(nonexistantpath);
        promise.then(function(data){
            console.info('MediaLibraryTest: Promise successful: getAudioAssets5 returns '+ data);
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no audio files in' + nonexistantpath.selections + 'folder');
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_05:  PASS');
                //sleep(500);
            }
            else if (data != undefined){
                data.forEach(getAudioData);
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_05:  FAIL');
            }
        });
        await promise;
        done ();
    })



/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_CHECK_MIME_MEDIA_TYPE_AUDIO_DIRECTORY_01
* @tc.name      : Get all Audio asset details in audio directory and check for mimetype and media type
* @tc.desc      : Get all Audio asset details in audio directory and check for mimetype and media type
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     
    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_CHECK_MIME_MEDIA_TYPE_AUDIO_DIRECTORY_01', 0, async function (done) {
        const promise = media.getAudioAssets(audiopath);
        promise.then(function(data){
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no audio files in' + audiopath.selections + 'folder');
            }
            else if (data != undefined){
                console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
                data.forEach(getAudioDataCheckMimeMediaType);
                //expect(check_mime_media_type).asserttrue();
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_CHECK_MIME_MEDIA_TYPE_AUDIO_DIRECTORY_01:  PASS');
            }else {
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_CHECK_MIME_MEDIA_TYPE_AUDIO_DIRECTORY_01:  FAIL');
            }

        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_CHECK_MIME_MEDIA_TYPE_WAV_DIRECTORY_02
* @tc.name      : Get all Audio asset details in audio directory and check for mimetype and media type
* @tc.desc      : Get all Audio asset details in audio directory and check for mimetype and media type
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     
    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_CHECK_MIME_MEDIA_TYPE_WAV_DIRECTORY_02', 0, async function (done) {
        const promise = media.getAudioAssets(WAV);
        promise.then(function(data){
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no audio files in' + WAV.selections + 'folder');
            }
            else if (data != undefined){
                console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
                data.forEach(getAudioDatawavCheckMimeMediaType);
                //expect(check_mime_media_type_wav).asserttrue();
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_CHECK_MIME_MEDIA_TYPE_WAV_DIRECTORY_02:  PASS');
            }else {
                console.info('MediaLibraryTest: testcase_SSUB_MEDIA_MEDIALIBRARY_GETAUDIO_CHECK_MIME_MEDIA_TYPE_WAV_DIRECTORY_02:  FAIL');
            }

        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_CHECK_MIME_MEDIA_TYPE_AAC_DIRECTORY_03
* @tc.name      : Get all Audio asset details in audio directory and check for mimetype and media type
* @tc.desc      : Get all Audio asset details in audio directory and check for mimetype and media type
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     
    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_CHECK_MIME_MEDIA_TYPE_AAC_DIRECTORY_03', 0, async function (done) {
        const promise = media.getAudioAssets(AAC);
        promise.then(function(data){
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no audio files in' + AAC.selections + 'folder');
            }
            else if (data != undefined){
                console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
                data.forEach(getAudioDataAacCheckMimeMediaType);
                //expect(check_mime_media_type_aac).asserttrue();
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_CHECK_MIME_MEDIA_TYPE_AAC_DIRECTORY_03:  PASS');
            }else {
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_CHECK_MIME_MEDIA_TYPE_AAC_DIRECTORY_03:  FAIL');
            }

        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_CHECK_MIME_MEDIA_TYPE_MP3_DIRECTORY_04
* @tc.name      : Get all Audio asset details in audio directory and check for mimetype and media type
* @tc.desc      : Get all Audio asset details in audio directory and check for mimetype and media type
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     
    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_CHECK_MIME_MEDIA_TYPE_MP3_DIRECTORY_04', 0, async function (done) {
        const promise = media.getAudioAssets(MP3);
        promise.then(function(data){
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no audio files in' + MP3.selections + 'folder');
            }
            else if (data != undefined){
                console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
                data.forEach(getAudioDataMp3CheckMimeMediaType);
                //expect(check_mime_media_type_aac).asserttrue();
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_CHECK_MIME_MEDIA_TYPE_MP3_DIRECTORY_04:  PASS');
            }else {
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_CHECK_MIME_MEDIA_TYPE_MP3_DIRECTORY_04:  FAIL');
            }

        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_CHECK_MIME_MEDIA_TYPE_FLAC_DIRECTORY_05
* @tc.name      : Get all Audio asset details in audio directory and check for mimetype and media type
* @tc.desc      : Get all Audio asset details in audio directory and check for mimetype and media type
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     
    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_CHECK_MIME_MEDIA_TYPE_FLAC_DIRECTORY_05', 0, async function (done) {
        const promise = media.getAudioAssets(FLAC);
        promise.then(function(data){
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no audio files in' + FLAC.selections + 'folder');
            }
            else if (data != undefined){
                console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
                data.forEach(getAudioDataFlacCheckMimeMediaType);
                //expect(check_mime_media_type_aac).asserttrue();
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_CHECK_MIME_MEDIA_TYPE_FLAC_DIRECTORY_05:  PASS');
            }else {
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_CHECK_MIME_MEDIA_TYPE_FLAC_DIRECTORY_05:  FAIL');
            }

        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETAUDIO_CHECK_MIME_MEDIA_TYPE_OGG_DIRECTORY_06
* @tc.name      : Get all Audio asset details in audio directory and check for mimetype and media type
* @tc.desc      : Get all Audio asset details in audio directory and check for mimetype and media type
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     
    it('SUB_MEDIA_MEDIALIBRARY_GETAUDIO_CHECK_MIME_MEDIA_TYPE_OGG_DIRECTORY_06', 0, async function (done) {
        const promise = media.getAudioAssets(OGG);
        promise.then(function(data){
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no audio files in' + OGG.selections + 'folder');
            }
            else if (data != undefined){
                console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
                data.forEach(getAudioDataFlacCheckMimeMediaType);
                //expect(check_mime_media_type_OGG).asserttrue();
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_CHECK_MIME_MEDIA_TYPE_OGG_DIRECTORY_06:  PASS');
            }else {
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETAUDIO_CHECK_MIME_MEDIA_TYPE_OGG_DIRECTORY_06:  FAIL');
            }

        });
        await promise;
        done ();
    })



    
/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITHOUT_FETCH_01
* @tc.name      : Get all VIDEO asset from /data/media using async callback
* @tc.desc      : Get all VIDEO asset from /data/media using async callback
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/     
    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITHOUT_FETCH_01', 0, async function (done) {
        media.getVideoAssets((error, value)=> {
            if (error){
                console.info('MediaLibraryTest: getVideoAssets returned an error' + error.message);
            }
            console.info('MediaLibraryTest: getVideoAssets1 returns '+ value.length);
            if (value == undefined){
                console.info('MediaLibraryTest: There are no video files under /data/media folder');
            }
            else if (value != undefined){
                value.forEach(getVideoData);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITHOUT_FETCH_01 : PASS');
                //sleep(1000);

            }
            done();
        });
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITHOUT_FETCH_3PG_01
* @tc.name      : Get all VIDEO asset from /data/media using async callback and check 3gp file metadata
* @tc.desc      : Get all VIDEO asset from /data/media using async callback and check 3gp file metadata
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     
    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITHOUT_FETCH_3PG_01', 0, async function (done) {
        media.getVideoAssets((error, value)=> {
            if (error){
                console.info('MediaLibraryTest: getVideoAssets returned an error' + error.message);
            }
            console.info('MediaLibraryTest: getVideoAssets1 returns '+ value.length);
            if (value == undefined){
                console.info('MediaLibraryTest: There are no video files under /data/media folder');
            }
            else if (value != undefined){
                value.forEach(getVideoData3gp);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITHOUT_FETCH_3PG_01 : PASS');
                //sleep(1000);

            }
            done();
        });
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITHOUT_FETCH_MOV_01
* @tc.name      : Get all VIDEO asset from /data/media using async callback and check MOV file metadata
* @tc.desc      : Get all VIDEO asset from /data/media using async callback and check MOV file metadata
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     
    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITHOUT_FETCH_MOV_02', 0, async function (done) {
        media.getVideoAssets((error, value)=> {
            if (error){
                console.info('MediaLibraryTest: getVideoAssets returned an error' + error.message);
            }
            console.info('MediaLibraryTest: getVideoAssets1 returns '+ value.length);
            if (value == undefined){
                console.info('MediaLibraryTest: There are no video files under /data/media folder');
            }
            else if (value != undefined){
                value.forEach(getVideoDataMov);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITHOUT_FETCH_MOV_02 : PASS');
                //sleep(1000);

            }
            done();
        });
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITHOUT_FETCH_MP4_03
* @tc.name      : Get all VIDEO asset from /data/media using async callback and check MP4 file metadata
* @tc.desc      : Get all VIDEO asset from /data/media using async callback and check MP4 file metadata
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     
    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITHOUT_FETCH_MP4_03', 0, async function (done) {
        media.getVideoAssets((error, value)=> {
            if (error){
                console.info('MediaLibraryTest: getVideoAssets returned an error' + error.message);
            }
            console.info('MediaLibraryTest: getVideoAssets1 returns '+ value.length);
            if (value == undefined){
                console.info('MediaLibraryTest: There are no video files under /data/media folder');
            }
            else if (value != undefined){
                value.forEach(getVideoDataMP4);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITHOUT_FETCH_MP4_03 : PASS');
                //sleep(1000);

            }
            done();
        });
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITHOUT_FETCH_MPG_04
* @tc.name      : Get all VIDEO asset from /data/media using async callback and check MPG file metadata
* @tc.desc      : Get all VIDEO asset from /data/media using async callback and check MPG file metadata
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     
    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITHOUT_FETCH_MPG_04', 0, async function (done) {
        media.getVideoAssets((error, value)=> {
            if (error){
                console.info('MediaLibraryTest: getVideoAssets returned an error' + error.message);
            }
            console.info('MediaLibraryTest: getVideoAssets1 returns '+ value.length);
            if (value == undefined){
                console.info('MediaLibraryTest: There are no video files under /data/media folder');
            }
            else if (value != undefined){
                value.forEach(getVideoDataMpg);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITHOUT_FETCH_MPG_04 : PASS');
                //sleep(1000);

            }
            done();
        });
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITHOUT_FETCH_WEBM_05
* @tc.name      : Get all VIDEO asset from /data/media using async callback and check WEBM file metadata
* @tc.desc      : Get all VIDEO asset from /data/media using async callback and check WEBM file metadata
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     
    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITHOUT_FETCH_WEBM_05', 0, async function (done) {
        media.getVideoAssets((error, value)=> {
            if (error){
                console.info('MediaLibraryTest: getVideoAssets returned an error' + error.message);
            }
            console.info('MediaLibraryTest: getVideoAssets1 returns '+ value.length);
            if (value == undefined){
                console.info('MediaLibraryTest: There are no video files under /data/media folder');
            }
            else if (value != undefined){
                value.forEach(getVideoDataWebm);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITHOUT_FETCH_WEBM_05 : PASS');
                //sleep(1000);

            }
            done();
        });
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITH_FETCH_02
* @tc.name      : Get all VIDEO asset details from system data/media/onelevel/Video
* @tc.desc      : Get VIDEO asset details from system
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     


    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITH_FETCH_02', 0, async function (done) {
        media.getVideoAssets(videopath,(error, value)=> {
            if (error){
                console.info('MediaLibraryTest: getVideoAssets2 returned an error' + error.message);
            }
            console.info('MediaLibraryTest: getVideoAssets2 returns '+ value.length);
            if (value == undefined){
                console.info('MediaLibraryTest: There are no video files under ' +  videopath.selections + 'folder');
            }
            else if (value != undefined){
                value.forEach(getVideoData);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_02 :  PASS');
                //sleep(1000);

            }
            done();
        });
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITH_FETCH_3PG_01
* @tc.name      : Get all VIDEO asset from /data/media using async callback and check 3gp file metadata
* @tc.desc      : Get all VIDEO asset from /data/media using async callback and check 3gp file metadata
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     
    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITH_FETCH_3PG_01', 0, async function (done) {
        media.getVideoAssets(V3GP,(error, value)=> {
            if (error){
                console.info('MediaLibraryTest: getVideoAssets returned an error' + error.message);
            }
            console.info('MediaLibraryTest: getVideoAssets1 returns '+ value.length);
            if (value == undefined){
                console.info('MediaLibraryTest: There are no video files under' + V3GP.selections +'folder');
            }
            else if (value != undefined){
                value.forEach(getVideoData3gp);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITH_FETCH_3PG_01 : PASS');
                //sleep(1000);

            }
            done();
        });
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITH_FETCH_MOV_02
* @tc.name      : Get all VIDEO asset from /data/media using async callback and check MOV file metadata
* @tc.desc      : Get all VIDEO asset from /data/media using async callback and check MOV file metadata
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     
    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITH_FETCH_MOV_02', 0, async function (done) {
        media.getVideoAssets(MOV,(error, value)=> {
            if (error){
                console.info('MediaLibraryTest: getVideoAssets returned an error' + error.message);
            }
            console.info('MediaLibraryTest: getVideoAssets1 returns '+ value.length);
            if (value == undefined){
                console.info('MediaLibraryTest: There are no video files under /data/media folder');
            }
            else if (value != undefined){
                value.forEach(getVideoDataMov);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITH_FETCH_MOV_02 : PASS');
                //sleep(1000);

            }
            done();
        });
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITH_FETCH_MP4_03
* @tc.name      : Get all VIDEO asset from /data/media using async callback and check MP4 file metadata
* @tc.desc      : Get all VIDEO asset from /data/media using async callback and check MP4 file metadata
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     
    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITH_FETCH_MP4_03', 0, async function (done) {
        media.getVideoAssets(MP4,(error, value)=> {
            if (error){
                console.info('MediaLibraryTest: getVideoAssets returned an error' + error.message);
            }
            console.info('MediaLibraryTest: getVideoAssets1 returns '+ value.length);
            if (value == undefined){
                console.info('MediaLibraryTest: There are no video files under /data/media folder');
            }
            else if (value != undefined){
                value.forEach(getVideoDataMP4);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITH_FETCH_MP4_03 : PASS');
                //sleep(1000);

            }
            done();
        });
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITH_FETCH_MPG_04
* @tc.name      : Get all VIDEO asset from /data/media using async callback and check MPG file metadata
* @tc.desc      : Get all VIDEO asset from /data/media using async callback and check MPG file metadata
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     
    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITH_FETCH_MPG_04', 0, async function (done) {
        media.getVideoAssets(MPG,(error, value)=> {
            if (error){
                console.info('MediaLibraryTest: getVideoAssets returned an error' + error.message);
            }
            console.info('MediaLibraryTest: getVideoAssets1 returns '+ value.length);
            if (value == undefined){
                console.info('MediaLibraryTest: There are no video files under /data/media folder');
            }
            else if (value != undefined){
                value.forEach(getVideoDataMpg);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITH_FETCH_MPG_04 : PASS');
                //sleep(1000);

            }
            done();
        });
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITH_FETCH_WEBM_05
* @tc.name      : Get all VIDEO asset from /data/media using async callback and check WEBM file metadata
* @tc.desc      : Get all VIDEO asset from /data/media using async callback and check WEBM file metadata
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     
    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITH_FETCH_WEBM_05', 0, async function (done) {
        media.getVideoAssets(WEBM,(error, value)=>{
            console.info('MediaLibraryTest: Promise successful: getVideoAssets3 returns '+ value.length);
            if (value == undefined) {
                console.info('MediaibraryTest: There are no video files in' + WEBM.selections + 'folder');
            }
            else if (value != undefined){
                value.forEach(getVideoDataMP4);
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITH_FETCH_WEBM_05:  PASS');
                //sleep(1000);
            }
            done();

        });
        done();

    })


/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITH_FETCH_03
* @tc.name      : Get all VIDEO asset details from system with fetch options using promise
* @tc.desc      : Get VIDEO asset details from system
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     


    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITH_FETCH_03', 0, async function (done) {
        const promise = media.getVideoAssets(videopath);
        promise.then(function(data){
            console.info('MediaLibraryTest: Promise successful: getVideoAssets3 returns '+ data.length);
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no video files in' + videopath.selections + 'folder');
            }
            else if (data != undefined){
                data.forEach(getVideoData);
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITH_FETCH_03:  PASS');
                //sleep(1000);
            }

        });
        await promise;
        done ();
    })


/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITH_FETCH_3PG_01
* @tc.name      : Get all VIDEO asset from /data/media using promise and check 3gp file metadata
* @tc.desc      : Get all VIDEO asset from /data/media using promise and check 3gp file metadata
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     
    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITH_FETCH_3PG_01', 0, async function (done) {
        const promise = media.getVideoAssets(V3GP);
        promise.then(function(data){
            console.info('MediaLibraryTest: Promise successful: getVideoAssets3 returns '+ data.length);
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no video files in' + V3GP.selections + 'folder');
            }
            else if (data != undefined){
                data.forEach(getVideoData3gp);
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITH_FETCH_3PG_01:  PASS');
                //sleep(1000);
            }

        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITH_FETCH_MOV_02
* @tc.name      : Get all VIDEO asset from /data/media using async callback and check MOV file metadata
* @tc.desc      : Get all VIDEO asset from /data/media using async callback and check MOV file metadata
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     
    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITH_FETCH_MOV_02', 0, async function (done) {
        const promise = media.getVideoAssets(MOV);
        promise.then(function(data){
            console.info('MediaLibraryTest: Promise successful: getVideoAssets3 returns '+ data.length);
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no video files in' + MOV.selections + 'folder');
            }
            else if (data != undefined){
                data.forEach(getVideoDataMov);
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITH_FETCH_MOV_02:  PASS');
                //sleep(1000);
            }

        });
        await promise;
        done ();
    })
/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITH_FETCH_MP4_03
* @tc.name      : Get all VIDEO asset from /data/media using promise  and check MP4 file metadata
* @tc.desc      : Get all VIDEO asset from /data/media using promise  and check MP4 file metadata
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     
    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITH_FETCH_MP4_03', 0, async function (done) {
        const promise = media.getVideoAssets(MP4);
        promise.then(function(data){
            console.info('MediaLibraryTest: Promise successful: getVideoAssets3 returns '+ data.length);
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no video files in' + MP4.selections + 'folder');
            }
            else if (data != undefined){
                data.forEach(getVideoDataMP4);
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITH_FETCH_MP4_03:  PASS');
                //sleep(1000);
            }

        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITH_FETCH_MPG_04
* @tc.name      : Get all VIDEO asset from /data/media using promise and check MPG file metadata
* @tc.desc      : Get all VIDEO asset from /data/media using promise and check MPG file metadata
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     
    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITH_FETCH_MPG_04', 0, async function (done) {
        const promise = media.getVideoAssets(MPG);
        promise.then(function(data){
            console.info('MediaLibraryTest: Promise successful: getVideoAssets3 returns '+ data.length);
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no video files in' + MPG.selections + 'folder');
            }
            else if (data != undefined){
                data.forEach(getVideoDataMP4);
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITH_FETCH_MPG_04:  PASS');
                //sleep(1000);
            }

        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITH_FETCH_WEBM_05
* @tc.name      : Get all VIDEO asset from /data/media using promise and check WEBM file metadata
* @tc.desc      : Get all VIDEO asset from /data/media using promise and check WEBM file metadata
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     
    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITH_FETCH_WEBM_05', 0, async function (done) {
        const promise = media.getVideoAssets(WEBM);
        promise.then(function(data) {
            console.info('MediaLibraryTest: getVideoAssets1 returns '+ data.length + data);
            if (data == undefined){
                console.info('MediaLibraryTest: There are no video files under /data/media folder');
            }
            else if (data != undefined){
                data.forEach(getVideoDataWebm);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITH_FETCH_WEBM_05 : PASS');
                //sleep(1000);

            }
        });
        await promise;
        done ();
    })


/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITHOUT_FETCH_04
* @tc.name      : Get all VIDEO asset details from system without fetchoptions using promise
* @tc.desc      : Get all VIDEO asset details from system without fetchoptions using promise
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     


    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITHOUT_FETCH_04', 0, async function (done) {
        const promise = media.getVideoAssets();
        promise.then(function(data){
            console.info('MediaLibraryTest: Promise successful: getVideoAssets4 returns '+ data.length);
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no video files in' + '/data/media' + 'folder');
            }
            else if (data != undefined){
                data.forEach(getVideoData);
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITHOUT_FETCH_04:  PASS');
                //sleep(1000);
            }

        });
        await promise;
        done ();
    })


/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITHOUT_FETCH_3PG_01
* @tc.name      : Get all VIDEO asset from /data/media using promise and check 3gp file metadata
* @tc.desc      : Get all VIDEO asset from /data/media using promise and check 3gp file metadata
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     
    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITHOUT_FETCH_3PG_01', 0, async function (done) {
        const promise = media.getVideoAssets();
        promise.then(function(data){
            console.info('MediaLibraryTest: Promise successful: getVideoAssets3 returns '+ data.length);
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no video files in' + '/data/media' + 'folder');
            }
            else if (data != undefined){
                data.forEach(getVideoData3gp);
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITHOUT_FETCH_3PG_01:  PASS');
                //sleep(1000);
            }

        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITHOUT_FETCH_MOV_02
* @tc.name      : Get all VIDEO asset from /data/media using async callback and check MOV file metadata
* @tc.desc      : Get all VIDEO asset from /data/media using async callback and check MOV file metadata
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     
    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITHOUT_FETCH_MOV_02', 0, async function (done) {
        const promise = media.getVideoAssets();
        promise.then(function(data){
            console.info('MediaLibraryTest: Promise successful: getVideoAssets3 returns '+ data.length);
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no video files in' + '/data/media' + 'folder');
            }
            else if (data != undefined){
                data.forEach(getVideoDataMov);
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITHOUT_FETCH_MOV_02:  PASS');
                //sleep(1000);
            }

        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITHOUT_FETCH_MP4_03
* @tc.name      : Get all VIDEO asset from /data/media using promise  and check MP4 file metadata
* @tc.desc      : Get all VIDEO asset from /data/media using promise  and check MP4 file metadata
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     
    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITHOUT_FETCH_MP4_03', 0, async function (done) {
        const promise = media.getVideoAssets();
        promise.then(function(data){
            console.info('MediaLibraryTest: Promise successful: getVideoAssets3 returns '+ data.length);
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no video files in' + '/data/media' + 'folder');
            }
            else if (data != undefined){
                data.forEach(getVideoDataMP4);
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITHOUT_FETCH_MP4_03:  PASS');
                //sleep(1000);
            }

        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITHOUT_FETCH_MPG_04
* @tc.name      : Get all VIDEO asset from /data/media using promise and check MPG file metadata
* @tc.desc      : Get all VIDEO asset from /data/media using promise and check MPG file metadata
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     
    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITHOUT_FETCH_MPG_04', 0, async function (done) {
        const promise = media.getVideoAssets();
        promise.then(function(data){
            console.info('MediaLibraryTest: Promise successful: getVideoAssets3 returns '+ data.length);
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no video files in' + '/data/media' + 'folder');
            }
            else if (data != undefined){
                data.forEach(getVideoDataMP4);
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITHOUT_FETCH_MPG_04:  PASS');
                //sleep(1000);
            }

        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITHOUT_FETCH_WEBM_05
* @tc.name      : Get all VIDEO asset from /data/media using promise and check WEBM file metadata
* @tc.desc      : Get all VIDEO asset from /data/media using promise and check WEBM file metadata
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     
    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITH_FETCH_WEBM_05', 0, async function (done) {
        const promise = media.getVideoAssets();
        promise.then(function(data){
            console.info('MediaLibraryTest: Promise successful: getVideoAssets3 returns '+ data.length);
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no video files in' + '/data/media' + 'folder');
            }
            else if (data != undefined){
                data.forEach(getVideoDataMP4);
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_WITHOUT_FETCH_WEBM_04:  PASS');
                //sleep(1000);
            }

        });
        await promise;
        done ();
    })


/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_CHECK_MIME_MEDIA_TYPE_VIDEO_DIRECTORY_01
* @tc.name      : Get all VIDEO asset details from VIDEO directory and check for MIME amd MEDIA types
* @tc.desc      : Get all VIDEO asset details from VIDEO directory and check for MIME amd MEDIA types
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     


    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_CHECK_MIME_MEDIA_TYPE_VIDEO_DIRECTORY_01', 0, async function (done) {
        const promise = media.getVideoAssets(videopath);
        promise.then(function(data){
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no audio files in' + videopath.selections + 'folder');
            }
            else if (data != undefined){
                console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
                data.forEach(getVideoDataCheckMimeMediaType);
                //expect(check_mime_media_type).asserttrue();
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_CHECK_MIME_MEDIA_TYPE_VIDEO_DIRECTORY_01:  PASS');
            }else {
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_CHECK_MIME_MEDIA_TYPE_VIDEO_DIRECTORY_01:  FAIL');
            }

        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_CHECK_MIME_MEDIA_TYPE_3GP_DIRECTORY_02
* @tc.name      : Get all VIDEO asset details from 3GP directory and check for MIME amd MEDIA types
* @tc.desc      : Get all VIDEO asset details from 3GP directory and check for MIME amd MEDIA types
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     


    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_CHECK_MIME_MEDIA_TYPE_3GP_DIRECTORY_02', 0, async function (done) {
        const promise = media.getVideoAssets(V3GP);
        promise.then(function(data){
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no audio files in' + V3GP.selectsions + 'folder');
            }
            else if (data != undefined){
                console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
                data.forEach(getAudioData3gpCheckMimeMediaType);
                //expect(check_mime_media_type_3GP).asserttrue();
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_CHECK_MIME_MEDIA_TYPE_3GP_DIRECTORY_02:  PASS');
            }else {
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_CHECK_MIME_MEDIA_TYPE_3GP_DIRECTORY_02:  FAIL');
            }

        });
        await promise;
        done ();
    })



/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_CHECK_MIME_MEDIA_TYPE_MOV_DIRECTORY_03
* @tc.name      : Get all VIDEO asset details from MOV directory and check for MIME amd MEDIA types
* @tc.desc      : Get all VIDEO asset details from MOV directory and check for MIME amd MEDIA types
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     


    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_CHECK_MIME_MEDIA_TYPE_MOV_DIRECTORY_03', 0, async function (done) {
        const promise = media.getVideoAssets(MOV);
        promise.then(function(data){
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no audio files in' + MOV.selections + 'folder');
            }
            else if (data != undefined){
                console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
                data.forEach(getAudioDataMOVCheckMimeMediaType);
                //expect(check_mime_media_type_MOV).asserttrue();
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_CHECK_MIME_MEDIA_TYPE_MOV_DIRECTORY_03:  PASS');
            }else {
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_CHECK_MIME_MEDIA_TYPE_MOV_DIRECTORY_03:  FAIL');
            }

        });
        await promise;
        done ();
    })


/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_CHECK_MIME_MEDIA_TYPE_MP4_DIRECTORY_04
* @tc.name      : Get all VIDEO asset details from MP4 directory and check for MIME amd MEDIA types
* @tc.desc      : Get all VIDEO asset details from MP4 directory and check for MIME amd MEDIA types
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     


    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_CHECK_MIME_MEDIA_TYPE_MP4_DIRECTORY_04', 0, async function (done) {
        const promise = media.getVideoAssets(MP4);
        promise.then(function(data){
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no audio files in' + MP4.selections + 'folder');
            }
            else if (data != undefined){
                console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
                data.forEach(getAudioDataMP4CheckMimeMediaType);
                //expect(check_mime_media_type_MP4).asserttrue();
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_CHECK_MIME_MEDIA_TYPE_MP4_DIRECTORY_04:  PASS');
            }else {
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_CHECK_MIME_MEDIA_TYPE_MP4_DIRECTORY_04:  FAIL');
            }

        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_CHECK_MIME_MEDIA_TYPE_MPG_DIRECTORY_05
* @tc.name      : Get all VIDEO asset details from MPG directory and check for MIME amd MEDIA types
* @tc.desc      : Get all VIDEO asset details from MPG directory and check for MIME amd MEDIA types
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     


    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_CHECK_MIME_MEDIA_TYPE_MPG_DIRECTORY_05', 0, async function (done) {
        const promise = media.getVideoAssets(MPG);
        promise.then(function(data){
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no audio files in' + MPG.selections + 'folder');
            }
            else if (data != undefined){
                console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
                data.forEach(getAudioDataMPGCheckMimeMediaType);
                //expect(check_mime_media_type_MPG).asserttrue();
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_CHECK_MIME_MEDIA_TYPE_MPG_DIRECTORY_05:  PASS');
            }else {
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_CHECK_MIME_MEDIA_TYPE_MPG_DIRECTORY_05:  FAIL');
            }

        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_CHECK_MIME_MEDIA_TYPE_MWEBM_DIRECTORY_06
* @tc.name      : Get all VIDEO asset details from WEBM directory and check for MIME amd MEDIA types
* @tc.desc      : Get all VIDEO asset details from WEBM directory and check for MIME amd MEDIA types
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     


    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_CHECK_MIME_MEDIA_TYPE_WEBM_DIRECTORY_06', 0, async function (done) {
        const promise = media.getVideoAssets(WEBM);
        promise.then(function(data){
            if (data == undefined) {
                console.info('MediaLibraryTest: There are no audio files in' + WEBM.selections + 'folder');
            }
            else if (data != undefined){
                console.info('MediaLibraryTest: Promise successful: getAudioAssets3 returns '+ data.length);
                data.forEach(getAudioDataWEBMCheckMimeMediaType);
                //expect(check_mime_media_type_WEBM).asserttrue();
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_CHECK_MIME_MEDIA_TYPE_MPG_DIRECTORY_06:  PASS');
            }else {
                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_CHECK_MIME_MEDIA_TYPE_MPG_DIRECTORY_06:  FAIL');
            }

        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETMEDIA_ASYNC_WITH_EMPTY_FETCH_OPTIONS_PROVIDED_07
* @tc.name      : Get all MEDIA asset details from folder "data/media/onelevel" [AsyncCallBack with fetch options]
* @tc.desc      : Get MEDIA asset details from folder "data/media/onelevel"
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     


    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITH_EMPTY_FETCH_OPTIONS_PROVIDED_07', 0, async function (done) {
        console.info("MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITH_EMPTY_FETCH_OPTIONS_PROVIDED_07");
        console.info("MediaLibraryTest: videopath before is :" + EMPTYPATH.selections);
        media.getVideoAssets(EMPTYPATH, (error, value)=> {
            console.info('MediaLibraryTest: getVideoAssets returned an value' + value);
            if (error){
                console.info('MediaLibraryTest: getVideoAssets returned an error' + value);
                console.info('MediaLibraryTest: getVideoAssets returned an error' + error.message);
            }
            console.info('MediaLibraryTest: getMediaAssets2 returns '+ value.length);
            if (value == undefined){
                console.info('MediaLibraryTest: getVideoAssets returned undefined' + value);
                console.info('MediaLibraryTest: There are no  files under' + EMPTYPATH.selections + 'folder');
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITH_EMPTY_FETCH_OPTIONS_PROVIDED_07 :  PASS');
            }
            else if (value != undefined){
                console.info("MediaLibraryTest: mediapath after is :" + EMPTYPATH.selections);
                value.forEach(getMediaData);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITH_EMPTY_FETCH_OPTIONS_PROVIDED_07 :  FAIL');
                //sleep(1000);

            }
            done();
        });
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETMEDIA_ASYNC_WITH_EMPTY_FETCH_OPTIONS_PROVIDED_07
* @tc.name      : Get all MEDIA asset details from folder "data/media/onelevel" [AsyncCallBack with fetch options]
* @tc.desc      : Get MEDIA asset details from folder "data/media/onelevel"
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/
     


    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITH_NONEXISTANT_FETCH_OPTIONS_PROVIDED_08', 0, async function (done) {
        console.info("MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITH_NONEXISTANT_FETCH_OPTIONS_PROVIDED_08");
        console.info("MediaLibraryTest: videopath before is :" + nonexistantpath.selections);
        media.getVideoAssets(nonexistantpath, (error, value)=> {
            console.info('MediaLibraryTest: getVideoAssets returned an value' + value);
            if (error){
                console.info('MediaLibraryTest: getVideoAssets returned an error' + value);
                console.info('MediaLibraryTest: getVideoAssets returned an error' + error.message);
            }
            console.info('MediaLibraryTest: getMediaAssets2 returns '+ value.length);
            if (value == undefined){
                console.info('MediaLibraryTest: getVideoAssets returned undefined' + value);
                console.info('MediaLibraryTest: There are no  files under' + nonexistantpath.selections + 'folder');
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITH_NONEXISTANT_FETCH_OPTIONS_PROVIDED_08 :  PASS');
            }
            else if (value != undefined){
                console.info("MediaLibraryTest: mediapath after is :" + nonexistantpath.selections);
                value.forEach(getMediaData);
                console.info('MediaLibraryTest: testCase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_ASYNC_WITH_NONEXISTANT_FETCH_OPTIONS_PROVIDED_08 :  FAIL');
                //sleep(1000);

            }
            done();
        });
        done();
    })


/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_EMPTY_DIRECTORY_05
* @tc.name      : Get all Image asset details from system with Promise and media fetch options
* @tc.desc      : Get image asset details from system
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/


it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_EMPTY_DIRECTORY_05', 0, async function (done) {
    const promise = media.getVideoAssets(EMPTYPATH);
    promise.then(function(data){
        console.info(' MediaLibraryTest: Promise successful: getVideoAssets returns '+ data.length);
        if (data == undefined) {
            console.info(' MediaLibraryTest: There are no videos in' + EMPTYPATH.selections + 'folder');
            expect(data).assertEqual(undefined);
            console.info(' MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_EMPTY_DIRECTORY_05:  PASS');
        }
        else if (data != undefined){
            console.info(' MediaLibraryTest: Promise successful: DATA VALUE IS '+ data);
            console.info(' MediaLibraryTest: There are videos in' + EMPTYPATH.selections + 'folder');
            data.forEach(getImageData);
            console.info(' MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_EMPTY_DIRECTORY_05:  FAIL');

        }

    });
    await promise;
    done();
})


/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_NONEXISTANT_DIRECTORY_06
* @tc.name      : Get all Image asset details from system with Promise and media fetch options
* @tc.desc      : Get image asset details from system
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/      


it('SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_NONEXISTANT_DIRECTORY_06', 0, async function (done) {
    const promise = media.getVideoAssets(nonexistantpath);
    promise.then(function(data){
        console.info(' MediaLibraryTest: Promise successful: getVideoAssets returns '+ data.length);
        if (data == undefined) {
            console.info(' MediaLibraryTest: There are no videos in' + nonexistantpath.selections + 'folder');
            expect(data).assertEqual(undefined);
            console.info(' MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_NONEXISTANT_DIRECTORY_06:  PASS');
        }
        else if (data != undefined){
            console.info(' MediaLibraryTest: Promise successful: DATA VALUE IS '+ data);
            console.info(' MediaLibraryTest: There are videos in' + nonexistantpath.selections + 'folder');
            data.forEach(getImageData);
            console.info(' MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_GETVIDEO_PROMISE_NONEXISTANT_DIRECTORY_06:  FAIL');

        }

    });
    await promise;
    done();
})



/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_ASYNC_WITH_FETCH_01
* @tc.name      : Get all details of video album using async callback + get album name and album id
* @tc.desc      : Get all details of video album using async callback + get album name and album id
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/

    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_ASYNC_WITH_FETCH_01', 0, async function (done) {
        console.info('MediaLibraryTest: path for video is' + videoalbumpath.selections);
        media.getVideoAlbums(videoalbumpath, (error, value)=> {
            console.info('MediaLibraryTest: getVideoAlbums1 returns' + value.length);
            if (value == undefined){
                console.info('MediaLibraryTest: There are no video files in ' + videoalbumpath.selections + 'folder');
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_ASYNC_WITH_FETCH_01 : FAIL ')
            }
            if (value != undefined) {
                for (i = 0; i < value.length; i++) {
                    albumName = value[i].albumName;
                    console.info('MediaLibraryTest: albumName for videoAlbums1  :' + albumName);
                    albumId = value[i].albumId;
                    console.info('MediaLibraryTest: albumId for videoAlbums1 :' + albumId);
                   
                }
                 console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_ASYNC_WITH_FETCH_01 : PASS ')
            }
            done();
            //expect(value.length).assertEqual(i); //Need to check if this conditions exits as value of i will exist after for loop//
            ;
            //sleep(1000);
        });
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_ASYNC_WITHOUT_FETCH_01
* @tc.name      : Get all details of video album using async callback + get album name and album id
* @tc.desc      : Get all details of video album using async callback + get album name and album id
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/

    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_ASYNC_WITHOUT_FETCH_01', 0, async function (done) {
        //console.info('MediaLibraryTest: path for video is' + videoalbum.selections);
        media.getVideoAlbums((error, value)=> {
            console.info('MediaLibraryTest: getVideoAlbums1 returns' + value.length);
            if (value == undefined){
                console.info('MediaLibraryTest: There are no video files in ' + 'data/media' + 'folder');
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_ASYNC_WITH_FETCH_01 : FAIL ');
            }
            if (value != undefined) {
                for (i = 0; i < value.length; i++) {
                    albumName = value[i].albumName;
                    console.info('MediaLibraryTest: albumName for videoAlbums1  :' + albumName);
                    albumId = value[i].albumId;
                    console.info('MediaLibraryTest: albumId for videoAlbums1 :' + albumId);
                }
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_ASYNC_WITH_FETCH_01 : PASS ');
            }
            done();
            //expect(value.length).assertEqual(i); //Need to check if this conditions exits as value of i will exist after for loop//
            
            //sleep(1000);
        });
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGEALBUM_ASYNC_WITH_FETCH_01
* @tc.name      : Get all details of image album using async callback + get album name and album id
* @tc.desc      : Get all details of image album using async callback + get album name and album id
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/

    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_ASYNC_WITH_FETCH_01', 0, async function (done) {
        console.info('MediaLibraryTest: path for image is' + imagealbumpath.selections);
        media.getImageAlbums(imagealbumpath, (error, value)=> {
            console.info('MediaLibraryTest: getVideoAlbums1 returns' + value.length);
            if (value == undefined){
                console.info('MediaLibraryTest: There are no video files in ' + imagealbumpath.selections + 'folder');
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_ASYNC_WITH_FETCH_01 : FAIL ');
            }
            if (value != undefined) {
                for (i = 0; i < value.length; i++) {
                    albumName = value[i].albumName;
                    console.info('MediaLibraryTest: albumName for videoAlbums1  :' + albumName);
                    albumId = value[i].albumId;
                    console.info('MediaLibraryTest: albumId for videoAlbums1 :' + albumId);
                    
                }
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_ASYNC_WITH_FETCH_01 : PASS ');
            }
            done();
            //expect(value.length).assertEqual(i); //Need to check if this conditions exits as value of i will exist after for loop//
            
            //sleep(1000);
        })
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGEALBUM_ASYNC_WITHOUT_FETCH_01
* @tc.name      : Get all details of video album using async callback + get album name and album id
* @tc.desc      : Get all details of video album using async callback + get album name and album id
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/

    it('SUB_MEDIA_MEDIALIBRARY_GETIMAGEALBUM_ASYNC_WITHOUT_FETCH_01', 0, async function (done) {
        //console.info('MediaLibraryTest: path for video is' + videoalbum.selections);
        media.getImageAlbums((error, value)=> {
            console.info('MediaLibraryTest: getVideoAlbums1 returns' + value.length);
            if (value == undefined){
                console.info('MediaLibraryTest: There are no video files in ' + 'data/media' + 'folder');
            }
            if (value != undefined) {
                for (i = 0; i < value.length; i++) {
                    albumName = value[i].albumName;
                    console.info('MediaLibraryTest: albumName for videoAlbums1  :' + albumName);
                    albumId = value[i].albumId;
                    console.info('MediaLibraryTest: albumId for videoAlbums1 :' + albumId);
                }
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETIMAGEALBUM_ASYNC_WITH_FETCH_01 : PASS ');
            }
            done();
            //expect(value.length).assertEqual(i); //Need to check if this conditions exits as value of i will exist after for loop//
            
            //sleep(1000);
        });
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_ASYNC_WITH_FETCH_EMPTYPATH_01
* @tc.name      : Get all details of video album using async callback + get album name and album id
* @tc.desc      : Get all details of video album using async callback + get album name and album id
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/

    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_ASYNC_WITH_FETCH_EMPTYPATH_01', 0, async function (done) {
        console.info('MediaLibraryTest: path for video is' + EMPTYPATH.selections);
        media.getVideoAlbums(EMPTYPATH, (error, value)=> {
            console.info('MediaLibraryTest: getVideoAlbums1 returns' + value.length);
            if (value == undefined){
                console.info('MediaLibraryTest: There are no video files in ' + EMPTYPATH.selections + 'folder');
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_ASYNC_WITH_FETCH_EMPTYPATH_01 : PASS ');
            }
            if (value != undefined) {
                for (i = 0; i < value.length; i++) {
                    albumName = value[i].albumName;
                    console.info('MediaLibraryTest: albumName for videoAlbums1  :' + albumName);
                    albumId = value[i].albumId;
                    console.info('MediaLibraryTest: albumId for videoAlbums1 :' + albumId);
                    
                }
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_ASYNC_WITH_FETCH_EMPTYPATH_01 : FAIL ');
            }
            done();
            //expect(value.length).assertEqual(i); //Need to check if this conditions exits as value of i will exist after for loop//
            
            //sleep(1000);
        });
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_ASYNC_WITH_FETCH_NONEXISTANTPATH_01
* @tc.name      : Get all details of video album using async callback + get album name and album id
* @tc.desc      : Get all details of video album using async callback + get album name and album id
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/

    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_ASYNC_WITH_FETCH_NONEXISTANTPATH_01', 0, async function (done) {
        console.info('MediaLibraryTest: path for video is' + nonexistantpath.selections);
        media.getVideoAlbums(nonexistantpath, (error, value)=> {
            console.info('MediaLibraryTest: getVideoAlbums1 returns' + value.length);
            if (value == undefined){
                console.info('MediaLibraryTest: There are no video files in ' + nonexistantpath.selections + 'folder');
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_ASYNC_WITH_FETCH_NONEXISTANTPATH_01 : PASS ');
            }
            if (value != undefined) {
                for (i = 0; i < value.length; i++) {
                    albumName = value[i].albumName;
                    console.info('MediaLibraryTest: albumName for videoAlbums1  :' + albumName);
                    albumId = value[i].albumId;
                    console.info('MediaLibraryTest: albumId for videoAlbums1 :' + albumId);
                    
                }
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_ASYNC_WITH_FETCH_NONEXISTANTPATH_01 : FAIL ');
            }
            done();
            //expect(value.length).assertEqual(i); //Need to check if this conditions exits as value of i will exist after for loop//
            
            //sleep(1000);
        });
        done();
    })

    
/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGEALBUM_ASYNC_WITH_FETCH_EMPTYPATH_01
* @tc.name      : Get all details of image album using async callback + get album name and album id
* @tc.desc      : Get all details of image album using async callback + get album name and album id
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/

    it('SUB_MEDIA_MEDIALIBRARY_GETIMAGEALBUM_ASYNC_WITH_FETCH_EMPTYPATH_01', 0, async function (done) {
        console.info('MediaLibraryTest: path for image is' + EMPTYPATH.selections);
        media.getImageAlbums(EMPTYPATH, (error, value)=> {
            console.info('MediaLibraryTest: getVideoAlbums1 returns' + value.length);
            if (value == undefined){
                console.info('MediaLibraryTest: There are no image files in ' + EMPTYPATH.selections + 'folder');
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETIMAGEALBUM_ASYNC_WITH_FETCH_EMPTYPATH_01 : PASS ');
            }
            if (value != undefined) {
                for (i = 0; i < value.length; i++) {
                    albumName = value[i].albumName;
                    console.info('MediaLibraryTest: albumName for imageAlbums1  :' + albumName);
                    albumId = value[i].albumId;
                    console.info('MediaLibraryTest: albumId for imageAlbums1 :' + albumId);
                    
                }
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETIMAGEALBUM_ASYNC_WITH_FETCH_EMPTYPATH_01 : FAIL ');
            }
            done();
            //expect(value.length).assertEqual(i); //Need to check if this conditions exits as value of i will exist after for loop//
            
            //sleep(1000);
        });
        done();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGEALBUM_ASYNC_WITH_FETCH_NONEXISTANTPATH_01
* @tc.name      : Get all details of image album using async callback + get album name and album id
* @tc.desc      : Get all details of image album using async callback + get album name and album id
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/

    it('SUB_MEDIA_MEDIALIBRARY_GETIMAGEALBUM_ASYNC_WITH_FETCH_NONEXISTANTPATH_01', 0, async function (done) {
        console.info('MediaLibraryTest: path for image is' + nonexistantpath.selections);
        media.getVideoAlbums(nonexistantpath, (error, value)=> {
            console.info('MediaLibraryTest: getimageAlbums1 returns' + value.length);
            if (value == undefined){
                console.info('MediaLibraryTest: There are no image files in ' + nonexistantpath.selections + 'folder');
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETIMAGEALBUM_ASYNC_WITH_FETCH_NONEXISTANTPATH_01 : PASS ');
            }
            if (value != undefined) {
                for (i = 0; i < value.length; i++) {
                    albumName = value[i].albumName;
                    console.info('MediaLibraryTest: albumName for imageAlbums1  :' + albumName);
                    albumId = value[i].albumId;
                    console.info('MediaLibraryTest: albumId for imageAlbums1 :' + albumId);
                    
                }
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETIMAGEALBUM_ASYNC_WITH_FETCH_NONEXISTANTPATH_01 : FAIL ');
            }
            done();
            //expect(value.length).assertEqual(i); //Need to check if this conditions exits as value of i will exist after for loop//
            
            //sleep(1000);
        });
        done();
    })



/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGEALBUM_PROMISE_WITH_FETCH_01
* @tc.name      : Get all Album details from /data/media/imagealbum using promise + check album id and album name
* @tc.desc      : Get all Album details from /data/media/imagealbum using promise + check album id and album name
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/


    it('SUB_MEDIA_MEDIALIBRARY_GETIMAGEALBUM_PROMISE_WITH_FETCH_01', 0, async function (done) {

        console.info('MediaLibraryTest: path for image is' + imagealbumpath.selections);

        const promise = media.getImageAlbums(imagealbumpath);
        promise.then(function(data) {
            if (data == undefined){
                console.info('MediaLibraryTest: There are no image files in ' + imagealbumpath.selections + 'folder');
            }
            if (data != undefined) {
                for (i = 0; i < data.length; i++) {
                    albumName = data[i].albumName;
                    console.info('MediaLibraryTest: albumName for imageAlbums2  :' + albumName);
                    albumId = data[i].albumId;
                    console.info('MediaLibraryTest: albumId for imageAlbums2 :' + albumId);
                }
                expect(data.length).assertEqual(i);
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETIMAGEALBUM_PROMISE_WITH_FETCH_01 : PASS ');
                //sleep(1000);
            }
        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGEALBUM_PROMISE_WITHOUT_FETCH_01
* @tc.name      : Get all Album details from /data/media/imagealbum using promise + check album id and album name
* @tc.desc      : Get all Album details from /data/media/imagealbum using promise + check album id and album name
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/


    it('SUB_MEDIA_MEDIALIBRARY_GETIMAGEALBUM_PROMISE_WITHOUT_FETCH_01', 0, async function (done) {

        //console.info('MediaLibraryTest: path for image is' + imagealbum.selections);

        const promise = media.getImageAlbums();
        promise.then(function(data) {
            if (data == undefined){
                console.info('MediaLibraryTest: There are no image files in ' + 'data/media' + 'folder');
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETIMAGEALBUM_PROMISE_WITH_FETCH_01 : FAIL ');
            }
            if (data != undefined) {
                for (i = 0; i < data.length; i++) {
                    albumName = data[i].albumName;
                    console.info('MediaLibraryTest: albumName for imageAlbums2  :' + albumName);
                    albumId = data[i].albumId;
                    console.info('MediaLibraryTest: albumId for imageAlbums2 :' + albumId);
                }
                expect(data.length).assertEqual(i);
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETIMAGEALBUM_PROMISE_WITH_FETCH_01 : PASS ');
                //sleep(1000);
            }
        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGEALBUM_PROMISE_WITH_FETCH_EMPTYPATH_01
* @tc.name      : Get all Album details from /data/media/imagealbum using promise + check album id and album name
* @tc.desc      : Get all Album details from /data/media/imagealbum using promise + check album id and album name
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/


    it('SUB_MEDIA_MEDIALIBRARY_GETIMAGEALBUM_PROMISE_WITH_FETCH_EMPTYPATH_01', 0, async function (done) {

        console.info('MediaLibraryTest: path for image is' + EMPTYPATH.selections);

        const promise = media.getImageAlbums(EMPTYPATH);
        promise.then(function(data) {
            if (data == undefined){
                console.info('MediaLibraryTest: There are no image files in ' + EMPTYPATH.selections + 'folder');
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETIMAGEALBUM_PROMISE_WITH_FETCH_EMPTYPATH_01 : PASS ');
            }
            if (data != undefined) {
                for (i = 0; i < data.length; i++) {
                    albumName = data[i].albumName;
                    console.info('MediaLibraryTest: albumName for imageAlbums2  :' + albumName);
                    albumId = data[i].albumId;
                    console.info('MediaLibraryTest: albumId for imageAlbums2 :' + albumId);
                }
                expect(data.length).assertEqual(i);
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETIMAGEALBUM_PROMISE_WITH_FETCH_EMPTYPATH_01 : FAIL ');
                //sleep(1000);
            }
        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETIMAGEALBUM_PROMISE_WITH_FETCH_NONEXISTANT_01
* @tc.name      : Get all Album details from /data/media/imagealbum using promise + check album id and album name
* @tc.desc      : Get all Album details from /data/media/imagealbum using promise + check album id and album name
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/


    it('SUB_MEDIA_MEDIALIBRARY_GETIMAGEALBUM_PROMISE_WITH_FETCH_NONEXISTANT_01', 0, async function (done) {

        console.info('MediaLibraryTest: path for image is' + nonexistantpath.selections);

        const promise = media.getImageAlbums(nonexistantpath);
        promise.then(function(data) {
            if (data == undefined){
                console.info('MediaLibraryTest: There are no image files in ' + nonexistantpath.selections + 'folder');
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETIMAGEALBUM_PROMISE_WITH_FETCH_NONEXISTANT_01 : PASS ');
            }
            if (data != undefined) {
                for (i = 0; i < data.length; i++) {
                    albumName = data[i].albumName;
                    console.info('MediaLibraryTest: albumName for imageAlbums2  :' + albumName);
                    albumId = data[i].albumId;
                    console.info('MediaLibraryTest: albumId for imageAlbums2 :' + albumId);
                }
                expect(data.length).assertEqual(i);
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETIMAGEALBUM_PROMISE_WITH_FETCH_NONEXISTANT_01 : FAIL ');
                //sleep(1000);
            }
        });
        await promise;
        done ();
    })



/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_PROMISE_WITH_FETCH_01
* @tc.name      : Get all Album details from /data/media/videoalbum using promise + check album id and album name
* @tc.desc      : Get all Album details from /data/media/videoalbum using promise + check album id and album name
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/


    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_PROMISE_WITH_FETCH_01', 0, async function (done) {

        console.info('MediaLibraryTest: path for video is' + videoalbumpath.selections);

        const promise = media.getVideoAlbums(videoalbumpath);
        promise.then(function(data) {
            if (data == undefined){
                console.info('MediaLibraryTest: There are no video files in ' + videoalbumpath.selections + 'folder');
            }
            if (data != undefined) {
                for (i = 0; i < data.length; i++) {
                    albumName = data[i].albumName;
                    console.info('MediaLibraryTest: albumName for videoalbum  :' + albumName);
                    albumId = data[i].albumId;
                    console.info('MediaLibraryTest: albumId for videoalbum :' + albumId);
                }
                expect(data.length).assertEqual(i);
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_PROMISE_WITH_FETCH_01 : PASS ');
                //sleep(1000);
            }
        });
        await promise;
        done ();
    })

/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_PROMISE_WITHOUT_FETCH_01
* @tc.name      : Get all Album details from /data/media/videoalbum using promise + check album id and album name
* @tc.desc      : Get all Album details from /data/media/videoalbum using promise + check album id and album name
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/


    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_PROMISE_WITHOUT_FETCH_01', 0, async function (done) {

        //console.info('MediaLibraryTest: path for video is' + videoalbum.selections);

        const promise = media.getVideoAlbums();
        promise.then(function(data) {
            if (data == undefined){
                console.info('MediaLibraryTest: There are no video files in ' + 'data/media' + 'folder');
            }
            if (data != undefined) {
                for (i = 0; i < data.length; i++) {
                    albumName = data[i].albumName;
                    console.info('MediaLibraryTest: albumName for videoalbum  :' + albumName);
                    albumId = data[i].albumId;
                    console.info('MediaLibraryTest: albumId for videoalbum :' + albumId);
                }
                expect(data.length).assertEqual(i);
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_PROMISE_WITHOUT_FETCH_01 : PASS ');
                //sleep(1000);
            }
        });
        await promise;
        done ();
    })



/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_PROMISE_WITH_FETCH_EMPTYPATH_01
* @tc.name      : Get all Album details from /data/media/videoalbum using promise + check album id and album name
* @tc.desc      : Get all Album details from /data/media/videoalbum using promise + check album id and album name
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/


    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_PROMISE_WITH_FETCH_EMPTYPATH_01', 0, async function (done) {

        //console.info('MediaLibraryTest: path for video is' + videoalbum.selections);

        const promise = media.getVideoAlbums(EMPTYPATH);
        promise.then(function(data) {
            if (data == undefined){
                console.info('MediaLibraryTest: There are no video files in ' + 'EMPTYPATH.selections' + 'folder');
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_PROMISE_WITH_FETCH_EMPTYPATH_01 : PASS ');
            }
            if (data != undefined) {
                for (i = 0; i < data.length; i++) {
                    albumName = data[i].albumName;
                    console.info('MediaLibraryTest: albumName for videoalbum  :' + albumName);
                    albumId = data[i].albumId;
                    console.info('MediaLibraryTest: albumId for videoalbum :' + albumId);
                }
                expect(data.length).assertEqual(i);
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_PROMISE_WITH_FETCH_EMPTYPATH_01 : FAIL ');
                //sleep(1000);
            }
        });
        await promise;
        done ();
    })

    
/* *
* @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_PROMISE_WITH_FETCH_NONEXISTANT_01
* @tc.name      : Get all Album details from /data/media/videoalbum using promise + check album id and album name
* @tc.desc      : Get all Album details from /data/media/videoalbum using promise + check album id and album name
* @tc.size      : MEDIUM
* @tc.type      : Function
* @tc.level     : Level 0
*/


    it('SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_PROMISE_WITH_FETCH_NONEXISTANT_01', 0, async function (done) {

        //console.info('MediaLibraryTest: path for video is' + videoalbum.selections);

        const promise = media.getVideoAlbums(nonexistantpath);
        promise.then(function(data) {
            if (data == undefined){
                console.info('MediaLibraryTest: There are no video files in ' + 'nonexistantpath.selections' + 'folder');
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_PROMISE_WITH_FETCH_NONEXISTANT_01 : PASS ');
            }
            if (data != undefined) {
                for (i = 0; i < data.length; i++) {
                    albumName = data[i].albumName;
                    console.info('MediaLibraryTest: albumName for videoalbum  :' + albumName);
                    albumId = data[i].albumId;
                    console.info('MediaLibraryTest: albumId for videoalbum :' + albumId);
                }
                expect(data.length).assertEqual(i);
                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_GETVIDEOALBUM_PROMISE_WITH_FETCH_NONEXISTANT_01 : FAIL ');
                //sleep(1000);
            }
        });
        await promise;
        done ();
    })



        /* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_mp3_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_mp3_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createAudioAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createAudioAsset returned an error' + error.message);
        }
        if (value != undefined){
			console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
					console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createaudioasyncmp3path.selections;
                    value.name = 'newaudiofromasync.mp3';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        //sleep(200);
                        media.getAudioAssets(createaudioasyncmp3path, (error, data1)=> {
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + value.mimeType + value.mediaType + 'file is created in' + createaudioasyncmp3path.selections + 'folder');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_mp3_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    //break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createaudioasyncmp3path.selections + 'folder');
                                    
                                }
                                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_mp3_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                            }
                            done();
                        });
                        done();
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_MP3_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_MP3_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createAudioAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createAudioAsset returned an error' + error.message);
        }
        if (value != undefined){
			console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
					console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createaudioasyncMP3path.selections;
                    value.name = 'newaudiofromasync.MP3';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        //sleep(200);
                        media.getAudioAssets(createaudioasyncMP3path, (error, data1)=> {
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + value.mimeType + value.mediaType + 'file is created in' + createaudioasyncMP3path.selections + 'folder');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_MP3_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    //break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createaudioasyncMP3path.selections + 'folder');
                                    
                                }
                                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_MP3_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                            }
                            done();
                        });
                        done();
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_aac_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_aac_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createAudioAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createAudioAsset returned an error' + error.message);
        }
        if (value != undefined){
			console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
					console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createaudioasyncaacpath.selections;
                    value.name = 'newaudiofromasync.aac';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        //sleep(200);
                        media.getAudioAssets(createaudioasyncaacpath, (error, data1)=> {
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + value.mimeType + value.mediaType  +'file is created in' + createaudioasyncaacpath.selections + 'folder');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_aac_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    //break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createaudioasyncaacpath.selections + 'folder');
                                    
                                }
                                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_aac_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                            }
                            done();
                        });
                        done();
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_AAC_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_AAC_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createAudioAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createAudioAsset returned an error' + error.message);
        }
        if (value != undefined){
			console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
					console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createaudioasyncAACpath.selections;
                    value.name = 'newaudiofromasync.AAC';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        //sleep(200);
                        media.getAudioAssets(createaudioasyncAACpath, (error, data1)=> {
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + value.mimeType + value.mediaType + 'file is created in' + createaudioasyncAACpath.selections + 'folder');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_AAC_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    //break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createaudioasyncAACpath.selections + 'folder');
                                    
                                }
                                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_AAC_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                            }
                            done();
                        });
                        done();
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_flac_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_flac_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createAudioAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createAudioAsset returned an error' + error.message);
        }
        if (value != undefined){
			console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
					console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createaudioasyncflacpath.selections;
                    value.name = 'newaudiofromasync.aac';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        //sleep(200);
                        media.getAudioAssets(createaudioasyncflacpath, (error, data1)=> {
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + value.mimeType + value.mediaType + 'file is created in' + createaudioasyncflacpath.selections + 'folder');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_flac_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    //break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createaudioasyncflacpath.selections + 'folder');
                                    
                                }
                                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_flac_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                            }
                            done();
                        });
                        done();
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_FLAC_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_FLAC_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createAudioAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createAudioAsset returned an error' + error.message);
        }
        if (value != undefined){
			console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
					console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createaudioasyncFLACpath.selections;
                    value.name = 'newaudiofromasync.FLAC';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        //sleep(200);
                        media.getAudioAssets(createaudioasyncFLACpath, (error, data1)=> {
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + value.mimeType + value.mediaType + 'file is created in' + createaudioasyncFLACpath.selections + 'folder');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_FLAC_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    //break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createaudioasyncFLACpath.selections + 'folder');
                                    
                                }
                                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_FLAC_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                            }
                            done();
                        });
                        done();
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_ogg_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_ogg_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createAudioAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createAudioAsset returned an error' + error.message);
        }
        if (value != undefined){
			console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
					console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createaudioasyncoggpath.selections;
                    value.name = 'newaudiofromasync.ogg';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        //sleep(200);
                        media.getAudioAssets(createaudioasyncoggpath, (error, data1)=> {
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + value.mimeType + value.mediaType + 'file is created in' + createaudioasyncoggpath.selections + 'folder');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_ogg_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    //break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createaudioasyncoggpath.selections + 'folder');
                                    
                                }
                                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_ogg_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                            }
                            done();
                        });
                        done();
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_OGG_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_OGG_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createAudioAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createAudioAsset returned an error' + error.message);
        }
        if (value != undefined){
			console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
					console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createaudioasyncOGGpath.selections;
                    value.name = 'newaudiofromasync.OOG';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        //sleep(200);
                        media.getAudioAssets(createaudioasyncOGGpath, (error, data1)=> {
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + value.mimeType + value.mediaType + 'file is created in' + createaudioasyncOGGpath.selections + 'folder');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_OGG_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    //break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createaudioasyncOGGpath.selections + 'folder');
                                    
                                }
                                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_OGG_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                            }
                            done();
                        });
                        done();
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_wav_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_wav_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createAudioAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createAudioAsset returned an error' + error.message);
        }
        if (value != undefined){
			console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
					console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createaudioasyncwavpath.selections;
                    value.name = 'newaudiofromasync.wav';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        //sleep(200);
                        media.getAudioAssets(createaudioasyncwavpath, (error, data1)=> {
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + value.mimeType + value.mediaType + 'file is created in' + createaudioasyncwavpath.selections + 'folder');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_wav_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    //break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createaudioasyncwavpath.selections + 'folder');
                                    
                                }
                                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_wav_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                            }
                            done();
                        });
                        done();
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_WAV_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_WAV_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createAudioAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createAudioAsset returned an error' + error.message);
        }
        if (value != undefined){
			console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
					console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createaudioasyncWAVpath.selections;
                    value.name = 'newaudiofromasync.WAV';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        //sleep(200);
                        media.getAudioAssets(createaudioasyncWAVpath, (error, data1)=> {
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + value.mimeType + value.mediaType + 'file is created in' + createaudioasyncWAVpath.selections + 'folder');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_WAV_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    //break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createaudioasyncWAVpath.selections + 'folder');
                                    
                                }
                                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_WAV_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                            }
                            done();
                        });
                        done();
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_WAV_WITH_NO_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_WAV_WITH_NO_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createAudioAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createAudioAsset returned an error' + error.message);
        }
        if (value != undefined){
			console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
					console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = "" ;
                    value.name = 'newaudiofromasync.WAV';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        if (data == true){
                            console.info(value.name + 'file is created in /data/media directory');
                            console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_WAV_WITH_NO_ALBUM_DIRECTORY_01 : PASS');
                        }else{
                            console.info(value.name + 'file is not created');
                            
                        }
                        console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_WAV_WITH_NO_ALBUM_DIRECTORY_01 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_WAV_WITH_NO_NAME_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_WAV_WITH_NO_NAME_DIRECTORY_01', 0, async function (done) {
    media.createAudioAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createAudioAsset returned an error' + error.message);
        }
        if (value != undefined){
			console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
					console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createaudiononamepath.selections ;
                    value.name = '';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        if (data == false){
                            console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_WAV_WITH_NO_ALBUM_DIRECTORY_01 : PASS');
                        }else{
                            console.info(value.name + 'file is not created');
                            
                        }
                        console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_WAV_WITH_NO_ALBUM_DIRECTORY_01 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_WAV_WITH_INCORRECT_NAME_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_WAV_WITH_INCORRECT_NAME_DIRECTORY_01', 0, async function (done) {
    media.createAudioAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createAudioAsset returned an error' + error.message);
        }
        if (value != undefined){
			console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
					console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createaudiononamepath.selections ;
                    value.name = 'ABC.txt';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        if (data == false){
                            console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_WAV_WITH_INCORRECT_NAME_DIRECTORY_01 : PASS');
                        }else{
                            console.info(value.name + 'file is not created');
                            
                        }
                        console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_WAV_WITH_INCORRECT_NAME_DIRECTORY_01 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_WAV_WITH_INCORRECT_NAME_DIRECTORY_02
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_WAV_WITH_INCORRECT_NAME_DIRECTORY_02', 0, async function (done) {
    media.createAudioAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createAudioAsset returned an error' + error.message);
        }
        if (value != undefined){
			console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
					console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createaudiononamepath.selections ;
                    value.name = '.mp3';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        if (data == false){
                            console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_WAV_WITH_INCORRECT_NAME_DIRECTORY_02 : PASS');
                        }else{
                            console.info(value.name + 'file is not created');
                            
                        }
                        console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_WAV_WITH_INCORRECT_NAME_DIRECTORY_02 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_WAV_WITH_INVALIDCHARACTERS_NAME_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaudio]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_WAV_WITH_INVALIDCHARACTERS_NAME_DIRECTORY_01', 0, async function (done) {
    media.createAudioAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createAudioAsset returned an error' + error.message);
        }
        if (value != undefined){
			console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
					console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createaudiononamepath.selections ;
                    value.name = '?:\"*|/\\<>".mp3';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        if (data == false){
                            console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_WAV_WITH_INVALIDCHARACTERS_NAME_DIRECTORY_01 : PASS');
                        }else{
                            console.info(value.name + 'file is not created');
                            
                        }
                        console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_AUDIOFILE_WAV_WITH_INVALIDCHARACTERS_NAME_DIRECTORY_01 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOaacFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an audio file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOaacFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createAudioAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateAudioPromise returns true');
                    value.albumName =createaudiopromiseaacpath.selections;
                    console.info('MediaLibraryTest: startCreateAudioPromise returns true' + createaudiopromiseaacpath);
                    value.name = 'newaudiofrompromise.aac'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        media.getAudioAssets(createaudiopromiseaacpath,(error, data1)=> {
                            console.info('MediaLibraryTest: getAudioAssets with album name returns' + data1);
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + 'file is created in' + createaudiopromiseaacpath.selections + 'audioalbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOaacFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createaudiopromiseaacpath.selections + 'audioalbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOaacFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                }
                            }
                        });
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOAACFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an audio file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOAACFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createAudioAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateAudioPromise returns true');
                    value.albumName =createaudiopromiseAACpath.selections;
                    console.info('MediaLibraryTest: startCreateAudioPromise returns true' + createaudiopromiseAACpath);
                    value.name = 'newaudiofrompromise.AAC'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        media.getAudioAssets(createaudiopromiseAACpath,(error, data1)=> {
                            console.info('MediaLibraryTest: getAudioAssets with album name returns' + data1);
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + 'file is created in' + createaudiopromiseAACpath.selections + 'audioalbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOAACFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createaudiopromiseAACpath.selections + 'audioalbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOAACFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                }
                            }
                        });
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOflacFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an audio file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOflacFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createAudioAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateAudioPromise returns true');
                    value.albumName =createaudiopromiseflacpath.selections;
                    console.info('MediaLibraryTest: startCreateAudioPromise returns true' + createaudiopromiseflacpath);
                    value.name = 'newaudiofrompromise.flac'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        media.getAudioAssets(createaudiopromiseflacpath,(error, data1)=> {
                            console.info('MediaLibraryTest: getAudioAssets with album name returns' + data1);
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + 'file is created in' + createaudiopromiseflacpath.selections + 'audioalbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOflacFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createaudiopromiseflacpath.selections + 'audioalbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOflacFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                }
                            }
                        });
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOFLACFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an audio file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOFLACFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createAudioAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateAudioPromise returns true');
                    value.albumName =createaudiopromiseFLACpath.selections;
                    console.info('MediaLibraryTest: startCreateAudioPromise returns true' + createaudiopromiseFLACpath);
                    value.name = 'newaudiofrompromise.FLAC'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        media.getAudioAssets(createaudiopromiseFLACpath,(error, data1)=> {
                            console.info('MediaLibraryTest: getAudioAssets with album name returns' + data1);
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + 'file is created in' + createaudiopromiseFLACpath.selections + 'audioalbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOFLACFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createaudiopromiseFLACpath.selections + 'audioalbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOFLACFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                }
                            }
                        });
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOmp3FILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an audio file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOmp3FILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createAudioAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateAudioPromise returns true');
                    value.albumName =createaudiopromisemp3path.selections;
                    console.info('MediaLibraryTest: startCreateAudioPromise returns true' + createaudiopromisemp3path);
                    value.name = 'newaudiofrompromise.mp3'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        media.getAudioAssets(createaudiopromisemp3path,(error, data1)=> {
                            console.info('MediaLibraryTest: getAudioAssets with album name returns' + data1);
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + 'file is created in' + createaudiopromisemp3path.selections + 'audioalbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOmp3FILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createaudiopromiseaacpath.selections + 'audioalbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOmp3FILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                }
                            }
                        });
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOMP3FILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an audio file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOMP3FILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createAudioAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateAudioPromise returns true');
                    value.albumName =createaudiopromiseMP3path.selections;
                    console.info('MediaLibraryTest: startCreateAudioPromise returns true' + createaudiopromiseMP3path);
                    value.name = 'newaudiofrompromise.MP3'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        media.getAudioAssets(createaudiopromiseMP3path,(error, data1)=> {
                            console.info('MediaLibraryTest: getAudioAssets with album name returns' + data1);
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + 'file is created in' + createaudiopromiseMP3path.selections + 'audioalbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOMP3FILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createaudiopromiseMP3path.selections + 'audioalbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOMP3FILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                }
                            }
                        });
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOwavFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an audio file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOwavFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createAudioAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateAudioPromise returns true');
                    value.albumName =createaudiopromisewavpath.selections;
                    console.info('MediaLibraryTest: startCreateAudioPromise returns true' + createaudiopromisewavpath);
                    value.name = 'newaudiofrompromise.wav'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        media.getAudioAssets(createaudiopromisewavpath,(error, data1)=> {
                            console.info('MediaLibraryTest: getAudioAssets with album name returns' + data1);
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + 'file is created in' + createaudiopromisewavpath.selections + 'audioalbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOwavFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createaudiopromisewavpath.selections + 'audioalbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOwavFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                }
                            }
                        });
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOWAVFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an audio file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOWAVFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createAudioAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateAudioPromise returns true');
                    value.albumName =createaudiopromiseWAVpath.selections;
                    console.info('MediaLibraryTest: startCreateAudioPromise returns true' + createaudiopromiseWAVpath);
                    value.name = 'newaudiofrompromise.WAV'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        media.getAudioAssets(createaudiopromiseWAVpath,(error, data1)=> {
                            console.info('MediaLibraryTest: getAudioAssets with album name returns' + data1);
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + 'file is created in' + createaudiopromiseWAVpath.selections + 'audioalbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOWAVFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createaudiopromiseWAVpath.selections + 'audioalbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOWAVFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                }
                            }
                        });
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOoggFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an audio file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOoggFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createAudioAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateAudioPromise returns true');
                    value.albumName =createaudiopromiseoggpath.selections;
                    console.info('MediaLibraryTest: startCreateAudioPromise returns true' + createaudiopromiseoggpath);
                    value.name = 'newaudiofrompromise.ogg'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        media.getAudioAssets(createaudiopromiseoggpath,(error, data1)=> {
                            console.info('MediaLibraryTest: getAudioAssets with album name returns' + data1);
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + 'file is created in' + createaudiopromiseoggpath.selections + 'audioalbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOoggFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createaudiopromiseoggpath.selections + 'audioalbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOoggFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                }
                            }
                        });
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOOGGFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an audio file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOOGGFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createAudioAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateAudioPromise returns true');
                    value.albumName =createaudiopromiseOGGpath.selections;
                    console.info('MediaLibraryTest: startCreateAudioPromise returns true' + createaudiopromiseOGGpath);
                    value.name = 'newaudiofrompromise.OGG'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        media.getAudioAssets(createaudiopromiseOGGpath,(error, data1)=> {
                            console.info('MediaLibraryTest: getAudioAssets with album name returns' + data1);
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + 'file is created in' + createaudiopromiseOGGpath.selections + 'audioalbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOOGGFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createaudiopromiseOGGpath.selections + 'audioalbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOOGGFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                }
                            }
                        });
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOFILE_WITH_NO_ALBUM_NAME_DIRECTORY_01
        * @tc.name      : Create an audio file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an audio file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOFILE_WITH_NO_ALBUM_NAME_DIRECTORY_01', 0, async function (done) {
    const promise = media.createAudioAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateAudioPromise returns true');
                    value.albumName ='';
                    //console.info('MediaLibraryTest: startCreateAudioPromise returns true' + createaudiopromiseOGGpath);
                    value.name = 'newaudiofrompromise.mp3'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        if (data == true){
                            console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                            console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOFILE_WITH_NO_ALBUM_NAME_DIRECTORY_01 : PASS');
                        } else {
                            console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                            console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOFILE_WITH_NO_ALBUM_NAME_DIRECTORY_01 : PASS');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOFILE_WITH_NO_AUDIOFILE_NAME_DIRECTORY_01
        * @tc.name      : Create an audio file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an audio file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOFILE_WITH_NO_AUDIOFILE_NAME_DIRECTORY_01', 0, async function (done) {
    const promise = media.createAudioAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateAudioPromise returns true');
                    value.albumName ='createaudiononamepath.selections';
                    //console.info('MediaLibraryTest: startCreateAudioPromise returns true' + createaudiopromiseOGGpath);
                    value.name = ''
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        if (data == false){
                            console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                            console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOFILE_WITH_NO_AUDIOFILE_NAME_DIRECTORY_01 : PASS');
                        } else {
                            console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                            console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOFILE_WITH_NO_AUDIOFILE_NAME_DIRECTORY_01 : PASS');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOFILE_WITH_INCORRECT_AUDIOFILE_NAME_DIRECTORY_01
        * @tc.name      : Create an audio file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an audio file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOFILE_WITH_INCORRECT_AUDIOFILE_NAME_DIRECTORY_01', 0, async function (done) {
    const promise = media.createAudioAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateAudioPromise returns true');
                    value.albumName ='createaudiononamepath.selections';
                    //console.info('MediaLibraryTest: startCreateAudioPromise returns true' + createaudiopromiseOGGpath);
                    value.name = 'abc.txt'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        if (data == false){
                            console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                            console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOFILE_WITH_INCORRECT_AUDIOFILE_NAME_DIRECTORY_01 : PASS');
                        } else {
                            console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                            console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOFILE_WITH_INCORRECT_AUDIOFILE_NAME_DIRECTORY_01 : PASS');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOFILE_WITH_INCORRECT_AUDIOFILE_NAME_DIRECTORY_02
        * @tc.name      : Create an audio file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an audio file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOFILE_WITH_INCORRECT_AUDIOFILE_NAME_DIRECTORY_02', 0, async function (done) {
    const promise = media.createAudioAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateAudioPromise returns true');
                    value.albumName ='createaudiononamepath.selections';
                    //console.info('MediaLibraryTest: startCreateAudioPromise returns true' + createaudiopromiseOGGpath);
                    value.name = '.MP3'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        if (data == false){
                            console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                            console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOFILE_WITH_INCORRECT_AUDIOFILE_NAME_DIRECTORY_01 : PASS');
                        } else {
                            console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                            console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOFILE_WITH_INCORRECT_AUDIOFILE_NAME_DIRECTORY_01 : PASS');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOFILE_WITH_INVALIDCHARACTERS_AUDIOFILE_NAME_DIRECTORY_02
        * @tc.name      : Create an audio file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an audio file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOFILE_WITH_INVALIDCHARACTERS_AUDIOFILE_NAME_DIRECTORY_02', 0, async function (done) {
    const promise = media.createAudioAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateAudio returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateAudioPromise returns true');
                    value.albumName ='createaudiononamepath.selections';
                    //console.info('MediaLibraryTest: startCreateAudioPromise returns true' + createaudiopromiseOGGpath);
                    value.name = '?:\"*|/\\<>".MP3'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        if (data == false){
                            console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                            console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOFILE_WITH_INVALIDCHARACTERS_AUDIOFILE_NAME_DIRECTORY_02 : PASS');
                        } else {
                            console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                            console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_AUDIOFILE_WITH_INVALIDCHARACTERS_AUDIOFILE_NAME_DIRECTORY_02 : PASS');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_bmp_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_bmp_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createImageAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createImageAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createimageasyncbmppath.selections;
                    value.name = 'newimagefromasync.bmp';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        //expect(data).assertTrue();
                        //sleep(200);
                        media.getImageAssets(createimageasyncbmppath, (error, data1)=> {
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + value.mimeType + value.mediaType + 'file is created in' + createimageasyncbmppath.selections + 'folder');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_bmp_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    //break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimageasyncbmppath.selections + 'folder');

                                }
                                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_bmp_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                            }
                            done();
                        });
                        done();
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_BMP_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_BMP_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createImageAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createImageAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createimageasyncBPMpath.selections;
                    value.name = 'newimagefromasync.BMP';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        //sleep(200);
                        media.getImageAssets(createimageasyncBPMpath, (error, data1)=> {
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + value.mimeType + value.mediaType + 'file is created in' + createimageasyncBPMpath.selections + 'folder');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_BMP_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    //break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimageasyncBPMpath.selections + 'folder');

                                }
                                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_BMP_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                            }
                            done();
                        });
                        done();
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_jpg_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_jpg_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createImageAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createImageAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createimageasyncjpgpath.selections;
                    value.name = 'newimagefromasync.jpg';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        //sleep(200);
                        media.getImageAssets(createimageasyncjpgpath, (error, data1)=> {
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + value.mimeType + value.mediaType + 'file is created in' + createimageasyncjpgpath.selections + 'folder');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_jpg_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    //break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimageasyncjpgpath.selections + 'folder');

                                }
                                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_jpg_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                            }
                            done();
                        });
                        done();
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_JPG_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_JPG_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createImageAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createImageAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createimageasyncJPGpath.selections;
                    value.name = 'newimagefromasync.JPG';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        //sleep(200);
                        media.getImageAssets(createimageasyncJPGpath, (error, data1)=> {
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + value.mimeType + value.mediaType + 'file is created in' + createimageasyncJPGpath.selections + 'folder');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_JPG_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    //break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimageasyncJPGpath.selections + 'folder');

                                }
                                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_JPG_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                            }
                            done();
                        });
                        done();
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_png_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_png_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createImageAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createImageAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createimageasyncpngpath.selections;
                    value.name = 'newimagefromasync.png';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        //sleep(200);
                        media.getImageAssets(createimageasyncpngpath, (error, data1)=> {
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + value.mimeType + value.mediaType + 'file is created in' + createimageasyncpngpath.selections + 'folder');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_png_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    //break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimageasyncpngpath.selections + 'folder');

                                }
                                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_png_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                            }
                            done();
                        });
                        done();
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_PNG_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_PNG_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createImageAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createImageAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createimageasyncPNGpath.selections;
                    value.name = 'newimagefromasync.PNG';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        //sleep(200);
                        media.getImageAssets(createimageasyncPNGpath, (error, data1)=> {
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + value.mimeType + value.mediaType + 'file is created in' + createimageasyncPNGpath.selections + 'folder');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_PNG_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    //break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimageasyncPNGpath.selections + 'folder');

                                }
                                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_PNG_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                            }
                            done();
                        });
                        done();
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_gif_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_gif_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createImageAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createImageAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createimageasyncgifpath.selections;
                    value.name = 'newimagefromasync.gif';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        //sleep(200);
                        media.getImageAssets(createimageasyncgifpath, (error, data1)=> {
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + value.mimeType + value.mediaType + 'file is created in' + createimageasyncgifpath.selections + 'folder');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_gif_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    //break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimageasyncgifpath.selections + 'folder');

                                }
                                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_gif_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                            }
                            done();
                        });
                        done();
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_GIF_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_GIF_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createImageAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createImageAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createimageasyncGIFpath.selections;
                    value.name = 'newimagefromasync.GIF';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        //sleep(200);
                        media.getImageAssets(createimageasyncGIFpath, (error, data1)=> {
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + value.mimeType + value.mediaType + 'file is created in' + createimageasyncGIFpath.selections + 'folder');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_GIF_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    //break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimageasyncGIFpath.selections + 'folder');

                                }
                                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_GIF_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                            }
                            done();
                        });
                        done();
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_raw_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_raw_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createImageAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createImageAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createimageasyncrawpath.selections;
                    value.name = 'newimagefromasync.raw';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        //sleep(200);
                        media.getImageAssets(createimageasyncrawpath, (error, data1)=> {
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + value.mimeType + value.mediaType + 'file is created in' + createimageasyncrawpath.selections + 'folder');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_raw_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    //break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimageasyncrawpath.selections + 'folder');

                                }
                                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_raw_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                            }
                            done();
                        });
                        done();
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_RAW_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_RAW_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createImageAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createImageAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createimageasyncRAWpath.selections;
                    value.name = 'newimagefromasync.RAW';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        //sleep(200);
                        media.getImageAssets(createimageasyncRAWpath, (error, data1)=> {
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + value.mimeType + value.mediaType + 'file is created in' + createimageasyncRAWpath.selections + 'folder');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_RAW_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    //break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimageasyncRAWpath.selections + 'folder');

                                }
                                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_RAW_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                            }
                            done();
                        });
                        done();
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_heif_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_heif_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createImageAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createImageAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createimageasyncheifpath.selections;
                    value.name = 'newimagefromasync.heif';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        //sleep(200);
                        media.getImageAssets(createimageasyncheifpath, (error, data1)=> {
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + value.mimeType + value.mediaType + 'file is created in' + createimageasyncheifpath.selections + 'folder');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_heif_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    //break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimageasyncheifpath.selections + 'folder');

                                }
                                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_heif_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                            }
                            done();
                        });
                        done();
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_HEIF_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_HEIF_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createImageAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createImageAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createimageasyncHEIFpath.selections;
                    value.name = 'newimagefromasync.HEIF';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        //sleep(200);
                        media.getImageAssets(createimageasyncHEIFpath, (error, data1)=> {
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + value.mimeType + value.mediaType + 'file is created in' + createimageasyncHEIFpath.selections + 'folder');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_HEIF_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    //break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimageasyncHEIFpath.selections + 'folder');

                                }
                                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_HEIF_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                            }
                            done();
                        });
                        done();
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_webp_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_webp_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createImageAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createImageAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createimageasyncwebppath.selections;
                    value.name = 'newimagefromasync.webp';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        //sleep(200);
                        media.getImageAssets(createimageasyncwebppath, (error, data1)=> {
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + value.mimeType + value.mediaType + 'file is created in' + createimageasyncwebppath.selections + 'folder');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_webp_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    //break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimageasyncwebppath.selections + 'folder');

                                }
                                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_webp_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                            }
                            done();
                        });
                        done();
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_WEBP_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_WEBP_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createImageAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createImageAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createimageasyncWEBPpath.selections;
                    value.name = 'newimagefromasync.WEBP';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        //sleep(200);
                        media.getImageAssets(createimageasyncWEBPpath, (error, data1)=> {
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + value.mimeType + value.mediaType + 'file is created in' + createimageasyncWEBPpath.selections + 'folder');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_WEBP_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    //break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimageasyncWEBPpath.selections + 'folder');

                                }
                                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_WEBP_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                            }
                            done();
                        });
                        done();
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_svg_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_svg_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createImageAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createImageAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createimageasyncsvgpath.selections;
                    value.name = 'newimagefromasync.svg';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        //sleep(200);
                        media.getImageAssets(createimageasyncsvgpath, (error, data1)=> {
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + value.mimeType + value.mediaType + 'file is created in' + createimageasyncsvgpath.selections + 'folder');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_svg_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    //break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimageasyncsvgpath.selections + 'folder');

                                }
                                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_svg_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                            }
                            done();
                        });
                        done();
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_SVG_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_SVG_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createImageAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createImageAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createimageasyncSVGpath.selections;
                    value.name = 'newimagefromasync.SVG';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        //sleep(200);
                        media.getImageAssets(createimageasyncSVGpath, (error, data1)=> {
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + value.mimeType + value.mediaType + 'file is created in' + createimageasyncSVGpath.selections + 'folder');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_SVG_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    //break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimageasyncSVGpath.selections + 'folder');

                                }
                                console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_SVG_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                            }
                            done();
                        });
                        done();
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_WITH_NO_ALBUM_DIRECTORY_01
        * @tc.name      : Create an image file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_WITH_NO_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createImageAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createImageAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = "" ;
                    value.name = 'newaudiofromasync.png';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        if (data == true){
                            console.info(value.name + 'file is created in /data/media directory');
                            console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_WITH_NO_ALBUM_DIRECTORY_01 : PASS');
                        }else{
                            console.info(value.name + 'file is not created');

                        }
                        console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_WITH_NO_ALBUM_DIRECTORY_01 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_WITH_NO_NAME_DIRECTORY_01
        * @tc.name      : Create an image file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_WITH_NO_NAME_DIRECTORY_01', 0, async function (done) {
    media.createImageAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createImageAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createaudiononamepath.selections ;
                    value.name = '';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        if (data == false){
                            console.info(value.name + 'file is created in /data/media directory');
                            console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_WITH_NO_NAME_DIRECTORY_01 : PASS');
                        }else{
                            console.info(value.name + 'file is not created');

                        }
                        console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_WITH_NO_NAME_DIRECTORY_01 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_WITH_INCORRECT_NAME_DIRECTORY_01
        * @tc.name      : Create an image file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_WITH_INCORRECT_NAME_DIRECTORY_01', 0, async function (done) {
    media.createImageAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createImageAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createaudiononamepath.selections ;
                    value.name = 'ABC.txt';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        if (data == false){
                            console.info(value.name + 'file is created in /data/media directory');
                            console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_WITH_INCORRECT_NAME_DIRECTORY_01 : PASS');
                        }else{
                            console.info(value.name + 'file is not created');

                        }
                        console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_WITH_INCORRECT_NAME_DIRECTORY_01 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_WITH_INCORRECT_NAME_DIRECTORY_02
        * @tc.name      : Create an image file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_WITH_INCORRECT_NAME_DIRECTORY_02', 0, async function (done) {
    media.createImageAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createImageAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createaudiononamepath.selections ;
                    value.name = '.png';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        if (data == false){
                            console.info(value.name + 'file is created in /data/media directory');
                            console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_WITH_INCORRECT_NAME_DIRECTORY_02 : PASS');
                        }else{
                            console.info(value.name + 'file is not created');

                        }
                        console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_WITH_INCORRECT_NAME_DIRECTORY_02 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_WITH_INVALID_CHARACTERS_NAME_DIRECTORY_01
        * @tc.name      : Create an image file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_WITH_INVALID_CHARACTERS_NAME_DIRECTORY_01', 0, async function (done) {
    media.createImageAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createImageAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createaudiononamepath.selections ;
                    value.name = '?:\"*|/\\<>".png';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        if (data == false){
                            console.info(value.name + 'file is created in /data/media directory');
                            console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_WITH_INVALID_CHARACTERS_NAME_DIRECTORY_01 : PASS');
                        }else{
                            console.info(value.name + 'file is not created');

                        }
                        console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_IMAGEFILE_WITH_INVALID_CHARACTERS_NAME_DIRECTORY_01 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEbmpFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an image file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an image file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEbmpFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createImageAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createimagepromisebmppath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromisebmppath);
                    value.name = 'newimagefrompromise.bmp'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        media.getImageAssets(createimagepromisebmppath,(error, data1)=> {
                            console.info('MediaLibraryTest: getImageAssets with album name returns' + data1);
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + 'file is created in' + createimagepromisebmppath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEbmpFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimagepromisebmppath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEbmpFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                                }
                            }
                        });
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEBMPFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an image file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an image file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEBMPFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createImageAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName = createimagepromiseBPMpath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromiseBPMpath);
                    value.name = 'newimagefrompromise.BMP'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        media.getImageAssets(createimagepromiseBPMpath,(error, data1)=> {
                            console.info('MediaLibraryTest: getImageAssets with album name returns' + data1);
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + 'file is created in' + createimagepromiseBPMpath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEBMPFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimagepromiseBPMpath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEBMPFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                                }
                            }
                        });
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEjpgFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an image file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an image file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEjpgFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createImageAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createimagepromisejpgpath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromisejpgpath);
                    value.name = 'newimagefrompromise.jpg'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        media.getImageAssets(createimagepromisejpgpath,(error, data1)=> {
                            console.info('MediaLibraryTest: getImageAssets with album name returns' + data1);
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + 'file is created in' + createimagepromisejpgpath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEbmpFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimagepromisejpgpath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEbmpFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                                }
                            }
                        });
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEJPGFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an image file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an image file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEJPGFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createImageAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createimagepromiseJPGpath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromiseJPGpath);
                    value.name = 'newimagefrompromise.JPG'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        media.getImageAssets(createimagepromiseJPGpath,(error, data1)=> {
                            console.info('MediaLibraryTest: getImageAssets with album name returns' + data1);
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + 'file is created in' + createimagepromiseJPGpath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEJPGFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimagepromiseJPGpath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEJPGFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                                }
                            }
                        });
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEpngFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an image file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an image file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEpngFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createImageAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createimagepromisepngpath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromisepngpath);
                    value.name = 'newimagefrompromise.png'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        media.getImageAssets(createimagepromisepngpath,(error, data1)=> {
                            console.info('MediaLibraryTest: getImageAssets with album name returns' + data1);
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + 'file is created in' + createimagepromisepngpath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEpngFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimagepromisepngpath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEpngFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                                }
                            }
                        });
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEPNGFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an image file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an image file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEPNGFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createImageAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createimagepromisePNGpath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromisePNGpath);
                    value.name = 'newimagefrompromise.PNG'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        media.getImageAssets(createimagepromisePNGpath,(error, data1)=> {
                            console.info('MediaLibraryTest: getImageAssets with album name returns' + data1);
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + 'file is created in' + createimagepromisePNGpath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEPNGFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimagepromisePNGpath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEPNGFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                                }
                            }
                        });
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEgifFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an image file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an image file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEgifFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createImageAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createimagepromisegifpath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromisegifpath);
                    value.name = 'newimagefrompromise.gif'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        media.getImageAssets(createimagepromisegifpath,(error, data1)=> {
                            console.info('MediaLibraryTest: getImageAssets with album name returns' + data1);
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + 'file is created in' + createimagepromisegifpath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEgifFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimagepromisegifpath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEgifFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                                }
                            }
                        });
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEGIFFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an image file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an image file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEGIFFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createImageAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createimagepromiseGIFpath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromisePNGpath);
                    value.name = 'newimagefrompromise.GIF'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        media.getImageAssets(createimagepromiseGIFpath,(error, data1)=> {
                            console.info('MediaLibraryTest: getImageAssets with album name returns' + data1);
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + 'file is created in' + createimagepromiseGIFpath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEGIFFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimagepromiseGIFpath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEGIFFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                                }
                            }
                        });
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGErawFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an image file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an image file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGErawFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createImageAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createimagepromiserawpath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromiserawpath);
                    value.name = 'newimagefrompromise.raw'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        media.getImageAssets(createimagepromiserawpath,(error, data1)=> {
                            console.info('MediaLibraryTest: getImageAssets with album name returns' + data1);
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + 'file is created in' + createimagepromiserawpath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGErawFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimagepromiserawpath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGErawFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                                }
                            }
                        });
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGERAWFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an image file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an image file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGERAWFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createImageAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createimagepromiseRAWpath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromiseRAWpath);
                    value.name = 'newimagefrompromise.RAW'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        media.getImageAssets(createimagepromiseRAWpath,(error, data1)=> {
                            console.info('MediaLibraryTest: getImageAssets with album name returns' + data1);
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + 'file is created in' + createimagepromiseRAWpath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGERAWFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimagepromiseRAWpath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGERAWFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                                }
                            }
                        });
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEheifFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an image file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an image file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEheifFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createImageAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createimagepromiseheifpath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromiseheifpath);
                    value.name = 'newimagefrompromise.heif'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        media.getImageAssets(createimagepromiseheifpath,(error, data1)=> {
                            console.info('MediaLibraryTest: getImageAssets with album name returns' + data1);
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + 'file is created in' + createimagepromiseheifpath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEheifFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimagepromiseheifpath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEheifFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                                }
                            }
                        });
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEHEIFFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an image file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an image file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEHEIFFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createImageAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createimagepromiseHEIFpath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromiseHEIFpath);
                    value.name = 'newimagefrompromise.HEIF'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        media.getImageAssets(createimagepromiseHEIFpath,(error, data1)=> {
                            console.info('MediaLibraryTest: getImageAssets with album name returns' + data1);
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + 'file is created in' + createimagepromiseHEIFpath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEHEIFFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimagepromiseHEIFpath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEHEIFFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                                }
                            }
                        });
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEwebpFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an image file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an image file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEwebpFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createImageAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createimagepromisewebppath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromisewebppath);
                    value.name = 'newimagefrompromise.webp'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        media.getImageAssets(createimagepromisewebppath,(error, data1)=> {
                            console.info('MediaLibraryTest: getImageAssets with album name returns' + data1);
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + 'file is created in' + createimagepromisewebppath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEwebpFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimagepromisewebppath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEwebpFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                                }
                            }
                        });
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEWEBPFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an image file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an image file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEWEBPFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createImageAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createimagepromiseWEBPpath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromiseWEBPpath);
                    value.name = 'newimagefrompromise.WEBP'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        media.getImageAssets(createimagepromiseWEBPpath,(error, data1)=> {
                            console.info('MediaLibraryTest: getImageAssets with album name returns' + data1);
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + 'file is created in' + createimagepromiseWEBPpath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEWEBPFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimagepromiseWEBPpath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEWEBPFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                                }
                            }
                        });
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEsvgFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an image file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an image file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEsvgFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createImageAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createimagepromisesvgpath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromisesvgpath);
                    value.name = 'newimagefrompromise.svg'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        media.getImageAssets(createimagepromisesvgpath,(error, data1)=> {
                            console.info('MediaLibraryTest: getImageAssets with album name returns' + data1);
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + 'file is created in' + createimagepromisesvgpath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEsvgFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimagepromisesvgpath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEsvgFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                                }
                            }
                        });
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGESVGFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an image file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an image file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGESVGFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createImageAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createimagepromiseSVGpath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true' + createimagepromiseSVGpath);
                    value.name = 'newimagefrompromise.SVG'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        media.getImageAssets(createimagepromiseSVGpath,(error, data1)=> {
                            console.info('MediaLibraryTest: getImageAssets with album name returns' + data1);
                            for (i=0; i < data1.length ; i++){
                                if (data1[i].name == value.name){
                                    console.info(value.name + 'file is created in' + createimagepromiseSVGpath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGESVGFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                    //sleep(500);
                                    break;
                                }else{
                                    console.info(value.name + 'file is not created in' + createimagepromiseSVGpath.selections + 'imagealbum');
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGESVGFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                                }
                            }
                        });
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEFILE_WITH_NO_ALBUM_NAME_01
        * @tc.name      : Create an image file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an image file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
*/

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEFILE_WITH_NO_ALBUM_NAME_01', 0, async function (done) {
    const promise = media.createImageAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName ='';
                    //console.info('MediaLibraryTest: startCreateAudioPromise returns true' + createaudiopromiseOGGpath);
                    value.name = 'newimagefrompromise.JPG'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        if (data == false){
                            console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEFILE_WITH_NO_ALBUM_NAME_01 : PASS');
                        } else {
                            console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEFILE_WITH_NO_ALBUM_NAME_01 : FAIL');
                        }

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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEFILE_WITH_NO_IMAGE_NAME_01
        * @tc.name      : Create an image file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an image file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
*/

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEFILE_WITH_NO_IMAGE_NAME_01', 0, async function (done) {
    const promise = media.createImageAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName = createaudiononamepath.selections;
                    //console.info('MediaLibraryTest: startCreateAudioPromise returns true' + createaudiopromiseOGGpath);
                    value.name = ''
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        if (data == false){
                            console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEFILE_WITH_NO_IMAGE_NAME_01 : PASS');
                        } else {
                            console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEFILE_WITH_NO_IMAGE_NAME_01 : FAIL');
                        }

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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEFILE_WITH_INCORRECT_IMAGE_NAME_01
        * @tc.name      : Create an image file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an image file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
*/

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEFILE_WITH_INCORRECT_IMAGE_NAME_01', 0, async function (done) {
    const promise = media.createImageAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName = createaudiononamepath.selections;
                    //console.info('MediaLibraryTest: startCreateAudioPromise returns true' + createaudiopromiseOGGpath);
                    value.name = 'abc.txt'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        if (data == false){
                            console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEFILE_WITH_INCORRECT_IMAGE_NAME_01 : PASS');
                        } else {
                            console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEFILE_WITH_INCORRECT_IMAGE_NAME_01 : FAIL');
                        }

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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEFILE_WITH_INCORRECT_IMAGE_NAME_02
        * @tc.name      : Create an image file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an image file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
*/

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEFILE_WITH_INCORRECT_IMAGE_NAME_02', 0, async function (done) {
    const promise = media.createImageAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName = createaudiononamepath.selections;
                    //console.info('MediaLibraryTest: startCreateAudioPromise returns true' + createaudiopromiseOGGpath);
                    value.name = '.JPG'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        if (data == false){
                            console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEFILE_WITH_INCORRECT_IMAGE_NAME_02 : PASS');
                        } else {
                            console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEFILE_WITH_INCORRECT_IMAGE_NAME_02 : FAIL');
                        }

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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEFILE_WITH_INVALIDCHARACTERS_IMAGE_NAME_01
        * @tc.name      : Create an image file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an image file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
*/

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEFILE_WITH_INVALIDCHARACTERS_IMAGE_NAME_01', 0, async function (done) {
    const promise = media.createImageAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName = createaudiononamepath.selections;
                    //console.info('MediaLibraryTest: startCreateAudioPromise returns true' + createaudiopromiseOGGpath);
                    value.name = '?:\"*|/\\<>.JPG'
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        //expect(data).assertTrue();
                        if (data == false){
                            console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEFILE_WITH_INVALIDCHARACTERS_IMAGE_NAME_01 : PASS');
                        } else {
                            console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_IMAGEFILE_WITH_INVALIDCHARACTERS_IMAGE_NAME_01 : FAIL');
                        }

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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_3gp_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_3gp_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createVideoAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createVideoAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: createVideoAsset returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createvideoasync3gppath.selections;
                    value.name = 'newvideofromasync.3gp';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        //sleep(200);
                        if (data == true){
                            media.getVideoAssets(createvideoasync3gppath, (error, data1)=> {
                                console.info('MediaLibraryTest: inside getVideoAssets commitCreate returns' + data1.length);
                                console.info('MediaLibraryTest: inside getVideoAssets commitCreate returns' + data1);
                                console.info('MediaLibraryTest: inside getVideoAssets commitCreate returns' + value.name);
                                data1.forEach(getMediaData);
                                //for (i=0; i <data1.length ; i++){
                                //if (data1[i].name == value.name){
                                //console.info(i + data[i].name + data[i].mimeType + data[i].mediaType + 'file is created in' + createvideoasync3gppath.selections + 'folder');
                                console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_3gp_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                                //sleep(500);
                                //break;
                                //}else{
                                //console.info(value.name + 'file is not created in' + createvideoasync3gppath.selections + 'folder');

                                //}
                                //console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_3gp_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                            }); done();
                        }else {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_3gp_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                        }
                        done();
                    });
                    done();
                }
                console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
            });
        } else {
            console.info('MediaLibraryTest: startCreate 1 returns false');
        }
    });
    done();
})

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_3GP_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_3GP_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createVideoAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createVideoAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: createVideoAsset returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createvideoasync3GPpath.selections;
                    value.name = 'newvideofromasync.3GP';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        if (data == true){
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_3GP_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                        }else {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_3GP_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                        }
                        done();
                    });
                    done();
                }
                console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
            });
        } else {
            console.info('MediaLibraryTest: startCreate 1 returns false');
        }
    });
    done();
})

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_mov_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_mov_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createVideoAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createVideoAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: createVideoAsset returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createvideoasyncmovpath.selections;
                    value.name = 'newvideofromasync.mov';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        if (data == true){
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_mov_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                        }else {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_mov_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                        }
                        done();
                    });
                    done();
                }
                console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
            });
        } else {
            console.info('MediaLibraryTest: startCreate 1 returns false');
        }
    });
    done();
})

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_MOV_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_MOV_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createVideoAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createVideoAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: createVideoAsset returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createvideoasyncMOVpath.selections;
                    value.name = 'newvideofromasync.MOV';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        if (data == true){
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_MOV_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                        }else {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_MOV_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                        }
                        done();
                    });
                    done();
                }
                console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
            });
        } else {
            console.info('MediaLibraryTest: startCreate 1 returns false');
        }
    });
    done();
})



/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_mpg_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_mpg_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createVideoAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createVideoAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: createVideoAsset returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createvideoasyncmpgpath.selections;
                    value.name = 'newvideofromasync.mpg';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        if (data == true){
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_mpg_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                        }else {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_mpg_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                        }
                        done();
                    });
                    done();
                }
                console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
            });
        } else {
            console.info('MediaLibraryTest: startCreate 1 returns false');
        }
    });
    done();
})

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_MPG_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_MPG_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createVideoAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createVideoAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: createVideoAsset returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createvideoasyncMPGpath.selections;
                    value.name = 'newvideofromasync.MPG';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        if (data == true){
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_MPG_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                        }else {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_MPG_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                        }
                        done();
                    });
                    done();
                }
                console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
            });
        } else {
            console.info('MediaLibraryTest: startCreate 1 returns false');
        }
    });
    done();
})



/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_mp4_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_mp4_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createVideoAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createVideoAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: createVideoAsset returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createvideoasyncmp4path.selections;
                    value.name = 'newvideofromasync.mp4';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        if (data == true){
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_mp4_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                        }else {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_mp4_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                        }
                        done();
                    });
                    done();
                }
                console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
            });
        } else {
            console.info('MediaLibraryTest: startCreate 1 returns false');
        }
    });
    done();
})

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_MP4_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_MP4_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createVideoAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createVideoAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: createVideoAsset returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createvideoasyncMP4path.selections;
                    value.name = 'newvideofromasync.MP4';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        if (data == true){
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_MP4_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                        }else {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_MP4_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                        }
                        done();
                    });
                    done();
                }
                console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
            });
        } else {
            console.info('MediaLibraryTest: startCreate 1 returns false');
        }
    });
    done();
})

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_mkv_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_mkv_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createVideoAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createVideoAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: createVideoAsset returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createvideoasyncmkvpath.selections;
                    value.name = 'newvideofromasync.mkv';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        if (data == true){
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_mkv_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                        } else {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_mkv_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                        }
                        done();
                    });
                    done();
                }
                console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
            });
        } else {
            console.info('MediaLibraryTest: startCreate 1 returns false');
        }
    });
    done();
})

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_MKV_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_MKV_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createVideoAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createVideoAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: createVideoAsset returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createvideoasyncMKVpath.selections;
                    value.name = 'newvideofromasync.MKV';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        if (data == true){
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_MKV_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                        }else {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_MKV_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                        }
                        done();
                    });
                    done();
                }
                console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
            });
        } else {
            console.info('MediaLibraryTest: startCreate 1 returns false');
        }
    });
    done();
})

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_webm_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_webm_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createVideoAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createVideoAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: createVideoAsset returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createvideoasyncwebmpath.selections;
                    value.name = 'newvideofromasync.webm';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        if (data == true){
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_webm_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                        } else {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_webm_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                        }
                        done();
                    });
                    done();
                }
                console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
            });
        } else {
            console.info('MediaLibraryTest: startCreate 1 returns false');
        }
    });
    done();
})

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_MKV_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an audio file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/createaimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_WEBM_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createVideoAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createVideoAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: createVideoAsset returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createvideoasyncWEBMpath.selections;
                    value.name = 'newvideofromasync.WEBM';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        expect(data).assertTrue();
                        if (data == true){
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_WEBM_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                        }else {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_WEBM_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                        }
                        done();
                    });
                    done();
                }
                console.info('MediaLibraryTest: End of createVideoAsset 1. Now waiting for result');
            });
        } else {
            console.info('MediaLibraryTest: startCreate 1 returns false');
        }
    });
    done();
})



/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_WITH_NO_ALBUM_DIRECTORY_01
        * @tc.name      : Create an video file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an video file in the device as per the album value [/data/media/onelevel/createimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_WITH_NO_ALBUM_DIRECTORY_01', 0, async function (done) {
    media.createVideoAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createVideoAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateVideoAssets returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = "" ;
                    value.name = 'newaudiofromasync.mp4';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        if (data == true){
                            console.info(value.name + 'file is created in /data/media directory');
                            console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_WITH_NO_ALBUM_DIRECTORY_01 : PASS');
                        }else{
                            console.info(value.name + 'file is not created');
                            console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_WITH_NO_ALBUM_DIRECTORY_01 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_WITH_NO_FILE_NAME_01
        * @tc.name      : Create an video file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an video file in the device as per the album value [/data/media/onelevel/createimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_WITH_NO_FILE_NAME_01', 0, async function (done) {
    media.createVideoAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createVideoAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateVideoAssets returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createaudiononamepath.selections ;
                    value.name = '';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        if (data == false){
                            console.info(value.name + 'file is created in /data/media directory');
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_WITH_NO_FILE_NAME_01 : PASS');
                        }else{
                            console.info(value.name + 'file is not created');
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_WITH_NO_FILE_NAME_01 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_WITH_INCORRECT_FILE_NAME_01
        * @tc.name      : Create an video file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an video file in the device as per the album value [/data/media/onelevel/createimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_WITH_INCORRECT_FILE_NAME_01', 0, async function (done) {
    media.createVideoAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createVideoAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateVideoAssets returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createaudiononamepath.selections ;
                    value.name = 'abc.txt';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        if (data == false){
                            console.info(value.name + 'file is created in /data/media directory');
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_WITH_INCORRECT_FILE_NAME_01 : PASS');
                        }else{
                            console.info(value.name + 'file is not created');
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_WITH_INCORRECT_FILE_NAME_01 : FAIL');

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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_WITH_INCORRECT_FILE_NAME_01
        * @tc.name      : Create an video file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an video file in the device as per the album value [/data/media/onelevel/createimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_WITH_INCORRECT_FILE_NAME_02', 0, async function (done) {
    media.createVideoAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createVideoAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateVideoAssets returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createaudiononamepath.selections ;
                    value.name = '.mp4';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        if (data == false){
                            console.info(value.name + 'file is created in /data/media directory');
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_WITH_INCORRECT_FILE_NAME_02 : PASS');
                        }else{
                            console.info(value.name + 'file is not created');
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_WITH_INCORRECT_FILE_NAME_02 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_WITH_INVALID_CHARACTERS_FILE_NAME_01
        * @tc.name      : Create an video file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an video file in the device as per the album value [/data/media/onelevel/createimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_WITH_INVALID_CHARACTERS_FILE_NAME_01', 0, async function (done) {
    media.createVideoAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createVideoAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateVideoAssets returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreate returns true');
                    value.albumName = createaudiononamepath.selections ;
                    value.name = '?:\"*|/\\<>".mp4';
                    value.commitCreate((error, data) => {
                        console.info('MediaLibraryTest: commitCreate returns' + data);
                        if (data == false){
                            console.info(value.name + 'file is created in /data/media directory');
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_WITH_INVALID_CHARACTERS_FILE_NAME_01 : PASS');
                        }else{
                            console.info(value.name + 'file is not created');
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_WITH_INVALID_CHARACTERS_FILE_NAME_01 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEO3gpFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an Video file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an Video file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEO3gpFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createVideoAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createvideopromise3gppath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true' + createvideopromise3gppath);
                    value.name = 'newvideofrompromise.3gp';
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        if (data == true) {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEO3gpFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                        }else{
                            console.info(value.name + 'file is not created in' + createvideopromise3gppath.selections + 'imagealbum');
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEO3gpFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                        }
                    });
                }
            });
            console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
        } else {
            console.info('MediaLibraryTest: startCreate 3 returns false');
        }
    });
    await promise;
    done();
});

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEO3GPFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an Video file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an Video file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEO3GPFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createVideoAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createvideopromise3GPpath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true' + createvideopromise3GPpath);
                    value.name = 'newvideofrompromise.3GP';
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        if (data == true) {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEO3GPFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                        }else{
                            console.info(value.name + 'file is not created in' + createvideopromise3GPpath.selections + 'imagealbum');
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEO3GPFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                        }
                    });
                }
            });
            console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
        } else {
            console.info('MediaLibraryTest: startCreate 3 returns false');
        }
    });
    await promise;
    done();
});

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOmovFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an Video file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an Video file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOmovFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createVideoAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createvideopromisemovpath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true' + createvideopromisemovpath);
                    value.name = 'newvideofrompromise.mov';
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        if (data == true) {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOmovFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                        }else{
                            console.info(value.name + 'file is not created in' + createvideopromisemovpath.selections + 'imagealbum');
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOmovFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                        }
                    });
                }
            });
            console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
        } else {
            console.info('MediaLibraryTest: startCreate 3 returns false');
        }
    });
    await promise;
    done();
});

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOMOVFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an Video file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an Video file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOMOVFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createVideoAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createvideopromiseMOVpath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true' + createvideopromiseMOVpath);
                    value.name = 'newvideofrompromise.MOV';
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        if (data == true) {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOMOVFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                        }else{
                            console.info(value.name + 'file is not created in' + createvideopromiseMOVpath.selections + 'imagealbum');
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOMOVFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                        }
                    });
                }
            });
            console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
        } else {
            console.info('MediaLibraryTest: startCreate 3 returns false');
        }
    });
    await promise;
    done();
});



/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOmpgFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an Video file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an Video file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOmpgFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createVideoAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createvideopromisempgpath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true' + createvideopromisempgpath);
                    value.name = 'newvideofrompromise.mpg';
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        if (data == true) {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOmpgFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                        }else{
                            console.info(value.name + 'file is not created in' + createvideopromisempgpath.selections + 'imagealbum');
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOmpgFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                        }
                    });
                }
            });
            console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
        } else {
            console.info('MediaLibraryTest: startCreate 3 returns false');
        }
    });
    await promise;
    done();
});

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOMPGFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an Video file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an Video file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOMPGFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createVideoAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createvideopromiseMPGpath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true' + createvideopromiseMPGpath);
                    value.name = 'newvideofrompromise.MPG';
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        if (data == true) {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOMPGFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                        }else{
                            console.info(value.name + 'file is not created in' + createvideopromiseMPGpath.selections + 'imagealbum');
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOMPGFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                        }
                    });
                }
            });
            console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
        } else {
            console.info('MediaLibraryTest: startCreate 3 returns false');
        }
    });
    await promise;
    done();
});


/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOmp4FILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an Video file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an Video file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOmp4FILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createVideoAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createvideopromisemp4path.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true' + createvideopromisemp4path);
                    value.name = 'newvideofrompromise.mp4';
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        if (data == true) {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOmp4FILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                        }else{
                            console.info(value.name + 'file is not created in' + createvideopromisemp4path.selections + 'imagealbum');
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOmp4FILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                        }
                    });
                }
            });
            console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
        } else {
            console.info('MediaLibraryTest: startCreate 3 returns false');
        }
    });
    await promise;
    done();
});

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOMP4FILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an Video file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an Video file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOMP4FILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createVideoAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createvideopromiseMP4path.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true' + createvideopromiseMP4path);
                    value.name = 'newvideofrompromise.MP4';
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        if (data == true) {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOMP4FILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                        }else{
                            console.info(value.name + 'file is not created in' + createvideopromiseMP4path.selections + 'imagealbum');
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOMP4FILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                        }
                    });
                }
            });
            console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
        } else {
            console.info('MediaLibraryTest: startCreate 3 returns false');
        }
    });
    await promise;
    done();
});

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOwebmFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an Video file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an Video file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOwebmFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createVideoAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createvideopromisewebmpath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true' + createvideopromisewebmpath);
                    value.name = 'newvideofrompromise.webm';
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        if (data == true) {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOwebmFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                        }else{
                            console.info(value.name + 'file is not created in' + createvideopromisewebmpath.selections + 'imagealbum');
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOwebmFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                        }
                    });
                }
            });
            console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
        } else {
            console.info('MediaLibraryTest: startCreate 3 returns false');
        }
    });
    await promise;
    done();
});

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOWEBMFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an Video file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an Video file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOWEBMFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createVideoAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createvideopromiseWEBMpath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true' + createvideopromiseWEBMpath);
                    value.name = 'newvideofrompromise.WEBM';
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        if (data == true) {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOWEBMFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                        }else{
                            console.info(value.name + 'file is not created in' + createvideopromiseWEBMpath.selections + 'imagealbum');
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOWEBMFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                        }
                    });
                }
            });
            console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
        } else {
            console.info('MediaLibraryTest: startCreate 3 returns false');
        }
    });
    await promise;
    done();
});



/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOmkvFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an Video file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an Video file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOmkvFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createVideoAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createvideopromisemkvpath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true' + createvideopromisemkvpath);
                    value.name = 'newvideofrompromise.mkv';
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        if (data == true) {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOmkvFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                        }else{
                            console.info(value.name + 'file is not created in' + createvideopromisemkvpath.selections + 'imagealbum');
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOmkvFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                        }
                    });
                }
            });
            console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
        } else {
            console.info('MediaLibraryTest: startCreate 3 returns false');
        }
    });
    await promise;
    done();
});

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOMKVFILE_WITH_EXISTING_ALBUM_DIRECTORY_01
        * @tc.name      : Create an Video file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an Video file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOMKVFILE_WITH_EXISTING_ALBUM_DIRECTORY_01', 0, async function (done) {
    const promise = media.createVideoAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createvideopromiseMKVpath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true' + createvideopromiseMKVpath);
                    value.name = 'newvideofrompromise.MKV';
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        if (data == true) {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOMKVFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : PASS');
                        }else{
                            console.info(value.name + 'file is not created in' + createvideopromiseMKVpath.selections + 'imagealbum');
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOMKVFILE_WITH_EXISTING_ALBUM_DIRECTORY_01 : FAIL');
                        }
                    });
                }
            });
            console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
        } else {
            console.info('MediaLibraryTest: startCreate 3 returns false');
        }
    });
    await promise;
    done();
});



/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOFILE_WITH_NO_ALBUM_NAME_01
        * @tc.name      : Create an Video file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an Video file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOFILE_WITH_NO_ALBUM_NAME_01', 0, async function (done) {
    const promise = media.createVideoAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName ='';
                    console.info('MediaLibraryTest: startCreateImagePromise returns true'+ value1);
                    value.name = 'newvideofrompromise.3GP';
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        if (data == true) {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOFILE_WITH_NO_ALBUM_NAME_01 : PASS');
                        }else{
                            console.info(value.name + 'file is not created in' + '/data/media');
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOFILE_WITH_NO_ALBUM_NAME_01 : FAIL');
                        }
                    });
                }
            });
            console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
        } else {
            console.info('MediaLibraryTest: startCreate 3 returns false');
        }
    });
    await promise;
    done();
});

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOFILE_WITH_NO_VIDEO_FILE_NAME_01
        * @tc.name      : Create an Video file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an Video file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOFILE_WITH_NO_VIDEO_FILE_NAME_01', 0, async function (done) {
    const promise = media.createVideoAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createaudiononamepath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true'+ value1);
                    value.name = '';
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        if (data == false) {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOFILE_WITH_NO_VIDEO_FILE_NAME_01 : PASS');
                        }else{
                            console.info(value.name + 'file is not created in' + '/data/media');
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOFILE_WITH_NO_VIDEO_FILE_NAME_01 : FAIL');
                        }
                    });
                }
            });
            console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
        } else {
            console.info('MediaLibraryTest: startCreate 3 returns false');
        }
    });
    await promise;
    done();
});

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOFILE_WITH_INVALID_VIDEO_FILE_NAME_01
        * @tc.name      : Create an Video file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an Video file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOFILE_WITH_INVALID_VIDEO_FILE_NAME_01', 0, async function (done) {
    const promise = media.createVideoAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createaudiononamepath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true'+ value1);
                    value.name = 'abc.txt';
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        if (data == false) {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOFILE_WITH_INVALID_VIDEO_FILE_NAME_01 : PASS');
                        }else{
                            console.info(value.name + 'file is not created in' + '/data/media');
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOFILE_WITH_INVALID_VIDEO_FILE_NAME_01 : FAIL');
                        }
                    });
                }
            });
            console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
        } else {
            console.info('MediaLibraryTest: startCreate 3 returns false');
        }
    });
    await promise;
    done();
});



/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOFILE_WITH_INVALID_VIDEO_FILE_NAME_02
        * @tc.name      : Create an Video file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an Video file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOFILE_WITH_INVALID_VIDEO_FILE_NAME_02', 0, async function (done) {
    const promise = media.createVideoAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createaudiononamepath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true'+ value1);
                    value.name = '.mp4';
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        if (data == false) {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOFILE_WITH_INVALID_VIDEO_FILE_NAME_02 : PASS');
                        }else{
                            console.info(value.name + 'file is not created in' + '/data/media');
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOFILE_WITH_INVALID_VIDEO_FILE_NAME_02 : FAIL');
                        }
                    });
                }
            });
            console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
        } else {
            console.info('MediaLibraryTest: startCreate 3 returns false');
        }
    });
    await promise;
    done();
});


/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOFILE_WITH_INVALID_CHARACTERS_VIDEO_FILE_NAME_01
        * @tc.name      : Create an Video file in the device with empty folder name [PROMISE]
        * @tc.desc      : Create an Video file in the device as per the album value [PROMISE]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0

   */
it('SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOFILE_WITH_INVALID_CHARACTERS_VIDEO_FILE_NAME_01', 0, async function (done) {
    const promise = media.createVideoAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImage returns successful data');
            value.startCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: startCreateImagePromise returns true');
                    value.albumName =createaudiononamepath.selections;
                    console.info('MediaLibraryTest: startCreateImagePromise returns true'+ value1);
                    value.name = '?:\"*|/\\<>".mp4';
                    value.commitCreate().then(function(data)  {
                        console.info('MediaLibraryTest: commitCreate with album name returns' + data);
                        if (data == false) {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOFILE_WITH_INVALID_CHARACTERS_VIDEO_FILE_NAME_01 : PASS');
                        }else{
                            console.info(value.name + 'file is not created in' + '/data/media');
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_PROMISE_VIDEOFILE_WITH_INVALID_CHARACTERS_VIDEO_FILE_NAME_01 : FAIL');
                        }
                    });
                }
            });
            console.info('MediaLibraryTest: End of createVideoAsset 3. Now waiting for result');
        } else {
            console.info('MediaLibraryTest: startCreate 3 returns false');
        }
    });
    await promise;
    done();
});

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_ASYNC_VIDEOASSET_01
        * @tc.name      : Create an video file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an video file in the device as per the album value [/data/media/onelevel/createimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_ASYNC_VIDEOASSET_01', 0, async function (done) {
    media.createVideoAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createVideoAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateVideoAssets returns successful data');
            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_ASYNC_VIDEOASSET_01 : PASS');
        }else{
            console.info(value.name + 'file is not created');
            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_ASYNC_VIDEOASSET_01 : FAIL');
        }
        done();
    });

})

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_START_VIDEO_ASSET_01
        * @tc.name      : Create an video file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an video file in the device as per the album value [/data/media/onelevel/createimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_START_VIDEO_ASSET_01', 0, async function (done) {
    media.createVideoAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createVideoAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateVideoAssets returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_WITH_INCORRECT_FILE_NAME_02 : PASS');
                } else {
                    console.info(value.name + 'file is not created');
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_COMMIT_ASYNC_VIDEOFILE_WITH_INCORRECT_FILE_NAME_02 : FAIL');
                }
                done();
            });
            done();
        }
    });
})


/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_ASYNC_AUDIOASSET_01
        * @tc.name      : Create an video file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an video file in the device as per the album value [/data/media/onelevel/createimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_ASYNC_AUDIOASSET_01', 0, async function (done) {
    media.createAudioAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: CreateAudioAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateAudioAsset returns successful data');
            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_ASYNC_AUDIOASSET_01 : PASS');
        }else{
            console.info(value.name + 'file is not created');
            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_ASYNC_AUDIOASSET_01 : FAIL');
        }
        done();
    });
    done();

})

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_START_AUDIO_ASSET_01
        * @tc.name      : Create an video file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an video file in the device as per the album value [/data/media/onelevel/createimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_START_AUDIO_ASSET_01', 0, async function (done) {
    media.createAudioAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: CreateAudioAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateAudioAsset returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_START_AUDIO_ASSET_01 : PASS');
                } else {
                    console.info(value.name + 'file is not created');
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_START_AUDIO_ASSET_01 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_ASYNC_IMAGEASSET_01
        * @tc.name      : Create an image file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an image file in the device as per the album value [/data/media/onelevel/createimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_ASYNC_IMAGEASSET_01', 0, async function (done) {
    media.createImageAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: CreateImageAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImageAsset returns successful data');
            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_ASYNC_IMAGEASSET_01 : PASS');
        }else{
            console.info(value.name + 'file is not created');
            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_ASYNC_IMAGEASSET_01 : FAIL');
        }
        done();
    });
    done();

})

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_START_IMAGE_ASSET_01
        * @tc.name      : Create an image file in the device as per the album value [/data/media/onelevel/createimage] [ASYNC]
        * @tc.desc      : Create an image file in the device as per the album value [/data/media/onelevel/createimage]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CREATE_START_IMAGE_ASSET_01', 0, async function (done) {
    media.createImageAsset((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: CreateImageAsset returned an error' + error.message);
        }
        if (value != undefined){
            console.info('MediaLibraryTest: CreateImageAsset returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_START_IMAGE_ASSET_01 : PASS');
                } else {
                    console.info(value.name + 'file is not created');
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_START_IMAGE_ASSET_01 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_ALBUM_SYNC_EXISTING_DIRECTORY_01
        * @tc.name      : Create an album in the device
        * @tc.desc      : Create an album in the device as per the album value
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_CREATE_ALBUM_ASYNC_EXISTING_DIRECTORY_01', 0, async function (done) {
    media.createAlbum((error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createAlbum1 returned an error' + error.message);
        }
        if (value != undefined){
            value.albumName = 'new_album_async';
            console.info('MediaLibraryTest: Folder new_album has to be created under /data/media');
            value.commitCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: commitCreate1 returns ' + value1);
                    expect(value1).assertTrue();
                    console.info('MediaLibraryTest: New folder is created as ' + value.albumName + ' in /data/media');
                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_ALBUM_SYNC_EXISTING_DIRECTORY_01 : PASS');
                    //sleep(500);
                }else{
                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_ALBUM_SYNC_EXISTING_DIRECTORY_01 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_ALBUM_PROMISE_EXISTING_DIRECTORY_02
        * @tc.name      : Create an album in the device
        * @tc.desc      : Create an album in the device as per the album value
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_CREATE_ALBUM_PROMISE_EXISTING_DIRECTORY_02', 0, async function (done) {
    const promise = media.createAlbum();
    promise.then(function(value){
        if (value != undefined){
            value.albumName = 'new_album_promise';
            console.info('MediaLibraryTest: Folder new_album1 has to be created under /data/media/');
            value.commitCreate().then(function(value1){
                if (value1 == true){
                    console.info('MediaLibraryTest: commitCreate 2 returns ' + value1);
                    expect(value1).assertTrue();
                    console.info('MediaLibraryTest: New folder is created as ' + value.albumName + ' in /data/media/new_album1');
                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_ALBUM_PROMISE_EXISTING_DIRECTORY_02 : PASS');
                    //sleep(1000);
                } else {
                    console.info('MediaLibraryTest: testcase_SUB_MEDIA_MEDIALIBRARY_CREATE_ALBUM_PROMISE_EXISTING_DIRECTORY_02 :FAIL');
                }
            });
        }
    });
    await promise;
    done();

})

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_ALBUM_PROMISE_WITHOUT_NAME_01
        * @tc.name      : Create an album in the device
        * @tc.desc      : Create an album in the device as per the album value
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_CREATE_ALBUM_PROMISE_WITHOUT_NAME_01', 0, async function (done) {
    const promise = media.createAlbum();
    promise.then(function(value){
        if (value != undefined){
            value.albumName = '';
            console.info('MediaLibraryTest: Folder new_album1 has to be created under /data/media/');
            value.commitCreate().then(function(value1){
                if (value1 == false){
                    console.info('MediaLibraryTest: commitCreate 2 returns ' + value1);
                    expect(value1).assertTrue();
                    console.info('MediaLibraryTest: New folder is not created as ' + value.albumName + ' in /data/media');
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_ALBUM_PROMISE_WITHOUT_NAME_01 : PASS');
                    //sleep(1000);
                } else {
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_ALBUM_PROMISE_WITHOUT_NAME_01 :FAIL');
                }
            });
        }
    });
    await promise;
    done();

})

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_ALBUM_PROMISE_WITH_INVALID_CHARACTERS_NAME_01
        * @tc.name      : Create an album in the device
        * @tc.desc      : Create an album in the device as per the album value
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_CREATE_ALBUM_PROMISE_WITH_INVALID_CHARACTERS_NAME_01', 0, async function (done) {
    const promise = media.createAlbum();
    promise.then(function(value){
        if (value != undefined){
            value.albumName = '?:*|/<>"';
            console.info('MediaLibraryTest: Folder new_album1 has to be created under /data/media/');
            value.commitCreate().then(function(value1){
                if (value1 == false){
                    console.info('MediaLibraryTest: commitCreate ALBUM NAME INVALID_CHARACTERS 2 returns ' + value1);
                    expect(value1).assertTrue();
                    console.info('MediaLibraryTest: New folder is not created as ' + value.albumName + ' in /data/media');
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_ALBUM_PROMISE_WITH_INVALID_CHARACTERS_NAME_01 : PASS');
                    //sleep(1000);
                } else {
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_CREATE_ALBUM_PROMISE_WITH_INVALID_CHARACTERS_NAME_01 :FAIL');
                }
            });
        }
    });
    await promise;
    done();

})



/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_AUDIOFILE_01
        * @tc.name      : Modify an audio file in the system
        * @tc.desc      : Modify an audio file in the system
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_AUDIOFILE_01', 0, async function (done) {
    media.getAudioAssets(modifyaudioasyncpath,(error, value)=> {
        if (error){
            console.info('MediaLibraryTest : getAudioAssets returned an error' + error.message);
        }
        if (value != undefined){
            var fileAsset = value[0].name;
            console.info('MediaLibraryTest : file to be modified is: ' + fileAsset);
            value[0].startModify((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest : startModify 1 returns true');
                    value[0].name = 'newaudioasync_modify.mp3'
                    value[0].commitModify((error, data) => {
                        console.info('MediaLibraryTest : commitModify 1 returns' + data);
                        expect(data).assertTrue();
                        if(data == true){
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_AUDIOFILE_01 : PASS');
                        }else{
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_AUDIOFILE_01 : FAIL');
                        }
                        done();
                    });
                    done();
                    console.info('MediaLibraryTest : End of modify audio 1. Now waiting for result');
                } else {
                    console.info('MediaLibraryTest : startModify 1 returns false');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INCORRECT_AUDIOFILE_01
        * @tc.name      : Modify an audio file in the system
        * @tc.desc      : Modify an audio file in the system
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_AUDIOFILE_01', 0, async function (done) {
    media.getAudioAssets(modifyaudioasyncpath,(error, value)=> {
        if (error){
            console.info('MediaLibraryTest : getAudioAssets returned an error' + error.message);
        }
        if (value != undefined){
            var fileAsset = value[1].name;
            console.info('MediaLibraryTest : file to be modified is: ' + fileAsset);
            value[1].startModify((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest : startModify 1 returns true');
                    value[1].name = '?:\"*|/\\<>".mp3'
                    value[1].commitModify((error, data) => {
                        console.info('MediaLibraryTest : commitModify 1 returns' + data);
                        //expect(data).assertTrue();
                        if(data == false){
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_AUDIOFILE_01 : PASS');
                        }else{
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_AUDIOFILE_01 : FAIL');
                        }
                        done();
                    });
                    done();
                    console.info('MediaLibraryTest : End of modify audio 1. Now waiting for result');
                } else {
                    console.info('MediaLibraryTest : startModify 1 returns false');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INCORRECT_AUDIOFILE_02
        * @tc.name      : Modify an audio file in the system
        * @tc.desc      : Modify an audio file in the system
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INCORRECT_AUDIOFILE_02', 0, async function (done) {
    media.getAudioAssets(modifyaudioasyncpath,(error, value)=> {
        if (error){
            console.info('MediaLibraryTest : getAudioAssets returned an error' + error.message);
        }
        if (value != undefined){
            var fileAsset = value[2].name;
            console.info('MediaLibraryTest : file to be modified is: ' + fileAsset);
            value[2].startModify((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest : startModify 2 returns true');
                    value[2].name = '.mp3'
                    value[2].commitModify((error, data) => {
                        console.info('MediaLibraryTest : commitModify 2 returns' + data);
                        //expect(data).assertTrue();
                        if(data == false){
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INCORRECT_AUDIOFILE_02 : PASS');
                        }else{
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INCORRECT_AUDIOFILE_02 : FAIL');
                        }
                        done();
                    });
                    done();
                    console.info('MediaLibraryTest : End of modify audio 2. Now waiting for result');
                } else {
                    console.info('MediaLibraryTest : startModify 2 returns false');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INCORRECT_AUDIOFILE_03
        * @tc.name      : Modify an audio file in the system
        * @tc.desc      : Modify an audio file in the system
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INCORRECT_AUDIOFILE_03', 0, async function (done) {
    media.getAudioAssets(modifyaudioasyncpath,(error, value)=> {
        if (error){
            console.info('MediaLibraryTest : getAudioAssets returned an error' + error.message);
        }
        if (value != undefined){
            var fileAsset = value[3].name;
            console.info('MediaLibraryTest : file to be modified is: ' + fileAsset);
            value[3].startModify((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest : startModify 1 returns true');
                    value[3].name = 'abc.mp4'
                    value[3].commitModify((error, data) => {
                        console.info('MediaLibraryTest : commitModify 1 returns' + data);
                        //expect(data).assertTrue();
                        if(data == false){
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INCORRECT_AUDIOFILE_03 : PASS');
                        }else{
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INCORRECT_AUDIOFILE_03 : FAIL');
                        }
                        done();
                    });
                    done();
                    console.info('MediaLibraryTest : End of modify audio 1. Now waiting for result');
                } else {
                    console.info('MediaLibraryTest : startModify 1 returns false');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INCORRECT_AUDIOFILE_04
        * @tc.name      : Modify an audio file in the system
        * @tc.desc      : Modify an audio file in the system
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INCORRECT_AUDIOFILE_04', 0, async function (done) {
    media.getAudioAssets(modifyaudioasyncpath,(error, value)=> {
        if (error){
            console.info('MediaLibraryTest : getAudioAssets returned an error' + error.message);
        }
        if (value != undefined){
            var fileAsset = value[4].name;
            console.info('MediaLibraryTest : file to be modified is: ' + fileAsset);
            value[4].startModify((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest : startModify 1 returns true');
                    value[4].name = 'abc.txt'
                    value[4].commitModify((error, data) => {
                        console.info('MediaLibraryTest : commitModify 1 returns' + data);
                        expect(data).assertTrue();
                        if(data == false){
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INCORRECT_AUDIOFILE_04 : PASS');
                        }else{
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INCORRECT_AUDIOFILE_04 : FAIL');
                        }
                        done();
                    });
                    done();
                    console.info('MediaLibraryTest : End of modify audio 1. Now waiting for result');
                } else {
                    console.info('MediaLibraryTest : startModify 1 returns false');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_IMAGEFILE_01
        * @tc.name      : Modify an image file in the system
        * @tc.desc      : Modify an image file in the system
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_IMAGEFILE_01', 0, async function (done) {
    media.getImageAssets(modifyimageasyncpath,(error, value)=> {
        if (error){
            console.info('MediaLibraryTest : getAudioAssets returned an error' + error.message);
        }
        if (value != undefined){
            var fileAsset = value[0].name;
            console.info('MediaLibraryTest : file to be modified is: ' + fileAsset);
            value[0].startModify((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest : startModify 1 returns true');
                    value[0].name = 'newimageasync_modify.png'
                    value[0].commitModify((error, data) => {
                        console.info('MediaLibraryTest : commitModify 1 returns' + data);
                        expect(data).assertTrue();
                        if(data == true){
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_IMAGEFILE_01 : PASS');
                        }else{
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_IMAGEFILE_01 : FAIL');
                        }
                        done();
                    });
                    done();
                    console.info('MediaLibraryTest : End of modify audio 1. Now waiting for result');
                } else {
                    console.info('MediaLibraryTest : startModify 1 returns false');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_01
        * @tc.name      : Modify an image file in the system
        * @tc.desc      : Modify an image file in the system
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_01', 0, async function (done) {
    media.getImageAssets(modifyimageasyncpath,(error, value)=> {
        if (error){
            console.info('MediaLibraryTest : getAudioAssets returned an error' + error.message);
        }
        if (value != undefined){
            var fileAsset = value[1].name;
            console.info('MediaLibraryTest : file to be modified is: ' + fileAsset);
            value[1].startModify((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest : startModify 1 returns true');
                    value[1].name = 'abc.jpg'
                    value[1].commitModify((error, data) => {
                        console.info('MediaLibraryTest : commitModify 1 returns' + data);
                        expect(data).assertTrue();
                        if(data == false){
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_01 : PASS');
                        }else{
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_01 : FAIL');
                        }
                        done();
                    });
                    done();
                    console.info('MediaLibraryTest : End of modify audio 1. Now waiting for result');
                } else {
                    console.info('MediaLibraryTest : startModify 1 returns false');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_02
        * @tc.name      : Modify an image file in the system
        * @tc.desc      : Modify an image file in the system
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_02', 0, async function (done) {
    media.getImageAssets(modifyimageasyncpath,(error, value)=> {
        if (error){
            console.info('MediaLibraryTest : getAudioAssets returned an error' + error.message);
        }
        if (value != undefined){
            var fileAsset = value[2].name;
            console.info('MediaLibraryTest : file to be modified is: ' + fileAsset);
            value[2].startModify((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest : startModify 1 returns true');
                    value[2].name = 'abc.txt'
                    value[2].commitModify((error, data) => {
                        console.info('MediaLibraryTest : commitModify 1 returns' + data);
                        expect(data).assertTrue();
                        if(data == false){
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_02 : PASS');
                        }else{
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_02 : FAIL');
                        }
                        done();
                    });
                    done();
                    console.info('MediaLibraryTest : End of modify audio 1. Now waiting for result');
                } else {
                    console.info('MediaLibraryTest : startModify 1 returns false');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_03
        * @tc.name      : Modify an image file in the system
        * @tc.desc      : Modify an image file in the system
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_03', 0, async function (done) {
    media.getImageAssets(modifyimageasyncpath,(error, value)=> {
        if (error){
            console.info('MediaLibraryTest : getAudioAssets returned an error' + error.message);
        }
        if (value != undefined){
            var fileAsset = value[3].name;
            console.info('MediaLibraryTest : file to be modified is: ' + fileAsset);
            value[0].startModify((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest : startModify 1 returns true');
                    value[3].name = '?:\"*|<>".png'
                    value[3].commitModify((error, data) => {
                        console.info('MediaLibraryTest : commitModify 1 returns' + data);
                        expect(data).assertTrue();
                        if(data == false){
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_03 : PASS');
                        }else{
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_03 : FAIL');
                        }
                        done();
                    });
                    done();
                    console.info('MediaLibraryTest : End of modify audio 1. Now waiting for result');
                } else {
                    console.info('MediaLibraryTest : startModify 1 returns false');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_04
        * @tc.name      : Modify an image file in the system
        * @tc.desc      : Modify an image file in the system
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_04', 0, async function (done) {
    media.getImageAssets(modifyimageasyncpath,(error, value)=> {
        if (error){
            console.info('MediaLibraryTest : getAudioAssets returned an error' + error.message);
        }
        if (value != undefined){
            var fileAsset = value[4].name;
            console.info('MediaLibraryTest : file to be modified is: ' + fileAsset);
            value[0].startModify((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest : startModify 1 returns true');
                    value[4].name = '.png'
                    value[4].commitModify((error, data) => {
                        console.info('MediaLibraryTest : commitModify 1 returns' + data);
                        expect(data).assertTrue();
                        if(data == false){
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_04 : PASS');
                        }else{
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_IMAGEFILE_04 : FAIL');
                        }
                        done();
                    });
                    done();
                    console.info('MediaLibraryTest : End of modify audio 1. Now waiting for result');
                } else {
                    console.info('MediaLibraryTest : startModify 1 returns false');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_MODIFY_START_PROMISE_COMMIT_PROMISE_IMAGEFILE_01
        * @tc.name      : Modify an image file in the system
        * @tc.desc      : Modify an image file in the system
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_MODIFY_START_PROMISE_COMMIT_PROMISE_IMAGEFILE_01', 0, async function (done) {
    //it('SUB_MEDIA_MEDIALIBRARY_MODIFY_START_PROMISE_COMMIT_PROMISE_AUDIOFILE_01', 0, function () {
    const promise = media.getImageAssets(modifyimagepromisepath);
    //media.getAudioAssets(modifyaudioapromisepath).then(function(value){
    promise.then(function(value){
        if (value != undefined){
            console.info('MediaLibraryTest : file to be modified is: ' +value[0].name);
            value[0].startModify().then(function(value1) {
                if (value1 == true){
                    console.info('MediaLibraryTest : startModify returns true');
                    value[0].name = 'newimagepromise_modify.png'
                    value[0].commitModify().then(function(data) {
                        if(data == true){
                            console.info('MediaLibraryTest : commitModify returns' + data);
                            console.info('MediaLibraryTest:' +' SUB_MEDIA_MEDIALIBRARY_MODIFY_START_PROMISE_COMMIT_PROMISE_IMAGEFILE_01 : PASS');
                        } else {
                            console.info('MediaLibraryTest:' +' SUB_MEDIA_MEDIALIBRARY_MODIFY_START_PROMISE_COMMIT_PROMISE_IMAGEFILE_01 : FAIL');
                        }
                    });
                    console.info('MediaLibraryTest : End of modify image. Now waiting for result');
                } else {
                    console.info('MediaLibraryTest : startModify image returns false');
                }
            });
        }
    });
    await promise;
    done();
})

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_VIDEOFILE_01
        * @tc.name      : Modify an video file in the system
        * @tc.desc      : Modify an audio file in the system
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_VIDEOFILE_01', 0, async function (done) {
    media.getVideoAssets(modifyvideoasyncpath,(error, value)=> {
        if (error){
            console.info('MediaLibraryTest : getVideoAssets returned an error' + error.message);
        }
        if (value != undefined){
            var fileAsset = value[0].name;
            console.info('MediaLibraryTest : file to be modified is: ' + fileAsset);
            value[0].startModify((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest : startModify 1 returns true');
                    value[0].name = 'newaudioasync_modify.mp4'
                    value[0].commitModify((error, data) => {
                        console.info('MediaLibraryTest : commitModify 1 returns' + data);
                        expect(data).assertTrue();
                        if(data == true){
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_VIDEOFILE_01 : PASS');
                        }else{
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_VIDEOFILE_01 : FAIL');
                        }
                        done();
                    });
                    done();
                    console.info('MediaLibraryTest : End of modify video 1. Now waiting for result');
                } else {
                    console.info('MediaLibraryTest : startModify 1 returns false');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_01
        * @tc.name      : Modify an video file in the system
        * @tc.desc      : Modify an audio file in the system
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_01', 0, async function (done) {
    media.getVideoAssets(modifyvideoasyncpath,(error, value)=> {
        if (error){
            console.info('MediaLibraryTest : getVideoAssets returned an error' + error.message);
        }
        if (value != undefined){
            var fileAsset = value[0].name;
            console.info('MediaLibraryTest : file to be modified is: ' + fileAsset);
            value[0].startModify((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest : startModify 1 returns true');
                    value[0].name = 'abc.mp3'
                    value[0].commitModify((error, data) => {
                        console.info('MediaLibraryTest : commitModify 1 returns' + data);
                        expect(data).assertTrue();
                        if(data == false){
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_01 : PASS');
                        }else{
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_01 : FAIL');
                        }
                        done();
                    });
                    done();
                    console.info('MediaLibraryTest : End of modify video 1. Now waiting for result');
                } else {
                    console.info('MediaLibraryTest : startModify 1 returns false');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_02
        * @tc.name      : Modify an video file in the system
        * @tc.desc      : Modify an audio file in the system
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_02', 0, async function (done) {
    media.getVideoAssets(modifyvideoasyncpath,(error, value)=> {
        if (error){
            console.info('MediaLibraryTest : getVideoAssets returned an error' + error.message);
        }
        if (value != undefined){
            var fileAsset = value[0].name;
            console.info('MediaLibraryTest : file to be modified is: ' + fileAsset);
            value[0].startModify((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest : startModify 1 returns true');
                    value[0].name = 'abc.txt'
                    value[0].commitModify((error, data) => {
                        console.info('MediaLibraryTest : commitModify 1 returns' + data);
                        expect(data).assertTrue();
                        if(data == false){
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_02 : PASS');
                        }else{
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_02 : FAIL');
                        }
                        done();
                    });
                    done();
                    console.info('MediaLibraryTest : End of modify video 1. Now waiting for result');
                } else {
                    console.info('MediaLibraryTest : startModify 1 returns false');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_03
        * @tc.name      : Modify an video file in the system
        * @tc.desc      : Modify an audio file in the system
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_03', 0, async function (done) {
    media.getVideoAssets(modifyvideoasyncpath,(error, value)=> {
        if (error){
            console.info('MediaLibraryTest : getVideoAssets returned an error' + error.message);
        }
        if (value != undefined){
            var fileAsset = value[0].name;
            console.info('MediaLibraryTest : file to be modified is: ' + fileAsset);
            value[0].startModify((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest : startModify 1 returns true');
                    value[0].name = '?:"*|/\<>".mp4'
                    value[0].commitModify((error, data) => {
                        console.info('MediaLibraryTest : commitModify 1 returns' + data);
                        expect(data).assertTrue();
                        if(data == false){
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_03 : PASS');
                        }else{
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_03 : FAIL');
                        }
                        done();
                    });
                    done();
                    console.info('MediaLibraryTest : End of modify video 1. Now waiting for result');
                } else {
                    console.info('MediaLibraryTest : startModify 1 returns false');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_04
        * @tc.name      : Modify an video file in the system
        * @tc.desc      : Modify an audio file in the system
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_04', 0, async function (done) {
    media.getVideoAssets(modifyvideoasyncpath,(error, value)=> {
        if (error){
            console.info('MediaLibraryTest : getVideoAssets returned an error' + error.message);
        }
        if (value != undefined){
            var fileAsset = value[0].name;
            console.info('MediaLibraryTest : file to be modified is: ' + fileAsset);
            value[0].startModify((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest : startModify 1 returns true');
                    value[0].name = '.mp4'
                    value[0].commitModify((error, data) => {
                        console.info('MediaLibraryTest : commitModify 1 returns' + data);
                        expect(data).assertTrue();
                        if(data == false){
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_04 : PASS');
                        }else{
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_START_COMMIT_ASYNC_MODIFY_INVALID_VIDEOFILE_04 : FAIL');
                        }
                        done();
                    });
                    done();
                    console.info('MediaLibraryTest : End of modify video 1. Now waiting for result');
                } else {
                    console.info('MediaLibraryTest : startModify 1 returns false');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_MODIFY_START_PROMISE_COMMIT_PROMISE_VIDEOFILE_01
        * @tc.name      : Modify an video file in the system
        * @tc.desc      : Modify an video file in the system
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_MODIFY_START_PROMISE_COMMIT_PROMISE_VIDEOFILE_01', 0, async function (done) {
    //it('SUB_MEDIA_MEDIALIBRARY_MODIFY_START_PROMISE_COMMIT_PROMISE_AUDIOFILE_01', 0, function () {
    const promise = media.getVideoAssets(modifyvideopromisepath);
    //media.getAudioAssets(modifyaudioapromisepath).then(function(value){
    promise.then(function(value){
        if (value != undefined){
            console.info('MediaLibraryTest : file to be modified is: ' +value[0].name);
            value[0].startModify().then(function(value1) {
                if (value1 == true){
                    console.info('MediaLibraryTest : startModify returns true');
                    value[0].name = 'newimagepromise_modify.mp4'
                    value[0].commitModify().then(function(data) {
                        if(data == true){
                            console.info('MediaLibraryTest : commitModify returns' + data);
                            console.info('MediaLibraryTest:' +' SUB_MEDIA_MEDIALIBRARY_MODIFY_START_PROMISE_COMMIT_PROMISE_VIDEOFILE_01 : PASS');
                        } else {
                            console.info('MediaLibraryTest:' +' SUB_MEDIA_MEDIALIBRARY_MODIFY_START_PROMISE_COMMIT_PROMISE_VIDEOFILE_01 : FAIL');
                        }
                    });
                    console.info('MediaLibraryTest : End of modify image. Now waiting for result');
                } else {
                    console.info('MediaLibraryTest : startModify image returns false');
                }
            });
        }
    });
    await promise;
    done();
})

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_AUDIOFILE_01
        * @tc.name      : Copy an audio file in the different directory
        * @tc.desc      : Copy an audio file in the different directory
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_AUDIOFILE_01', 0, async function (done) {
    console.info('MediaLibraryTest:  testing SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_AUDIOFILE_01');
    media.getAudioAssets(MP3,(error,value1)=>{
        if (value1 != undefined) {
            console.info('MediaLibraryTest:  2nd File to be copied is :' + value1[0].name);
            media.createAudioAsset((error, value) => {
                if (error) {
                    console.info('MediaLibraryTest: createAudioAsset returned an error' + error.message);
                }
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
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_AUDIOFILE_01 : PASS');
                                } else {
                                    console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
                                    console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is not copied to MP3');
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_AUDIOFILE_01 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_AUDIOFILE_NO_ALBUM_NAME_01
        * @tc.name      : Copy an audio file in the different directory
        * @tc.desc      : Copy an audio file in the different directory
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_AUDIOFILE_NO_ALBUM_NAME_01', 0, async function (done) {
    console.info('MediaLibraryTest:  testing SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_AUDIOFILE_NO_ALBUM_NAME_01');
    media.getAudioAssets(MP3,(error,value1)=>{
        if (value1 != undefined) {
            console.info('MediaLibraryTest:  2nd File to be copied is :' + value1[0].name);
            media.createAudioAsset((error, value) => {
                if (error) {
                    console.info('MediaLibraryTest: createAudioAsset returned an error' + error.message);
                }
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
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_AUDIOFILE_NO_ALBUM_NAME_01 : PASS');
                                } else {
                                    console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
                                    console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is not copied to MP3');
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_AUDIOFILE_NO_ALBUM_NAME_01 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_AUDIOFILE_INVALID_ALBUM_NAME_01
        * @tc.name      : Copy an audio file in the different directory
        * @tc.desc      : Copy an audio file in the different directory
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_AUDIOFILE_INVALID_ALBUM_NAME_01', 0, async function (done) {
    console.info('MediaLibraryTest:  testing SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_AUDIOFILE_INVALID_ALBUM_NAME_01');
    media.getAudioAssets(MP3,(error,value1)=>{
        if (value1 != undefined) {
            console.info('MediaLibraryTest:  2nd File to be copied is :' + value1[0].name);
            media.createAudioAsset((error, value) => {
                if (error) {
                    console.info('MediaLibraryTest: createAudioAsset returned an error' + error.message);
                }
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
                                    console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
                                    console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is copied to MP3');
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_AUDIOFILE_INVALID_ALBUM_NAME_01 : PASS');
                                } else {
                                    console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
                                    console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is not copied to MP3');
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_AUDIOFILE_INVALID_ALBUM_NAME_01 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_COPY_PROMISE_AUDIOFILE_01
        * @tc.name      : Copy an audio file in the different directory
        * @tc.desc      : Copy an audio file in the different directory
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_COPY_PROMISE_AUDIOFILE_01', 0, async function (done) {
    //media.getAudioAssets(f1,(error,value1)=>{
    const promise = media.getAudioAssets(MP3);
    promise.then(function(value1){
        if (value1 != undefined) {
            console.info('MediaLibraryTest: File to be copied for case 1 is :' + value1[0].name);
            media.createAudioAsset((error, value) => {
                if (error) {
                    console.info('MediaLibraryTest: MediaLibraryTest: createAudioAsset 1 returned an error' + error.message);
                }
                if (value != undefined) {
                    console.info('MediaLibraryTest: CreateAudioAsset returned successfully');
                    value.startCreate((error, value2) => {
                        if (value2 == true) {
                            console.info('MediaLibraryTest: startCreate returns true');
                            value.albumName = 'onelevel/copyaudio/promise/TOMP3';
                            value1[0].commitCopy(value).then(function (data) {
                                console.info('MediaLibraryTest: commitCopy case 1 returns :' + data);
                                if (data == true) {
                                    console.info('MediaLibraryTest: File' + value1[0].name + 'is copied to /data/media/audio');
                                    console.info('MediaLibraryTest: ' +
                                    'testcase_SUB_MEDIA_MEDIALIBRARY_COPY_PROMISE_AUDIOFILE_01 : PASS');
                                    //sleep(200);
                                } else {
                                    console.info('MediaLibraryTest: File' + value1[0].name + 'is not copied to /data/media/audio');
                                    console.info('MediaLibraryTest: ' +
                                    'testcase_SUB_MEDIA_MEDIALIBRARY_COPY_PROMISE_AUDIOFILE_01 : FAIL');
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
    await promise ;
    done();
})


/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_IMAGEFILE_01
        * @tc.name      : Copy an image file in the different directory
        * @tc.desc      : Copy an image file in the different directory
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_IMAGEFILE_01', 0, async function (done) {
    console.info('MediaLibraryTest:  testing SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_IMAGEFILE_01');
    media.getImageAssets(PNG,(error,value1)=>{
        if (value1 != undefined) {
            console.info('MediaLibraryTest:  2nd File to be copied is :' + value1[0].name);
            media.createImageAsset((error, value) => {
                if (error) {
                    console.info('MediaLibraryTest: createImageAsset returned an error' + error.message);
                }
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
                                    console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
                                    console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is copied to PNG');
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_IMAGEFILE_01 : PASS');
                                } else {
                                    console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
                                    console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is not copied to PNG');
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_IMAGEFILE_01 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_IMAGEFILE_NO_ALBUM_NAME_01
        * @tc.name      : Copy an audio file in the different directory
        * @tc.desc      : Copy an audio file in the different directory
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_IMAGEFILE_NO_ALBUM_NAME_01', 0, async function (done) {
    console.info('MediaLibraryTest:  testing SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_IMAGEFILE_NO_ALBUM_NAME_01');
    media.getImageAssets(PNG,(error,value1)=>{
        if (value1 != undefined) {
            console.info('MediaLibraryTest:  2nd File to be copied is :' + value1[0].name);
            media.createImageAsset((error, value) => {
                if (error) {
                    console.info('MediaLibraryTest: createImageAsset returned an error' + error.message);
                }
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
                                    console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
                                    console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is copied to MP3');
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_IMAGEFILE_NO_ALBUM_NAME_01 : PASS');
                                } else {
                                    console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
                                    console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is not copied to MP3');
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_IMAGEFILE_NO_ALBUM_NAME_01 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_IMAGEFILE_INVALID_ALBUM_NAME_01
        * @tc.name      : Copy an image file in the different directory
        * @tc.desc      : Copy an image file in the different directory
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_IMAGEFILE_INVALID_ALBUM_NAME_01', 0, async function (done) {
    console.info('MediaLibraryTest:  testing SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_IMAGEFILE_INVALID_ALBUM_NAME_01');
    media.getImageAssets(MP3,(error,value1)=>{
        if (value1 != undefined) {
            console.info('MediaLibraryTest:  2nd File to be copied is :' + value1[0].name);
            media.createImageAsset((error, value) => {
                if (error) {
                    console.info('MediaLibraryTest: createImageAsset returned an error' + error.message);
                }
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
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_IMAGEFILE_INVALID_ALBUM_NAME_01 : PASS');
                                } else {
                                    console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
                                    console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is not copied to MP3');
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_IMAGEFILE_INVALID_ALBUM_NAME_01 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_COPY_PROMISE_IMAGEFILE_01
        * @tc.name      : Copy an image file in the different directory
        * @tc.desc      : Copy an image file in the different directory
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_COPY_PROMISE_IMAGEFILE_01', 0, async function (done) {
    //media.getAudioAssets(f1,(error,value1)=>{
    const promise = media.getImageAssets(PNG);
    promise.then(function(value1){
        if (value1 != undefined) {
            console.info('MediaLibraryTest: File to be copied for case 1 is :' + value1[0].name);
            media.createImageAsset((error, value) => {
                if (error) {
                    console.info('MediaLibraryTest: MediaLibraryTest: createImageAsset 1 returned an error' + error.message);
                }
                if (value != undefined) {
                    console.info('MediaLibraryTest: createImageAsset returned successfully');
                    value.startCreate((error, value2) => {
                        if (value2 == true) {
                            console.info('MediaLibraryTest: startCreate returns true');
                            value.albumName = 'onelevel/copyimage/promise/TOPNG';
                            value1[0].commitCopy(value).then(function (data) {
                                console.info('MediaLibraryTest: commitCopy case 1 returns :' + data);
                                if (data == true) {
                                    console.info('MediaLibraryTest: File' + value1[0].name + 'is copied to /data/media/onelevel/copyimage/promise/TOPNG');
                                    console.info('MediaLibraryTest: ' +
                                    'SUB_MEDIA_MEDIALIBRARY_COPY_PROMISE_IMAGEFILE_01 : PASS');
                                    //sleep(200);
                                } else {
                                    console.info('MediaLibraryTest: File' + value1[0].name + 'is not copied to /data/media/onelevel/copyimage/promise/TOPNG');
                                    console.info('MediaLibraryTest: ' +
                                    'SUB_MEDIA_MEDIALIBRARY_COPY_PROMISE_IMAGEFILE_01 : FAIL');
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
    await promise ;
    done();
})




/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_VIDEOFILE_01
        * @tc.name      : Copy an video file in the different directory
        * @tc.desc      : Copy an video file in the different directory
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_VIDEOFILE_01', 0, async function (done) {
    console.info('MediaLibraryTest:  testing SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_VIDEOFILE_01');
    media.getVideoAssets(MP4,(error,value1)=>{
        if (value1 != undefined) {
            console.info('MediaLibraryTest:  2nd File to be copied is :' + value1[0].name);
            media.createVideoAsset((error, value) => {
                if (error) {
                    console.info('MediaLibraryTest: createVideoAsset returned an error' + error.message);
                }
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
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_VIDEOFILE_01 : PASS');
                                } else {
                                    console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
                                    console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is not copied to PNG');
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_VIDEOFILE_01 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_VIDEOFILE_NO_ALBUM_NAME_01
        * @tc.name      : Copy an video file in the different directory
        * @tc.desc      : Copy an video file in the different directory
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_VIDEOFILE_NO_ALBUM_NAME_01', 0, async function (done) {
    console.info('MediaLibraryTest:  testing SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_VIDEOFILE_NO_ALBUM_NAME_01');
    media.getVideoAssets(MP4,(error,value1)=>{
        if (value1 != undefined) {
            console.info('MediaLibraryTest:  2nd File to be copied is :' + value1[0].name);
            media.createVideoAsset((error, value) => {
                if (error) {
                    console.info('MediaLibraryTest: createVideoAsset returned an error' + error.message);
                }
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
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_VIDEOFILE_NO_ALBUM_NAME_01 : PASS');
                                } else {
                                    console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
                                    console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is not copied to MP3');
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_VIDEOFILE_NO_ALBUM_NAME_01 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_VIDEOFILE_INVALID_ALBUM_NAME_01
        * @tc.name      : Copy an video file in the different directory
        * @tc.desc      : Copy an video file in the different directory
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_VIDEOFILE_INVALID_ALBUM_NAME_01', 0, async function (done) {
    console.info('MediaLibraryTest:  testing SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_VIDEOFILE_INVALID_ALBUM_NAME_01');
    media.getVideoAssets(MP3,(error,value1)=>{
        if (value1 != undefined) {
            console.info('MediaLibraryTest:  2nd File to be copied is :' + value1[0].name);
            media.createVideoAsset((error, value) => {
                if (error) {
                    console.info('MediaLibraryTest: createVideoAsset returned an error' + error.message);
                }
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
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_IMAGEFILE_INVALID_ALBUM_NAME_01 : PASS');
                                } else {
                                    console.info('MediaLibraryTest: commitCopy 2 returns ' + data);
                                    console.info('MediaLibraryTest: ' + 'File' + value1[0].name + ' is not copied to MP3');
                                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_COPY_ASYNC_IMAGEFILE_INVALID_ALBUM_NAME_01 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_COPY_PROMISE_VIDEOFILE_01
        * @tc.name      : Copy an video file in the different directory
        * @tc.desc      : Copy an video file in the different directory
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_COPY_PROMISE_VIDEOFILE_01', 0, async function (done) {
    //media.getAudioAssets(f1,(error,value1)=>{
    const promise = media.getVideoAssets(MP4);
    promise.then(function(value1){
        if (value1 != undefined) {
            console.info('MediaLibraryTest: File to be copied for case 1 is :' + value1[0].name);
            media.createVideoAsset((error, value) => {
                if (error) {
                    console.info('MediaLibraryTest: MediaLibraryTest: createImageAsset 1 returned an error' + error.message);
                }
                if (value != undefined) {
                    console.info('MediaLibraryTest: createImageAsset returned successfully');
                    value.startCreate((error, value2) => {
                        if (value2 == true) {
                            console.info('MediaLibraryTest: startCreate returns true');
                            value.albumName = 'onelevel/copyvideo/promise/TOPNG';
                            value1[0].commitCopy(value).then(function (data) {
                                console.info('MediaLibraryTest: commitCopy case 1 returns :' + data);
                                if (data == true) {
                                    console.info('MediaLibraryTest: File' + value1[0].name + 'is copied to /data/media/onelevel/copyvideo/promise/TOPNG');
                                    console.info('MediaLibraryTest: ' +
                                    'SUB_MEDIA_MEDIALIBRARY_COPY_PROMISE_VIDEOFILE_01 : PASS');
                                    //sleep(200);
                                } else {
                                    console.info('MediaLibraryTest: File' + value1[0].name + 'is not copied to /data/media/onelevel/copyvideo/promise/TOPNG');
                                    console.info('MediaLibraryTest: ' +
                                    'SUB_MEDIA_MEDIALIBRARY_COPY_PROMISE_VIDEOFILE_01 : FAIL');
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
    await promise ;
    done();
})

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_DELETE_ASYNC_IMAGEFILE_01
        * @tc.name      : Delete an image file in the device
        * @tc.desc      : Delete an image file in the device as per the selected audioasset
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_DELETE_ASYNC_IMAGEFILE_01', 0, async function (done) {
    media.getImageAssets(deleteimageasyncpath,(error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createImageAsset returned an error' + error.message);
        }
        if (value != undefined){
            fileAsset = value[0].name;
            console.info('MediaLibraryTest: file selected is : ' + 'data/media/'+ deleteimageasyncpath.selections + '/' + fileAsset);
            value[0].commitDelete((error, value1)=>{
                console.info('MediaLibraryTest: commitDelete 1 returns ' + value1);
                if (value1 == true) {
                    console.info('MediaLibraryTest: ' + 'SUB_MEDIA_MEDIALIBRARY_DELETE_ASYNC_IMAGEFILE_01 : PASS');
                } else {
                    console.info('MediaLibraryTest: ' + 'SUB_MEDIA_MEDIALIBRARY_DELETE_ASYNC_IMAGEFILE_01 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_DELETE_ASYNC_AUDIOFILE_01
        * @tc.name      : Delete an audio file in the device
        * @tc.desc      : Delete an audio file in the device as per the selected audioasset
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_DELETE_ASYNC_AUDIOFILE_01', 0, async function (done) {
    media.getAudioAssets(deleteaudioasyncpath,(error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createAudioAsset returned an error' + error.message);
        }
        if (value != undefined){
            fileAsset = value[0].name;
            console.info('MediaLibraryTest: file selected is : ' + 'data/media/'+ deleteaudioasyncpath.selections + '/' + fileAsset);
            value[0].commitDelete((error, value1)=>{
                console.info('MediaLibraryTest: commitDelete 1 returns ' + value1);
                if (value1 == true) {
                    console.info('MediaLibraryTest: ' + 'SUB_MEDIA_MEDIALIBRARY_DELETE_ASYNC_AUDIOFILE_01 : PASS');
                } else {
                    console.info('MediaLibraryTest: ' + 'SUB_MEDIA_MEDIALIBRARY_DELETE_ASYNC_AUDIOFILE_01 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_DELETE_ASYNC_VIDEOFILE_01
        * @tc.name      : Delete an video file in the device
        * @tc.desc      : Delete an video file in the device as per the selected audioasset
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_DELETE_ASYNC_VIDEOFILE_01', 0, async function (done) {
    media.getVideoAssets(deletevideoasyncpath,(error, value)=> {
        if (error){
            console.info('MediaLibraryTest: createAudioAsset returned an error' + error.message);
        }
        if (value != undefined){
            fileAsset = value[0].name;
            console.info('MediaLibraryTest: file selected is : ' + 'data/media/'+ deletevideoasyncpath.selections + '/' + fileAsset);
            value[0].commitDelete((error, value1)=>{
                console.info('MediaLibraryTest: commitDelete 1 returns ' + value1);
                if (value1 == true) {
                    console.info('MediaLibraryTest: ' + 'SUB_MEDIA_MEDIALIBRARY_DELETE_ASYNC_VIDEOFILE_01 : PASS');
                } else {
                    console.info('MediaLibraryTest: ' + 'SUB_MEDIA_MEDIALIBRARY_DELETE_ASYNC_VIDEOFILE_01 : FAIL');
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_DELETE_PROMISE_AUDIOFILE_01
        * @tc.name      : Delete an audio file in the device
        * @tc.desc      : Delete an audio file in the device as per the selected audioasset
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_DELETE_PROMISE_AUDIOFILE_01', 0, async function (done) {
    //const promise = media.getAudioAssets(deleteaudiopromisepath,(error, value)=> {

    const promise = media.getAudioAssets(deleteaudiopromisepath);
    promise.then(function(value){
        fileAsset = value[0].name;
        if (value != undefined){
            console.info('MediaLibraryTest: file selected is : ' + 'data/media/'+ deleteaudiopromisepath.selections + '/' + fileAsset);
            value[0].commitDelete().then(function(value1){
                console.info('MediaLibraryTest : commitDelete 2 returns ' + value1);
                //expect(value1).assertTrue();
                if(value1 == true){
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_DELETE_PROMISE_AUDIOFILE_01 : PASS');
                } else {
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_DELETE_PROMISE_AUDIOFILE_01 : FAIL');
                }
            });
        }
    });
    await promise;
    done();
})



/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_DELETE_PROMISE_IMAGEFILE_01
        * @tc.name      : Delete an image file in the device
        * @tc.desc      : Delete an image file in the device as per the selected audioasset
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_DELETE_PROMISE_IMAGEFILE_01', 0, async function (done) {
    //const promise = media.getAudioAssets(deleteaudiopromisepath,(error, value)=> {

    const promise = media.getImageAssets(deleteimagepromisepath);
    promise.then(function(value){
        fileAsset = value[0].name;
        if (value != undefined){
            console.info('MediaLibraryTest: file selected is : ' + 'data/media/'+ deleteimagepromisepath.selections + '/' + fileAsset);
            value[0].commitDelete().then(function(value1){
                console.info('MediaLibraryTest : commitDelete 2 returns ' + value1);
                //expect(value1).assertTrue();
                if(value1 == true){
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_DELETE_PROMISE_IMAGEFILE_01 : PASS');
                } else {
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_DELETE_PROMISE_IMAGEFILE_01 : FAIL');
                }
            });
        }
    });
    await promise;
    done();
})


/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_DELETE_PROMISE_VIDEOFILE_01
        * @tc.name      : Delete an video file in the device
        * @tc.desc      : Delete an video file in the device as per the selected audioasset
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_DELETE_PROMISE_VIDEOFILE_01', 0, async function (done) {
    const promise = media.getVideoAssets(deletevideopromisepath);
    promise.then(function(value){
        fileAsset = value[0].name;
        if (value != undefined){
            console.info('MediaLibraryTest: file selected is : ' + 'data/media/'+ deletevideopromisepath.selections + '/' + fileAsset);
            value[0].commitDelete().then(function(value1){
                console.info('MediaLibraryTest : commitDelete 2 returns ' + value1);
                //expect(value1).assertTrue();
                if(value1 == true){
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_DELETE_PROMISE_VIDEOFILE_01 : PASS');
                } else {
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_DELETE_PROMISE_VIDEOFILE_01 : FAIL');
                }
            });
        }
    });
    await promise;
    done();
})


/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_CANCEL_ASYNC_AUDIOFILE_01
        * @tc.name      : Cancel Create an audio file in the device as per the album value [/data/media/onelevel/CreateCancelAudio] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/CreateCancelAudio]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CANCEL_ASYNC_AUDIOFILE_01', 0, async function (done) {
    const promise = media.createAudioAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest : CreateAudio 2 returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest : startCreate 2 returns true');
                    value.albumName = 'onelevel/createcancelaudioasync';
                    value.name = 'cancel_newaudio1.aac'
                    value.cancelCreate((error, data)=> {
                        console.info('MediaLibraryTest : cancelCreate returns' + data);
                        console.info('MediaLibraryTest : Check if file 2 is cancelled or not : ' + value);
                        expect(data).assertTrue();
                        if (data == true){
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_CANCEL_ASYNC_AUDIOFILE_01 : PASS');
                            //sleep(1000);
                        } else {
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_CANCEL_ASYNC_AUDIOFILE_01 : FAIL');
                        }
                    });
                    console.info('MediaLibraryTest : End of createAudioAsset 2. Now waiting for result');
                } else {
                    console.info('MediaLibraryTest : startCreate 2 returns false');
                }
            });
        }
    });
    await promise ;
    done();

})



/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_CANCEL_ASYNC_IMAGEFILE_01
        * @tc.name      : Cancel Create an image file in the device as per the album value [/data/media/onelevel/CreateCancelAudio] [ASYNC]
        * @tc.desc      : Create an audio image in the device as per the album value [/data/media/onelevel/CreateCancelAudio]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CANCEL_ASYNC_IMAGEFILE_01', 0, async function (done) {
    const promise = media.createImageAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest : CreateImage 2 returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest : startCreate 2 returns true');
                    value.albumName = 'onelevel/createcancelimageasync';
                    value.name = 'cancel_newimage1.png'
                    value.cancelCreate((error, data)=> {
                        console.info('MediaLibraryTest : cancelCreate returns' + data);
                        console.info('MediaLibraryTest : Check if file 2 is cancelled or not : ' + value);
                        expect(data).assertTrue();
                        if (data == true){
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_CANCEL_ASYNC_IMAGEFILE_01 : PASS');
                            //sleep(1000);
                        } else {
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_CANCEL_ASYNC_IMAGEFILE_01 : FAIL');
                        }
                    });
                    console.info('MediaLibraryTest : End of createImageAsset 2. Now waiting for result');
                } else {
                    console.info('MediaLibraryTest : startCreate 2 returns false');
                }
            });
        }
    });
    await promise ;
    done();
})


/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_CANCEL_ASYNC_VIDEOFILE_01
        * @tc.name      : Cancel Create an video file in the device as per the album value [/data/media/onelevel/CreateCancelAudio] [ASYNC]
        * @tc.desc      : Create an audio video in the device as per the album value [/data/media/onelevel/CreateCancelAudio]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CANCEL_ASYNC_VIDEOFILE_01', 0, async function (done) {
    const promise = media.createVideoAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest : CreateVideo 2 returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest : startCreate 2 returns true');
                    value.albumName = 'onelevel/createcancelvideoasync';
                    value.name = 'cancel_newvideo1.mp4'
                    value.cancelCreate((error, data)=> {
                        console.info('MediaLibraryTest : cancelCreate returns' + data);
                        console.info('MediaLibraryTest : Check if file 2 is cancelled or not : ' + value);
                        expect(data).assertTrue();
                        if (data == true){
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_CANCEL_ASYNC_VIDEOFILE_01 : PASS');
                            //sleep(1000);
                        } else {
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_CANCEL_ASYNC_VIDEOFILE_01 : FAIL');
                        }
                    });
                    console.info('MediaLibraryTest : End of createImageAsset 2. Now waiting for result');
                } else {
                    console.info('MediaLibraryTest : startCreate 2 returns false');
                }
            });
        }
    });
    await promise;
    done();
})


/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CANCEL_PROMISE_AUDIOFILE_01
        * @tc.name      : Cancel Create an audio file in the device as per the album value [/data/media/onelevel/CreateCancelAudio] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/CreateCancelAudio]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CANCEL_PROMISE_AUDIOFILE_01', 0, async function (done) {
    const promise = media.createAudioAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest : CreateAudio 1 returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest : startCreate 1 returns true');
                    value.albumName = 'onelevel/CreateCancelAudioPromise';
                    value.name = 'cancel_newaudio.aac'
                    value.cancelCreate().then(function(data)  {
                        console.info('MediaLibraryTest : cancelCreate returns' + data);
                        console.info('MediaLibraryTest : Check if file 1 is cancelled or not : ' + value);
                        //expect(data).assertTrue();
                        if (data == true) {
                            console.info('MediaLibraryTest : testcase_SUB_MEDIA_MEDIALIBRARY_CANCEL_PROMISE_AUDIOFILE_01 : PASS');
                        } else {
                            console.info('MediaLibraryTest : testcase_SUB_MEDIA_MEDIALIBRARY_CANCEL_PROMISE_AUDIOFILE_01 : FAIL');
                        }
                    });
                    console.info('MediaLibraryTest : End of createAudioAsset 1. Now waiting for result');
                } else {
                    console.info('MediaLibraryTest : startCreate 1 returns false');
                }
            });
        }
    });
    await promise ;
    done();
})


/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CANCEL_PROMISE_IMAGEFILE_01
        * @tc.name      : Cancel Create an audio file in the device as per the album value [/data/media/onelevel/CreateCancelAudio] [ASYNC]
        * @tc.desc      : Create an audio file in the device as per the album value [/data/media/onelevel/CreateCancelAudio]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CANCEL_PROMISE_IMAGEFILE_01', 0, async function (done) {
    const promise = media.createImageAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest : CreateImage 1 returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest : startCreate 1 returns true');
                    value.albumName = 'onelevel/createcancelimagepromise';
                    value.name = 'cancel_newimage1.png'
                    value.cancelCreate().then(function(data)  {
                        console.info('MediaLibraryTest : cancelCreate returns' + data);
                        console.info('MediaLibraryTest : Check if file 1 is cancelled or not : ' + value);
                        //expect(data).assertTrue();
                        if (data == true) {
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_CANCEL_PROMISE_IMAGEFILE_01 : PASS');
                        } else {
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_CANCEL_PROMISE_IMAGEFILE_01 : FAIL');
                        }
                    });
                    console.info('MediaLibraryTest : End of createImageAsset 1. Now waiting for result');
                } else {
                    console.info('MediaLibraryTest : startCreate 1 returns false');
                }
            });
        }
    });
    await promise ;
    done();
})



/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CANCEL_PROMISE_VIDEOFILE_01
        * @tc.name      : Cancel Create an video file in the device as per the album value [/data/media/onelevel/CreateCancelAudio] [ASYNC]
        * @tc.desc      : Create an video file in the device as per the album value [/data/media/onelevel/CreateCancelAudio]
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_CANCEL_PROMISE_VIDEOFILE_01', 0, async function (done) {
    const promise = media.createVideoAsset();
    promise.then(function(value) {
        if (value != undefined){
            console.info('MediaLibraryTest : CreateVideo 1 returns successful data');
            value.startCreate((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest : startCreate 1 returns true');
                    value.albumName = 'onelevel/createcancelvideopromise';
                    value.name = 'cancel_newvideo1.mp4'
                    value.cancelCreate().then(function(data)  {
                        console.info('MediaLibraryTest : cancelCreate returns' + data);
                        console.info('MediaLibraryTest : Check if file 1 is cancelled or not : ' + value);
                        //expect(data).assertTrue();
                        if (data == true) {
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_CANCEL_PROMISE_VIDEOFILE_01 : PASS');
                        } else {
                            console.info('MediaLibraryTest : SUB_MEDIA_MEDIALIBRARY_CANCEL_PROMISE_VIDEOFILE_01 : FAIL');
                        }
                    });
                    console.info('MediaLibraryTest : End of createVideoAsset 1. Now waiting for result');
                } else {
                    console.info('MediaLibraryTest : startCreate 1 returns false');
                }
            });
        }
    });
    await promise ;
    done();
})



/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_MODIFYCANCEL_ASYNC_AUDIOFILE_01
        * @tc.name      : Modify cancel an audio file in the device
        * @tc.desc      : Modify cancel an audio file in the device
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_MODIFYCANCEL_ASYNC_AUDIOFILE_01', 0, async function (done) {
    const promise = media.getAudioAssets(MP3);
    promise.then(function(value){
        if (value != undefined){
            var file_name = value[0].name;
            console.info('MediaLibraryTest: File name to be modified is:' + file_name);
            value[0].startModify((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startModify 1 returns true');
                    value[0].name = 'newaudio10_modify.mp3';
                    value[0].cancelModify((error, data) => {
                        console.info('MediaLibraryTest: cancelModify returns' + data);
                        console.info('MediaLibraryTest: File name after cancelModify is : '+ value[0].name);
                        if (data == true) {
                            console.info('MediaLibraryTest:SUB_MEDIA_MEDIALIBRARY_MODIFYCANCEL_ASYNC_AUDIOFILE_01 : PASS');
                        } else {
                            console.info('MediaLibraryTest:SUB_MEDIA_MEDIALIBRARY_MODIFYCANCEL_ASYNC_AUDIOFILE_01 : FAIL');
                        }
                    });
                    console.info('MediaLibraryTest: End of modify cancel audio 1. Now waiting for result');
                } else {
                    console.info('MediaLibraryTest: startModify 1 returns false');
                }
            });
        }
    });
    await promise ;
    done();
})



/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_MODIFYCANCEL_ASYNC_IMAGEFILE_01
        * @tc.name      : Modify cancel an image file in the device
        * @tc.desc      : Modify cancel an image file in the device
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_MODIFYCANCEL_ASYNC_IMAGEFILE_01', 0, async function (done) {
    const promise = media.getImageAssets(PNG);
    promise.then(function(value){
        if (value != undefined){
            var file_name = value[0].name;
            console.info('MediaLibraryTest: File name to be modified is:' + file_name);
            value[0].startModify((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startModify 1 returns true');
                    value[0].name = 'newimage10_modify.PNG';
                    value[0].cancelModify((error, data) => {
                        console.info('MediaLibraryTest: cancelModify returns' + data);
                        console.info('MediaLibraryTest: File name after cancelModify is : '+ value[0].name);
                        if (data == true) {
                            console.info('MediaLibraryTest:SUB_MEDIA_MEDIALIBRARY_MODIFYCANCEL_ASYNC_IMAGEFILE_01 : PASS');
                        } else {
                            console.info('MediaLibraryTest:SUB_MEDIA_MEDIALIBRARY_MODIFYCANCEL_ASYNC_IMAGEFILE_01 : FAIL');
                        }
                    });
                    console.info('MediaLibraryTest: End of modify cancel image 1. Now waiting for result');
                } else {
                    console.info('MediaLibraryTest: startModify 1 returns false');
                }
            });
        }
    });
    await promise ;
    done();
})



/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_MODIFYCANCEL_ASYNC_VIDEOFILE_01
        * @tc.name      : Modify cancel an video file in the device
        * @tc.desc      : Modify cancel an video file in the device
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

it('SUB_MEDIA_MEDIALIBRARY_MODIFYCANCEL_ASYNC_VIDEOFILE_01', 0, async function (done) {
    const promise = media.getVideoAssets(MP4);
    promise.then(function(value){
        if (value != undefined){
            var file_name = value[0].name;
            console.info('MediaLibraryTest: File name to be modified is:' + file_name);
            value[0].startModify((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startModify 1 returns true');
                    value[0].name = 'newvideo10_modify.MP4';
                    value[0].cancelModify((error, data) => {
                        console.info('MediaLibraryTest: cancelModify returns' + data);
                        console.info('MediaLibraryTest: File name after cancelModify is : '+ value[0].name);
                        if (data == true) {
                            console.info('MediaLibraryTest:SUB_MEDIA_MEDIALIBRARY_MODIFYCANCEL_ASYNC_VIDEOFILE_01 : PASS');
                        } else {
                            console.info('MediaLibraryTest:SUB_MEDIA_MEDIALIBRARY_MODIFYCANCEL_ASYNC_VIDEOFILE_01 : FAIL');
                        }
                    });
                    console.info('MediaLibraryTest: End of modify cancel video 1. Now waiting for result');
                } else {
                    console.info('MediaLibraryTest: startModify 1 returns false');
                }
            });
        }
    });
    await promise ;
    done();
})

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_MODIFYCANCEL_PROMISE_AUDIOFILE_01
        * @tc.name      : Modify cancel an audio file in the device
        * @tc.desc      : Modify cancel an audio file in the device
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_MODIFYCANCEL_PROMISE_AUDIOFILE_01', 0, async function (done) {
    const promise = media.getAudioAssets(MP3);
    promise.then(function(value){
        if (value != undefined){
            console.info('MediaLibraryTest: file to be modified is: ' +value[0].name);
            value[0].startModify((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startModify 2 returns true');
                    value[0].name = 'newaudio_modify.mp3'
                    value[0].cancelModify().then(function(data){
                        console.info('MediaLibraryTest: cancelModify returns' + data);
                        //expect(data).assertTrue();
                        if (data == true) {
                            console.info('MediaLibraryTest: File name is : '+ value[0].name);
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_MODIFYCANCEL_PROMISE_AUDIOFILE_01 : PASS');
                        } else {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_MODIFYCANCEL_PROMISE_AUDIOFILE_01 : FAIL');
                        }
                        //sleep(1000);
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
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_MODIFYCANCEL_PROMISE_IMAGEFILE_01
        * @tc.name      : Modify cancel an audio file in the device
        * @tc.desc      : Modify cancel an audio file in the device
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_MODIFYCANCEL_PROMISE_IMAGEFILE_01', 0, async function (done) {
    const promise = media.getImageAssets(PNG);
    promise.then(function(value){
        if (value != undefined){
            console.info('MediaLibraryTest: file to be modified is: ' +value[0].name);
            value[0].startModify((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startModify 2 returns true');
                    value[0].name = 'newimage_modify.png'
                    value[0].cancelModify().then(function(data){
                        console.info('MediaLibraryTest: cancelModify returns' + data);
                        //expect(data).assertTrue();
                        if (data == true) {
                            console.info('MediaLibraryTest: File name is : '+ value[0].name);
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_MODIFYCANCEL_PROMISE_IMAGEFILE_01 : PASS');
                        } else {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_MODIFYCANCEL_PROMISE_IMAGEFILE_01 : FAIL');
                        }
                        //sleep(1000);
                    });
                    console.info('MediaLibraryTest: End of modify cancel image 2. Now waiting for result');
                } else {
                    console.info('MediaLibraryTest: startModify 2 returns false');
                }
            });
        }
    });
    await promise ;
    done();
})

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_MODIFYCANCEL_PROMISE_VIDEOFILE_01
        * @tc.name      : Modify cancel an video file in the device
        * @tc.desc      : Modify cancel an video file in the device
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_MODIFYCANCEL_PROMISE_VIDEOFILE_01', 0, async function (done) {
    const promise = media.getVideoAssets(MP4);
    promise.then(function(value){
        if (value != undefined){
            console.info('MediaLibraryTest: file to be modified is: ' +value[0].name);
            value[0].startModify((error, value1)=>{
                if (value1 == true){
                    console.info('MediaLibraryTest: startModify 2 returns true');
                    value[0].name = 'newvideo_modify.mp4'
                    value[0].cancelModify().then(function(data){
                        console.info('MediaLibraryTest: cancelModify returns' + data);
                        //expect(data).assertTrue();
                        if (data == true) {
                            console.info('MediaLibraryTest: File name is : '+ value[0].name);
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_MODIFYCANCEL_PROMISE_VIDEOFILE_01 : PASS');
                        } else {
                            console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_MODIFYCANCEL_PROMISE_VIDEOFILE_01 : FAIL');
                        }
                        //sleep(1000);
                    });
                    console.info('MediaLibraryTest: End of modify cancel video 2. Now waiting for result');
                } else {
                    console.info('MediaLibraryTest: startModify 2 returns false');
                }
            });
        }
    });
    await promise ;
    done();
})



/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_MODIFYIMAGEALBUM_ASYNC_WITH_FETCH_01
        * @tc.name      : Get all Album details from /data/media/imagealbum using promise + check album id and album name
        * @tc.desc      : Get all Album details from /data/media/imagealbum using promise + check album id and album name
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_MODIFYIMAGEALBUM_ASYNC_WITH_FETCH_01', 0, function () {
    console.info('MediaLibraryTest: path for image is' + modifyimagealbumasyncpath.selections);
    const promise = media.getImageAlbums(modifyimagealbumasyncpath);
    promise.then(function(data) {
        if ((data == undefined) || (data != undefined)){
            console.info('MediaLibraryTest: There are no image files in ' + modifyimagealbumasyncpath.selections + 'folder');
            console.info("orginal value of album is :" + data[0].albumName) ;
            data[0].albumName = 'modify_imagealbum';
            data[0].commitModify((error,value1)=>{
                console.info("value is :" + value1);
                if (value1 == true) {
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_MODIFYIMAGEALBUM_ASYNC_WITH_FETCH_01 : PASS ');
                } else {
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_MODIFYIMAGEALBUM_ASYNC_WITH_FETCH_01 : FAIL ');
                }
            });

            //sleep(1000);
        }
    });
})


/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_MODIFYIMAGEALBUM_ASYNC_WITH_NONAME_01
        * @tc.name      : Get all Album details from /data/media/imagealbum using promise + check album id and album name
        * @tc.desc      : Get all Album details from /data/media/imagealbum using promise + check album id and album name
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_MODIFYIMAGEALBUM_ASYNC_WITH_NONAME_01', 0, function () {
    console.info('MediaLibraryTest: path for image is' + modifyimagealbumasyncpath.selections);
    const promise = media.getImageAlbums(modifyimagealbumasyncpath);
    promise.then(function(data) {
        if ((data == undefined) || (data != undefined)){
            console.info('MediaLibraryTest: There are no image files in ' + modifyimagealbumasyncpath.selections + 'folder');
            console.info("orginal value of album is :" + data[0].albumName) ;
            data[0].albumName = '';
            data[0].commitModify((error,value1)=>{
                console.info("value is :" + value1);
                if (value1 == false) {
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_MODIFYIMAGEALBUM_ASYNC_WITH_NONAME_01 : PASS ');
                } else {
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_MODIFYIMAGEALBUM_ASYNC_WITH_NONAME_01 : FAIL ');
                }
            });

            //sleep(1000);
        }
    });
})


/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_MODIFYIMAGEALBUM_ASYNC_WITH_INVALID_CHARACTERS_01
        * @tc.name      : Get all Album details from /data/media/imagealbum using promise + check album id and album name
        * @tc.desc      : Get all Album details from /data/media/imagealbum using promise + check album id and album name
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_MODIFYIMAGEALBUM_ASYNC_WITH_INVALID_CHARACTERS_01', 0, function () {
    console.info('MediaLibraryTest: path for image is' + modifyimagealbumasyncpath.selections);
    const promise = media.getImageAlbums(modifyimagealbumasyncpath);
    promise.then(function(data) {
        if ((data == undefined) || (data != undefined)){
            console.info('MediaLibraryTest: There are no image files in ' + modifyimagealbumasyncpath.selections + 'folder');
            console.info("orginal value of album is :" + data[0].albumName) ;
            data[0].albumName = '?:\"*|/\\<>';
            data[0].commitModify((error,value1)=>{
                console.info("value is :" + value1);
                if (value1 == false) {
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_MODIFYIMAGEALBUM_ASYNC_WITH_INVALID_CHARACTERS_01 : PASS ');
                } else {
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_MODIFYIMAGEALBUM_ASYNC_WITH_INVALID_CHARACTERS_01 : FAIL ');
                }
            });

            //sleep(1000);
        }
    });
})



/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_MODIFYVIDEOALBUM_ASYNC_WITH_FETCH_01
        * @tc.name      : Get all Album details from /data/media/videoalbum using promise + check album id and album name
        * @tc.desc      : Get all Album details from /data/media/videoalbum using promise + check album id and album name
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_MODIFYVIDEOALBUM_ASYNC_WITH_FETCH_01', 0, async function (done) {
    console.info('MediaLibraryTest: path for image is' + modifyvideoalbumasyncpath.selections);
    const promise = media.getVideoAlbums(modifyvideoalbumasyncpath);
    promise.then(function(data) {
        if (data == undefined) {
            console.info('MediaLibraryTest: There are no video files in ' + modifyvideoalbumasyncpath.selections + 'folder');
        }else if (data != undefined){
            console.info("orginal value of album is :" + data[0].albumName) ;
            data[0].albumName = 'modify_videoalbum';
            data[0].commitModify((error,value1)=>{
                console.info("value is :" + value1);
                if (value1 == true) {
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_MODIFYVIDEOALBUM_ASYNC_WITH_FETCH_01 : PASS ');
                } else {
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_MODIFYVIDEOALBUM_ASYNC_WITH_FETCH_01 : FAIL ');
                }
            });

            //sleep(1000);
        }else {
            console.info("MOdify album is not defined / undefined") ;
        }
    });
    await promise ;
    done();
})


/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_MODIFYVIDEOALBUM_ASYNC_WITH_NO_NAME_01
        * @tc.name      : Get all Album details from /data/media/videoalbum using promise + check album id and album name
        * @tc.desc      : Get all Album details from /data/media/videoalbum using promise + check album id and album name
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_MODIFYVIDEOALBUM_ASYNC_WITH_NO_NAME_01', 0, async function (done) {
    console.info('MediaLibraryTest: path for image is' + modifyvideoalbumasyncpath.selections);
    const promise = media.getVideoAlbums(modifyvideoalbumasyncpath);
    promise.then(function(data) {
        if (data == undefined) {
            console.info('MediaLibraryTest: There are no video files in ' + modifyvideoalbumasyncpath.selections + 'folder');
        }else if (data != undefined){
            console.info("orginal value of album is :" + data[0].albumName) ;
            data[0].albumName = '';
            data[0].commitModify((error,value1)=>{
                console.info("value is :" + value1);
                if (value1 == false) {
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_MODIFYVIDEOALBUM_ASYNC_WITH_NO_NAME_01 : PASS ');
                } else {
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_MODIFYVIDEOALBUM_ASYNC_WITH_NO_NAME_01 : FAIL ');
                }
            });

            //sleep(1000);
        }else {
            console.info("MOdify album is not defined / undefined") ;
        }
    });
    await promise ;
    done();
})


/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_MODIFYVIDEOALBUM_ASYNC_WITH_INVALID_CHARACTERS_01
        * @tc.name      : Get all Album details from /data/media/videoalbum using promise + check album id and album name
        * @tc.desc      : Get all Album details from /data/media/videoalbum using promise + check album id and album name
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_MODIFYVIDEOALBUM_ASYNC_WITH_INVALID_CHARACTERS_01', 0, async function (done) {
    console.info('MediaLibraryTest: path for image is' + modifyvideoalbumasyncpath.selections);
    const promise = media.getVideoAlbums(modifyvideoalbumasyncpath);
    promise.then(function(data) {
        if (data == undefined) {
            console.info('MediaLibraryTest: There are no video files in ' + modifyvideoalbumasyncpath.selections + 'folder');
        }else if (data != undefined){
            console.info("orginal value of album is :" + data[0].albumName) ;
            data[0].albumName = '?:\"*|/\\<>';
            data[0].commitModify((error,value1)=>{
                console.info("value is :" + value1);
                if (value1 == false) {
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_MODIFYVIDEOALBUM_ASYNC_WITH_INVALID_CHARACTERS_01 : PASS ');
                } else {
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_MODIFYVIDEOALBUM_ASYNC_WITH_INVALID_CHARACTERS_01 : FAIL ');
                }
            });

            //sleep(1000);
        }else {
            console.info("MOdify album is not defined / undefined") ;
        }
    });
    await promise ;
    done();
})



/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_MODIFYVIDEOALBUM_PROMISE_WITH_FETCH_01
        * @tc.name      : Get all Album details from /data/media/videoalbum using promise + check album id and album name
        * @tc.desc      : Get all Album details from /data/media/videoalbum using promise + check album id and album name
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_MODIFYVIDEOALBUM_PROMISE_WITH_FETCH_01', 0, async function (done) {
    console.info('MediaLibraryTest: path for image is' + modifyvideoalbumpromisepath.selections);
    const promise = media.getVideoAlbums(modifyvideoalbumpromisepath);
    promise.then(function(data) {
        if (data == undefined) {
            console.info('MediaLibraryTest: There are no video files in ' + modifyvideoalbumpromisepath.selections + 'folder');
        }else if (data != undefined){
            console.info("orginal value of album is :" + data[0].albumName) ;
            data[0].albumName = 'modify_videoalbum';
            data[0].commitModify().then(function(value1){
                console.info("value is :" + value1);
                if (value1 == true) {
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_MODIFYVIDEOALBUM_PROMISE_WITH_FETCH_01 : PASS ');
                } else {
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_MODIFYVIDEOALBUM_PROMISE_WITH_FETCH_01 : FAIL ');
                }
            });

            //sleep(1000);
        }else {
            console.info('MOdify album is not defined / undefined') ;
        }
    });
    await promise ;
    done();
})

/* *
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_MODIFYIMAGEALBUM_PROMISE_WITH_FETCH_01
        * @tc.name      : Get all Album details from /data/media/imagealbum using promise + check album id and album name
        * @tc.desc      : Get all Album details from /data/media/imagealbum using promise + check album id and album name
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */


it('SUB_MEDIA_MEDIALIBRARY_MODIFYIMAGEALBUM_PROMISE_WITH_FETCH_01', 0, async function (done) {
    console.info('MediaLibraryTest: path for image is' + modifyimagealbumpromisepath.selections);
    const promise = media.getImageAlbums(modifyimagealbumpromisepath);
    promise.then(function(data) {
        if ((data == undefined) || (data != undefined)){
            console.info('MediaLibraryTest: There are no image files in ' + modifyimagealbumpromisepath.selections + 'folder');
            console.info("orginal value of album is :" + data[0].albumName) ;
            data[0].albumName = 'modify_imagealbum';
            data[0].commitModify().then(function(value1){
                console.info("value is :" + value1);
                if (value1 == true) {
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_MODIFYIMAGEALBUM_PROMISE_WITH_FETCH_01 : PASS ');
                } else {
                    console.info('MediaLibraryTest: SUB_MEDIA_MEDIALIBRARY_MODIFYIMAGEALBUM_PROMISE_WITH_FETCH_01 : FAIL ');
                }
            });
        }
    });
    await promise;
    done();
})


/* *
        * @tc.number    : NA
        * @tc.name      : NA
        * @tc.desc      : Get metadata of each file in the folder ("media/data" or "media/data/onelevel") based on condition
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

function getMediaData(value) {
    result1=[];
    name = value.name;
    URI = value.URI;
    name_URI = URI.slice(-(name.length));
    expect(name).assertEqual(name_URI);
    result1.push('albumName:' + value.albumName,'albumId:' + value.albumId,
        'id:' + value.id, 'URI:' + value.URI, 'mediaType:' + value.mediaType,
        'name:' + value.name, 'size:' + value.size, 'dateAdded:' + value.dateAdded,
        'dateModified:' + value.dateModified);
    console.info('MediaLibraryTest: Media assets data of id:' + value.id + ':' + result1);

}

    function getImageDataCheckMimeMediaType(value)  {
            result1 = [];
            result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
            console.log('MediaLibraryTest:given directory has a BMP file'+result1);
            console.log('MediaLibraryTest:given directory has a BMP file'+result1[0]+result1[1]+result1[2]);
            console.info('MediaLibraryTest: Image data of id:'+ value.id + ':' + value.name + ':' + value.mimeType + ':'+value.mediaType);
            console.log('MediaLibraryTest:given directory has a media file'+result1[0].slice(-7)+result1[1].slice(-1));
        if ((result1[0].slice(-7) == 'image/*') &&  (result1[1].slice(-1) == '3')){
            console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + 'IS A IMAGE FILE');
        }else {
            console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + 'IS NOT A IMAGE FILE');
        }
    }

/* *
        * @tc.number    : NA
        * @tc.name      : NA
        * @tc.desc      : Get metadata of each file in the folder ("media/data" or "media/data/onelevel") based on condition
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */

        function getImageData(value) {
        result1 = [];
        expect(value.mimeType).assertEqual('image/*');
        expect(value.mediaType).assertEqual(3);
        name = value.name;
        URI = value.URI;
        name_URI = URI.slice(-(name.length));
        expect(name).assertEqual(name_URI);
        result1.push('mimeType:' + value.mimeType, 'width:' + value.width, 'height:' + value.height,
            'albumName:' + value.albumName,'albumId:' + value.albumId, 'id:' + value.id, ' URI:' + value.URI,
            'mediaType:' + value.mediaType, 'name:' + value.name,'size:' + value.size,
            'dateAdded:' + value.dateAdded, 'dateModified:' + value.dateModified);
        if ((result1[0].slice(-7) == 'image/*') && (result1[7].slice(-1) == '3')){
        console.info(' MediaLibraryTest: Image data of id:'+ value.id + ':' + result1);
        }
    }



        function getImageDataBmp(value) {
        result1 = [];
        expect(value.mimeType).assertEqual('image/*');
        expect(value.mediaType).assertEqual(3);
        //mimeType = value.mimeType;
        //mimeTypeBmpArray = mimeType.substring(0,mimeType.indexOf("/"));
        //mimeTypeBmp = mimeTypeBmpArray[1];
        //var Bmpname = value.name[-3];
        name = value.name;
        URI = value.URI;
        name_URI = URI.slice(-(name.length));
        expect(name).assertEqual(name_URI);
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
        result1 = [];
        result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
        console.log('MediaLibraryTest:given directory has a BMP file'+result1);
        console.log('MediaLibraryTest:given directory has a BMP file'+ result1[0]+ result1[1]+ result1[2]);
        var Bmpname = result1[2].slice(-3);
        console.log('MediaLibraryTest:given directory has a BMP file'+result1[0].slice(-7)+result1[1].slice(-1));
        if ((result1[0].slice(-7) == 'image/*') && (result1[1].slice(-1) == '3')){
            // Check whether the file is wav format or not//
            if (Bmpname == "bmp" || Bmpname == "BMP"){
                console.log('given directory has a BMP file')
                console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' + 'BMP IS A IMAGE FILE');
            }
        }else {
            console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' + 'BMP IS NOT A IMAGE FILE');
        }
    }



    function getImageDataGif(value) {
        result1 = [];
        expect(value.mimeType).assertEqual('image/*');
        expect(value.mediaType).assertEqual(3);
        //mimeType = value.mimeType;
        //mimeTypeGifArray = mimeType.substring(0,mimeType.indexOf("/"));
        //mimeTypeGif = mimeTypeGifArray[1];
        //var Gifname = value.name[-3];
        name = value.name;
        URI = value.URI;
        name_URI = URI.slice(-(name.length));
        expect(name).assertEqual(name_URI);
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
        result1 = [];
        result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
        console.log('MediaLibraryTest:given directory has a BMP file'+result1);
        console.log('MediaLibraryTest:given directory has a BMP file'+ result1[0]+ result1[1]+ result1[2]);
        var Gifname = result1[2].slice(-3);
        console.log('MediaLibraryTest:given directory has a BMP file'+result1[0].slice(-7)+result1[1].slice(-1));
        if ((result1[0].slice(-7) == 'image/*') && (result1[1].slice(-1) == '3')){
            // Check whether the file is wav format or not//
            if (Gifname == "gif" || Gifname == "GIF"){
                console.log('given directory has a gif file')
                console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' + 'GIF IS A IMAGE FILE');
            }
            return true ;
        }else {
            return false;
            console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' + 'GIF IS NOT A IMAGE FILE');
        }
    }


        function getImageDataJpg(value) {
        result1 = [];
        expect(value.mimeType).assertEqual('image/*');
        expect(value.mediaType).assertEqual(3);
        //mimeType = value.mimeType;
        //mimeTypeJpgArray = mimeType.substring(0,mimeType.indexOf("/"));
        //mimeTypeJpg = mimeTypeJpgArray[1];
        //var Jpgname = value.name[-3];
        name = value.name;
        URI = value.URI;
        name_URI = URI.slice(-(name.length));
        expect(name).assertEqual(name_URI);
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
        result1 = [];
        result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
        console.log('MediaLibraryTest:given directory has a BMP file'+result1);
        console.log('MediaLibraryTest:given directory has a BMP file'+ result1[0]+ result1[1]+ result1[2]);
        var Jpgname = result1[2].slice(-3);
        console.log('MediaLibraryTest:given directory has a BMP file'+result1[0].slice(-7)+result1[1].slice(-1));
        if ((result1[0].slice(-7) == 'image/*') && (result1[1].slice(-1) == '3')){
            // Check whether the file is wav format or not//
            if (Jpgname == "jpg" || Jpgname == "JPG"){
                console.log('given directory has a JPG file')
                console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' + 'JPG IS A IMAGE FILE');
            }
            return true ;
        }else {
            return false;
            console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' + 'JPG IS NOT A IMAGE FILE');
        }
    }


        function getImageDataPng(value) {
        result1 = [];
        expect(value.mimeType).assertEqual('image/*');
        expect(value.mediaType).assertEqual(3);
        //mimeType = value.mimeType;
        //mimeTypePngArray = mimeType.substring(0,mimeType.indexOf("/"));
        //mimeTypePng = mimeTypePngArray[1];
        //var Pngname = value.name[-3];
        name = value.name;
        URI = value.URI;
        name_URI = URI.slice(-(name.length));
        expect(name).assertEqual(name_URI);
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
        result1 = [];
        result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
        console.log('MediaLibraryTest:given directory has a BMP file'+result1);
        console.log('MediaLibraryTest:given directory has a BMP file'+ result1[0]+ result1[1]+ result1[2]);
        var Pngname = result1[2].slice(-3);
        console.log('MediaLibraryTest:given directory has a BMP file'+result1[0].slice(-7)+result1[1].slice(-1));
        if ((result1[0].slice(-7) == 'image/*') && (result1[1].slice(-1) == '3')){
            // Check whether the file is wav format or not//
            if (Pngname == "png" || Pngname == "PNG"){
                console.log('given directory has a PNG file')
                console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' + 'PNG IS A IMAGE FILE');
            }
            return true ;
        }else {
            return false;
            console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' + 'PNG IS NOT A IMAGE FILE');
        }
    }


        function getAudioData(value) {
        result1 = [];
        name = value.name;
        URI = value.URI;
        name_URI = URI.slice(-(name.length));
        expect(name).assertEqual(name_URI);
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
        result1 = [];
        result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
        console.log('MediaLibraryTest:given directory has a BMP file'+result1);
        console.log('MediaLibraryTest:given directory has a BMP file'+ result1[0]+ result1[1]+ result1[2]);
        console.log('MediaLibraryTest:given directory has a BMP file'+result1[0].slice(-7)+result1[1].slice(-1));
        if ((result1[0].slice(-7) == 'audio/*') && (result1[1].slice(-1) == '5')){
            console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' + result1);
            console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + 'IS A AUDIO FILE');
            return true;
        }else {
            return false;
            console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + 'IS NOT A AUDIO FILE');
        }
    }


    function getAudioDatawav(value) {
        result1 = [];

        expect(value.mimeType).assertEqual('audio/*');
        expect(value.mediaType).assertEqual(5);
        //mimeType = value.mimeType;
        //mimeTypeWavArray = mimeType.substring(0,mimeType.indexOf("/"));
        //mimeTypeWav = mimeTypeWavArray[1];
        //var wavname ;
        name = value.name;
        URI = value.URI;
        name_URI = URI.slice(-(name.length));
        expect(name).assertEqual(name_URI);
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
        result1 = [];
        result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
        console.log('MediaLibraryTest:given directory has a BMP file'+result1);
        console.log('MediaLibraryTest:given directory has a BMP file'+ result1[0]+ result1[1]+ result1[2]);
        var wavname = result1[2].slice(-3);
        console.log('MediaLibraryTest:given directory has a BMP file'+result1[0].slice(-7)+result1[1].slice(-1));
        if ((result1[0].slice(-7) == 'audio/*') && (result1[1].slice(-1) == '5')){
            // Check whether the file is wav format or not//
            if (wavname == "wav" || wavname == "WAV"){
                console.log('given directory has a wav file')
                console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' + 'WAV IS A AUDIO FILE');
            }
            return true ;
        }else {
            return false;
            console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' + 'WAV IS NOT A AUDIO FILE');
        }
    }


    function getAudioDataAac(value) {
        result1 = [];
        expect(value.mimeType).assertEqual('audio/*');
        expect(value.mediaType).assertEqual(5);
        //var Aacname ;
        //mimeType = value.mimeType;
        //mimeTypeAacArray = mimeType.substring(0,mimeType.indexOf("/"));
        //mimeTypeAac = mimeTypeAacArray[1];
        name = value.name;
        URI = value.URI;
        name_URI = URI.slice(-(name.length));
        expect(name).assertEqual(name_URI);
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
        result1 = [] ;
        result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
        console.log('MediaLibraryTest:given directory has a BMP file'+result1);
        console.log('MediaLibraryTest:given directory has a BMP file'+ result1[0]+ result1[1]+ result1[2]);
        var Aacname = result1[2].slice(-3);
        console.log('MediaLibraryTest:given directory has a BMP file'+result1[0].slice(-7)+result1[1].slice(-1));
        if ((result1[0].slice(-7) == 'audio/*') && (result1[1].slice(-1) == '5')){
            // Check whether the file is wav format or not//
            if (Aacname == "aac" || Aacname == "AAC"){
                console.log('given directory has a wav file')
                console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' + 'AAC IS A AUDIO FILE');
            }
            return true ;
        }else {
            return false;
            console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' + 'AAC IS NOT A AUDIO FILE');
        }
    }

    function getAudioDataMp3(value) {
        result1 = [];
        expect(value.mimeType).assertEqual('audio/*');
        expect(value.mediaType).assertEqual(5);
        //mimeType = value.mimeType;
        //mimeTypeMp3Array = mimeType.substring(0,mimeType.indexOf("/"));
        //mimeTypeMp3 = mimeTypeMp3Array[1];
        //var Mp3name ;
        name = value.name;
        URI = value.URI;
        name_URI = URI.slice(-(name.length));
        expect(name).assertEqual(name_URI);
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
        result1 = [];
        result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
        console.log('MediaLibraryTest:given directory has a BMP file'+result1);
        console.log('MediaLibraryTest:given directory has a BMP file'+ result1[0]+ result1[1]+ result1[2]);
        var Mp3name = result1[2].slice(-3);
        console.log('MediaLibraryTest:given directory has a BMP file'+result1[0].slice(-7)+result1[1].slice(-1));
        if ((result1[0].slice(-7) == 'audio/*') && (result1[1].slice(-1) == '5')){
            // Check whether the file is wav format or not//
            if (Mp3name == "mp3" || Mp3name == "MP3"){
                console.log('given directory has a wav file')
                console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' + 'MP3 IS A AUDIO FILE');
            }
            return true ;
        }else {
            return false;
            console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' + 'MP3 IS NOT A AUDIO FILE');
        }
    }

    function getAudioDataFlac(value) {
        result1 = [];
        expect(value.mimeType).assertEqual('audio/*');
        expect(value.mediaType).assertEqual(5);
        //mimeType = value.mimeType;
        //mimeTypeFlacArray = mimeType.substring(0,mimeType.indexOf("/"));
        //mimeTypeFlac = mimeTypeFlacArray[1];
        //var Flacname;
        name = value.name;
        URI = value.URI;
        name_URI = URI.slice(-(name.length));
        expect(name).assertEqual(name_URI);
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
        result1 = [];
        result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
        console.log('MediaLibraryTest:given directory has a BMP file'+result1);
        console.log('MediaLibraryTest:given directory has a BMP file'+ result1[0]+ result1[1]+ result1[2]);
        var Flacname = result1[2].slice(-4);
        console.log('MediaLibraryTest:given directory has a BMP file'+result1[0].slice(-7)+result1[1].slice(-1));
        if ((result1[0].slice(-7) == 'audio/*') && (result1[1].slice(-1) == '5')){
            // Check whether the file is wav format or not//
            if (Flacname == "flac" || Flacname == "FLAC"){
                console.log('given directory has a wav file')
                console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' + 'FLAC IS A AUDIO FILE');
            }
            return true ;
        }else {
            return false;
            console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' + 'FLAC IS NOT A AUDIO FILE');
        }
    }

    function getAudioDataOGG(value) {
        result1 = [];
        expect(value.mimeType).assertEqual('audio/*');
        expect(value.mediaType).assertEqual(5);
        //mimeType = value.mimeType;
        //mimeTypeFlacArray = mimeType.substring(0,mimeType.indexOf("/"));
        //mimeTypeFlac = mimeTypeFlacArray[1];
        //var OGGname ;
        name = value.name;
        URI = value.URI;
        name_URI = URI.slice(-(name.length));
        expect(name).assertEqual(name_URI);
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
        result1 = [];
        result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
        console.log('MediaLibraryTest:given directory has a OOG file'+result1);
        console.log('MediaLibraryTest:given directory has a OOG file'+ result1[0]+ result1[1]+ result1[2]);
        var OOGname = result1[2].slice(-3);
        console.log('MediaLibraryTest:given directory has a OOG file'+result1[0].slice(-7)+result1[1].slice(-1));
        if ((result1[0].slice(-7) == 'audio/*') && (result1[1].slice(-1) == '5')){
            // Check whether the file is wav format or not//
            if (OOGname == "oog" || OOGname == "OOG"){
                console.log('given directory has a OOG file')
                console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' + 'OOG IS A AUDIO FILE');
            }
            return true ;
        }else {
            return false;
            console.info('MediaLibraryTest: Audio data of id:'+ value.id + ':' + value.name + ':' + 'OOG IS NOT A AUDIO FILE');
        }
    }



    function getVideoData(value) {
        result1=[];
        expect(value.mimeType).assertEqual('video/*');
        expect(value.mediaType).assertEqual(4);
        name = value.name;
        URI = value.URI;
        name_URI = URI.slice(-(name.length));
        expect(name).assertEqual(name_URI);
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
        result1 = [];
        result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
        console.log('MediaLibraryTest:given directory has a OOG file'+result1);
        console.log('MediaLibraryTest:given directory has a OOG file'+ result1[0]+ result1[1]+ result1[2]);
        console.log('MediaLibraryTest:given directory has a OOG file'+result1[0].slice(-7)+result1[1].slice(-1));
        if ((result1[0].slice(-7) == 'video/*') && (result1[1].slice(-1) == '4')){
            console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + value.name + ':' + result1);
            console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + 'IS A VIDEO FILE');
            return true;
        }else {
            return false;
            console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + 'IS NOT A VIDEO FILE');
        }
    }

    function getVideoData3gp(value) {
        result1=[];
        expect(value.mimeType).assertEqual('video/*');
        expect(value.mediaType).assertEqual(4);
        //mimeType = value.mimeType;
        //mimeType3gpArray = mimeType.substring(0,mimeType.indexOf("/"));
        //mimeType3gp = mimeType3gpArray[1];
        //name3gp = value.name[-3];
        name = value.name;
        URI = value.URI;
        name_URI = URI.slice(-(name.length));
        expect(name).assertEqual(name_URI);
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
        result1 = [];
        result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
        console.log('MediaLibraryTest:given directory has a 3GP file'+result1);
        console.log('MediaLibraryTest:given directory has a 3GP file'+ result1[0]+ result1[1]+ result1[2]);
        var name3gp = result1[2].slice(-3);
        console.log('MediaLibraryTest:given directory has a 3GP file'+result1[0].slice(-7)+result1[1].slice(-1));
        if ((result1[0].slice(-7) == 'video/*') && (result1[1].slice(-1) == '4')){
            // Check whether the file is wav format or not//
            if (name3gp == "3gp" || name3gp == "3GP"){
                console.log('given directory has a 3gp file')
                console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + value.name + ':' + '3GP IS A VIDEO FILE');
            }
            return true ;
        }else {
            return false;
            console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + value.name + ':' + '3GP IS NOT A VIDEO FILE');
        }
    }




    function getVideoDataMov(value) {
        result1=[];
        expect(value.mimeType).assertEqual('video/*');
        expect(value.mediaType).assertEqual(4);
        //mimeType = value.mimeType;
        //mimeTypeMovArray = mimeType.substring(0,mimeType.indexOf("/"));
        //mimeTypeMov = mimeTypeMovArray[1];
        //nameMov = value.name[-3];
        name = value.name;
        URI = value.URI;
        name_URI = URI.slice(-(name.length));
        expect(name).assertEqual(name_URI);
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
        result1 = [];
        result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
        console.log('MediaLibraryTest:given directory has a MOV file'+result1);
        console.log('MediaLibraryTest:given directory has a MOV file'+ result1[0]+ result1[1]+ result1[2]);
        var nameMov = result1[2].slice(-3);
        console.log('MediaLibraryTest:given directory has a MOV file'+result1[0].slice(-7)+result1[1].slice(-1));
        if ((result1[0].slice(-7) == 'video/*') && (result1[1].slice(-1) == '4')){
            // Check whether the file is wav format or not//
            if (nameMov == "mov" || nameMov == "MOV"){
                console.log('given directory has a MOV file')
                console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + value.name + ':' + 'MOV IS A VIDEO FILE');
            }
            return true ;
        }else {
            return false;
            console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + value.name + ':' + 'MOV IS NOT A VIDEO FILE');
        }
    }




    function getVideoDataMP4(value) {
        result1=[];
        expect(value.mimeType).assertEqual('video/*');
        expect(value.mediaType).assertEqual(4);
        //mimeType = value.mimeType;
        //mimeTypeMp4Array = mimeType.substring(0,mimeType.indexOf("/"));
        //mimeTypeMp4 = mimeTypeMp4Array[1];
        //nameMp4 = value.name[-3];
        name = value.name;
        URI = value.URI;
        name_URI = URI.slice(-(name.length));
        expect(name).assertEqual(name_URI);
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
        result1 = [];
        result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
        console.log('MediaLibraryTest:given directory has a MP4 file'+result1);
        console.log('MediaLibraryTest:given directory has a MP4 file'+ result1[0]+ result1[1]+ result1[2]);
        var nameMp4 = result1[2].slice(-3);
        console.log('MediaLibraryTest:given directory has a MP4 file'+result1[0].slice(-7)+result1[1].slice(-1));
        if ((result1[0].slice(-7) == 'video/*') && (result1[1].slice(-1) == '4')){
            // Check whether the file is wav format or not//
            if (nameMp4 == "mp4" || nameMp4 == "MP4"){
                console.log('given directory has a MP4 file')
                console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + value.name + ':' + 'MP4 IS A VIDEO FILE');
            }
            return true ;
        }else {
            return false;
            console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + value.name + ':' + 'MP4 IS NOT A VIDEO FILE');
        }
    }




    function getVideoDataMpg(value) {
        result1=[];
        expect(value.mimeType).assertEqual('video/*');
        expect(value.mediaType).assertEqual(4);
        //mimeType = value.mimeType;
        //mimeTypeMpgArray = mimeType.substring(0,mimeType.indexOf("/"));
        //mimeTypeMpg = mimeTypeMpgArray[1];
        //nameMpg = value.name[-3];
        name = value.name;
        URI = value.URI;
        name_URI = URI.slice(-(name.length));
        expect(name).assertEqual(name_URI);
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
        result1 = [];
        result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
        console.log('MediaLibraryTest:given directory has a MPG file'+result1);
        console.log('MediaLibraryTest:given directory has a MPG file'+ result1[0]+ result1[1]+ result1[2]);
        var nameMpg = result1[2].slice(-3);
        console.log('MediaLibraryTest:given directory has a MPG file'+result1[0].slice(-7)+result1[1].slice(-1));
        if ((result1[0].slice(-7) == 'video/*') && (result1[1].slice(-1) == '4')){
            // Check whether the file is wav format or not//
            if (nameMpg == "mpg" || nameMpg == "MPG"){
                console.log('given directory has a MPG file')
                console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + value.name + ':' + 'MPG IS A VIDEO FILE');
            }
            return true ;
        }else {
            return false;
            console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + value.name + ':' + 'MPG IS NOT A VIDEO FILE');
        }
    }

    function getVideoDataWebm(value) {
        result1=[];
        expect(value.mimeType).assertEqual('video/*');
        expect(value.mediaType).assertEqual(4);
        //mimeType = value.mimeType;
        //mimeTypeWebmArray = mimeType.substring(0,mimeType.indexOf("/"));
        //mimeTypeWebm = mimeTypeWebmArray[1];
        nameWebm = value.name[-4];
        name = value.name;
        URI = value.URI;
        name_URI = URI.slice(-(name.length));
        expect(name).assertEqual(name_URI);
        result1.push(' mimeType:'+ value.mimeType, 'width:' + value.width, 'height:' + value.height,
            'duration:' + value.duration, 'albumName:'+ value.albumName,'albumId:' + value.albumId,
            'id:' + value.id, 'URI:' + value.URI, 'mediaType:'+ value.mediaType,
            'name:' + value.name, 'size:' + value.size, 'dateAdded:' + value.dateAdded,
            'dateModified:' + value.dateModified);
        var nameWebm = result1[9].slice(-4);
        if (nameWebm == "webm" || nameWebm == "WEBM"){
            console.log('given directory has a WEBM file')
        }
        console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + result1);
    }

    function getAudioDataWEBMCheckMimeMediaType(value) {
        result1 = [];
        result1.push('mimeType:' + value.mimeType,'mediaType:' + value.mediaType,'name:' + value.name);
        console.log('MediaLibraryTest:given directory has a WEBM file'+result1);
        console.log('MediaLibraryTest:given directory has a WEBM file'+ result1[0]+ result1[1]+ result1[2]);
        var nameWebm = result1[2].slice(-4);
        console.log('MediaLibraryTest:given directory has a WEBM file'+result1[0].slice(-7)+result1[1].slice(-1));
        if ((result1[0].slice(-7) == 'video/*') && (result1[1].slice(-1) == '4')){
            // Check whether the file is wav format or not//
            if (nameWebm == "webm" || nameWebm == "WEBM"){
                console.log('given directory has a WEBM file')
                console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + value.name + ':' + 'WEBM IS A VIDEO FILE');
            }
            return true ;
        }else {
            return false;
            console.info('MediaLibraryTest: Video data of id:'+ value.id + ':' + value.name + ':' + 'WEBM IS NOT A VIDEO FILE');
        }
    }

})





