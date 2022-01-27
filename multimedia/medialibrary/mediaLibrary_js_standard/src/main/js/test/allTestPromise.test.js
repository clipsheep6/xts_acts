import mediaLibrary from '@ohos.multimedia.medialibrary';


import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'
let fileKeyObj = mediaLibrary.FileKey
let AlbumNoArgsfetchOp = {
    selections: "",
    selectionArgs: [],
}
let AlbumHasArgsfetchOp = {
    selections: fileKeyObj.PATH + " LIKE ? ",
    selectionArgs: ["/data/media%"],
}
let type1 = mediaLibrary.MediaType.IMAGE
let fileHasArgsfetchOp = {
    selections: fileKeyObj.MEDIA_TYPE + "= ?",
    selectionArgs: [type1.toString()],
}
let fileNoArgsfetchOp = {
    selections: "",
    selectionArgs: [],
}

describe('favAndTrashSmartAlbum.test.js', function () {

    var fileAsset;


    beforeAll(function () {
        onsole.info('get album beforeAll： Prerequisites at the test suite level, which are executed before the test suite is executed.');

    })

    beforeEach(function () {
        console.info('get album MediaLibraryTest: beforeEach：Prerequisites at the test case level, which are executed before each test case is executed.');

    })
    afterEach(function () {
        console.info('get album MediaLibraryTest: afterEach： Test case-level clearance conditions, which are executed after each test case is executed.');

    })
    afterAll(function () {
        console.info('get album MediaLibraryTest: afterAll：  Test suite-level cleanup condition, which is executed after the test suite is executed');

    })

    /* *
            * @tc.number    : SUB_MEDIA_MEDIALIBRARY_CREATE_ALBUM_01
            * @tc.name      : Create an album in predefined path
            * @tc.desc      : Create an album in predefined path
            * @tc.size      : MEDIUM
            * @tc.type      : Function
            * @tc.level     : Level 0
        */

    it('SUB_MEDIA_MEDIALIBRARY_ALLTEST_PROMISE', 0, async function (done) {
        console.info("mediaLibrary Instance before");
        const media = mediaLibrary.getMediaLibrary();
        console.info("mediaLibrary Instance after");
        //let albumId = 0;
        let mediaType = mediaLibrary.MediaType.IMAGE;
        let path = "Pictures/"
        let pathMove = "Pictures/Move"
        const asset = await media.createAsset(mediaType, "image01.jpg", path);
        const assetMove = await media.createAsset(mediaType, "image01Move.jpg", pathMove);

        console.info('MediaLibraryTest : ALLTEST_PROMISE asset.displayName = ' + asset.displayName);
        console.info('MediaLibraryTest : ALLTEST_PROMISE asset.displayName = ' + asset.title);
        console.info('MediaLibraryTest : ALLTEST_PROMISE assetMove.displayName = ' + assetMove.displayName);
        let relativePath = await media.getPublicDirectory(mediaLibrary.DirectoryType.DIR_IMAGE);
        console.info('MediaLibraryTest : ALLTEST_PROMISE relativePath = ' + relativePath);
        // asset isDirectory,isFavorite,isTrash
        let isDirectory = await asset.isDirectory();
        let isFavorite = await asset.isFavorite();
        let isTrash = await asset.isTrash();
        console.info('MediaLibraryTest : ALLTEST_PROMISE isDirectory = ' + isDirectory);
        console.info('MediaLibraryTest : ALLTEST_PROMISE isFavorite = ' + isFavorite);
        console.info('MediaLibraryTest : ALLTEST_PROMISE Trash = ' + isTrash);
        asset.trash(true, (error, data)=> {
            console.info('MediaLibraryTest : getAsset no args set favourite');
        });
        console.info('MediaLibraryTest : ALLTEST_PROMISE favorite trash');
        asset.favorite(true, (error, data)=> {
            console.info('MediaLibraryTest : getAsset no args set favourite');
        });
        console.info('MediaLibraryTest : ALLTEST_PROMISE favorite success');
        let isFavoriteChange = await asset.isFavorite();
        console.info('MediaLibraryTest : ALLTEST_PROMISE isFavoriteChange = ' + isFavoriteChange);
        let isTrashChange = await asset.isTrash();
        console.info('MediaLibraryTest : ALLTEST_PROMISE isTrashChange = ' + isTrashChange);
        // asset commitModify
        asset.title = "image03";
        asset.relativePath = "Pictures/Move";
        asset.displayName = "image02.jpg"
        await asset.commitModify();
        // asset get All Assets
        let fetchFileResult = await media.getFileAssets(fileNoArgsfetchOp);
        let assetList = await fetchFileResult.getAllObject();
        assetList.forEach(getAllObjectInfo);
        // asset open and close
        asset.open('Rw').then((openError, fd) => {
            if (openError == undefined) {
                console.info('MediaLibraryTest : open : FAIL ' + openError.message);
                console.info('MediaLibraryTest : ALLTEST_PROMISE : FAIL');
                expect(false).assertTrue();
            }
            console.info("==========================fileAsset.open success=======================>");
            console.debug("open success fd = " + JSON.stringify(fd));
            console.info("==========================fileAsset.close begin=======================>");
            fileAsset.close(fd).then((closeErr) => {
                if (closeErr == undefined) {
                    console.info('MediaLibraryTest : close : FAIL ' + closeErr.message);
                    console.info('MediaLibraryTest : ALLTEST_PROMISE : FAIL');
                    expect(false).assertTrue();
                }
                console.info("==========================fileAsset.close success=======================>");
                console.info('MediaLibraryTest : ALLTEST_PROMISE : PASS');
                expect(true).assertTrue();
            });
            console.info("==========================fileAsset.close end=======================>");
        });
        console.info("==========================fileAsset.open end=======================>");
        
        // smartAlbum fav 
        const favSmartAlbums = await media.getPrivateAlbum(mediaLibrary.PrivateAlbumType.TYPE_FAVORITE);
        console.info('MediaLibraryTest : ALLTEST_PROMISE getPrivateAlbum favSmartAlbums');
        console.info('MediaLibraryTest : ALLTEST_PROMISE favSmartAlbums '+ favSmartAlbums[0].albumName);
        console.info('MediaLibraryTest : ALLTEST_PROMISE favSmartAlbums '+ favSmartAlbums[0].albumCapacity);
        let favSmartAlbum = favSmartAlbums[0];
        await favSmartAlbum.addAsset(assetMove.uri);
        console.info('MediaLibraryTest : ALLTEST_PROMISE fav addAsset ');
        let fSmartFetchFileResult = await favSmartAlbum.getFileAssets();
        console.info('MediaLibraryTest : ALLTEST_PROMISE getFileAssets Successfull fSmartFetchFileResult = '
            + fSmartFetchFileResult.getCount());
        await favSmartAlbum.removeAsset(assetMove.uri);
        let fSmartFetchFileResultNew = await favSmartAlbum.getFileAssets();
        console.info('MediaLibraryTest : ALLTEST_PROMISE getFileAssets Successfull remove fSmartFetchFileResultNew = '
            + fSmartFetchFileResultNew.getCount()); 
        // smartAlbum trash 
        const trashSmartAlbums = await media.getPrivateAlbum(mediaLibrary.PrivateAlbumType.TYPE_TRASH);
        console.info('MediaLibraryTest : ALLTEST_PROMISE getPrivateAlbum trashSmartAlbums');
        console.info('MediaLibraryTest : ALLTEST_PROMISE trashSmartAlbums '+ trashSmartAlbums[0].albumName);
        console.info('MediaLibraryTest : ALLTEST_PROMISE trashSmartAlbums '+ trashSmartAlbums[0].albumCapacity);
        let trashSmartAlbum = trashSmartAlbums[0];

        await trashSmartAlbum.addAsset(assetMove.uri);
        console.info('MediaLibraryTest : ALLTEST_PROMISE trash addAsset ');
        let tSmartFetchFileResult = await trashSmartAlbum.getFileAssets();
        console.info('MediaLibraryTest : ALLTEST_PROMISE getFileAssets Successfull tSmartFetchFileResult = '
            + tSmartFetchFileResult.getCount());
        await trashSmartAlbum.removeAsset(assetMove.uri);
        let tSmartFetchFileResultNew = await trashSmartAlbum.getFileAssets();
        console.info('MediaLibraryTest : ALLTEST_PROMISE getFileAssets Successfull remove tSmartFetchFileResultNew = '
            + tSmartFetchFileResultNew.getCount());  
        // smartalbum user
        const smartAlbum = await media.createSmartAlbum("smartAlbum01");
        console.info('MediaLibraryTest : ALLTEST_PROMISE create smartalbum ');
        console.info('MediaLibraryTest : ALLTEST_PROMISE create smartalbum albumCapacity ' + smartAlbum.albumCapacity);
        console.info('MediaLibraryTest : ALLTEST_PROMISE create smartalbum albumuri ' + smartAlbum.albumUri);
        console.info('MediaLibraryTest : ALLTEST_PROMISE create smartalbum albumuri ' + asset.uri);
        smartAlbum.albumName = "newSmartAlbum01";
        await smartAlbum.commitModify();
        console.info('MediaLibraryTest : ALLTEST_PROMISE commitModify ' + smartAlbum.albumName);
        await smartAlbum.addAsset(asset.uri);
        await smartAlbum.addAsset(assetMove.uri);
        console.info('MediaLibraryTest : ALLTEST_PROMISE addAsset ');
        let smartFetchFileResult = await smartAlbum.getFileAssets();
        console.info('MediaLibraryTest : ALLTEST_PROMISE getFileAssets Successfull smartFetchFileResult = '
            + smartFetchFileResult.getCount());
        await smartAlbum.removeAsset(asset.uri);
        await smartAlbum.removeAsset(assetMove.uri);
        let smartFetchFileResultNew = await smartAlbum.getFileAssets();
        console.info('MediaLibraryTest : ALLTEST_PROMISE getFileAssets Successfull smartFetchFileResultNew = '
            + smartFetchFileResultNew.getCount());       
        //album
        let albumList = await media.getAlbums(AlbumNoArgsfetchOp);
        let album = albumList[1];
        album.albumName = "hello";
        await album.commitModify();
        console.info('MediaLibraryTest : ALLTEST_PROMISE album.albumName = ' + album.albumName);
        let albumFetchFileResult = await album.getFileAssets(fileNoArgsfetchOp);
        let albumAssetList = await albumFetchFileResult.getAllObject();
        albumAssetList.forEach(getAllObjectInfo);
        done();
    });
    function getAllObjectInfo(data) {
        if (data != undefined) {
            console.info('MediaLibraryTest : id is ' + data.id);
            console.info('MediaLibraryTest : uri is ' + data.uri);
            console.info('MediaLibraryTest : displayName is ' + data.displayName);
            console.info('MediaLibraryTest : mediaType is ' + data.title);
            console.info('MediaLibraryTest : relativePath is ' + data.relativePath);
        } else {
            console.info('MediaLibraryTest : getAllObjectInfo no assets');
        }
    }
})