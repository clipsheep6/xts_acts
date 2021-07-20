import fileio from "@ohos.fileio"
import bundle_mgr from "@ohos.bundle_mgr"
import file from "@system.file";
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "deccjsunit/index"
import { FILE_CONTENT, prepareFile, fileName, cacheFileName, getFileTextLen, isFileExist, sleep, nextFileName, randomString} from "./Common"


describe("fileTest", function () {
    beforeAll(() => console.info("开始同步接口测试"));
    fileio.mkdirSync("/data/accounts/account_0/appdata/ohos.acts.stroage.fileio/files/cache")
    /**测试mkdir,rmidr空目录,move,copy,delete,access,list,get单文件性能，执行100次*/
    it("File_performance_testing_001", 0, function(){
        console.log("***file性能测试开始***")
        let baseUri = "internal://app/"
        let testName = "File_performance_testing_001"

//        for(let i = 0; i < 1000; i++){
//            let srcFpath = fileName(testName) + i
//            prepareFile(srcFpath,"AAA")
//        }

        let srcFpathUri = baseUri + testName
        let dstFpathUri = baseUri + "cache/" + testName
        let dpathUri = baseUri + testName + "d"
        console.log("***srcFpathUri=" + srcFpathUri)
        console.log("***dstFpathUri=" + dstFpathUri)
        console.log("***dpathUri=" + dpathUri)
        let start0 = new Date().getTime()
//        for(let i = 0; i < 1000; i++){
//            //start0 = new Date().getTime()
//            file.mkdir({uri: dpathUri + i,
//                success: function(){
//                    //console.log("mkdir pass!")
//                    let end0 = new Date().getTime()
//                    let time0 = end0 - start0
//                    console.log("-------filePerformance, mkdir:mkdir, time0:" +time0 + "," + i);
//                    start0 = new Date().getTime()
//                },
//                fail: function(){console.log("mkdir fail!")},})
//
//        }
//        //console.log("-------mkdir 接口测试完成, 测试内容：创建1000个空目录");
//        sleep(10)
//
//        let start1 = new Date().getTime()
//        for(let i = 0; i < 1000; i++){
//
//            file.rmdir({uri: dpathUri + i,
//                success: function(){
//                    //console.log("rmdir pass!")
//                    let end1 = new Date().getTime()
//                    let time1 = end1 - start1
//                    console.log("-------filePerformance, rmdir:rmdir, time1:" +time1 + "," + i);
//                    start1 = new Date().getTime()
//                },
//                fail: function(){console.log("rmdir fail!")},})
//            sleep(10)
//        }
//        //console.log("-------rmdir 接口测试完成, 测试内容：创建1000个空目录");
//        sleep(10)
        let start8 = new Date().getTime()
        for(let i = 0; i < 1000; i++){
            start8 = new Date().getTime()
            file.writeText({uri: srcFpathUri + i,
                text: randomString(200),
                success: function(){
                    //console.log("writeText pass!")
                    let end8 = new Date().getTime()
                    let time8 = end8 - start8
                    console.log("-------filePerformance, writeText:writeText, time8:" +time8 + "," + i);

                },
                fail: function(code){console.log("writeText fail!" + code)},})
        }

//        let start2 = new Date().getTime()
//        for(let i = 0; i < 1000; i++){
//            file.move({srcUri: srcFpathUri + i, dstUri: dstFpathUri + i,
//                success: function(){
//                    //console.log("move pass!")
//                    let end2 = new Date().getTime()
//                    let time2 = end2 - start2
//                    console.log("-------filePerformance, move:move, time2:" +time2 + "," + i);
//                    start2 = new Date().getTime()
//                },
//                fail: function(code){console.log("move fail!" + code)},
//            })
//        }
//
//        let start3 = new Date().getTime()
//        for(let i = 0; i < 1000; i++){
//            file.copy({srcUri: dstFpathUri + i, dstUri: srcFpathUri + i,
//                success: function(){
//                    //console.log("copy pass!")
//                    let end3 = new Date().getTime()
//                    let time3 = end3 - start3
//                    console.log("-------filePerformance, copy:copy, time3:" +time3 + "," + i);
//                    start3 = new Date().getTime()
//                },
//                fail: function(code){console.log("copy fail!" + code)},})
//        }
//
//        let start4 = new Date().getTime()
//        for(let i = 0; i < 1000; i++){
//            file.delete({uri: dstFpathUri + i,
//                success: function(){
//                    //console.log("delete pass!")
//                    let end4 = new Date().getTime()
//                    let time4 = end4 - start4
//                    console.log("-------filePerformance, delete:delete, time4:" +time4 + "," + i);
//                    start4 = new Date().getTime()
//                },
//                fail: function(){console.log("delete fail!")},})
//        }
//
//        let start5 = new Date().getTime()
//        for(let i = 0; i < 1000; i++){
//            file.access({uri: srcFpathUri + i,
//                success: function(){
//                    //console.log("access pass!")
//                    let end5 = new Date().getTime()
//                    let time5 = end5 - start5
//                    console.log("-------filePerformance, access:access, time5:" +time5 + "," + i);
//                    start5 = new Date().getTime()
//                },
//                fail: function(code){console.log("access fail!" + code)},})
//        }


//        let start6 = new Date().getTime()
//        for(let i = 0; i < 1000; i++){
//            file.list({uri: "internal://app",
//                success: function(){console.log("list pass!")},
//                fail: function(code){console.log("list fail!" + code)},})
//        }
//        let end6 = new Date().getTime()
//        let time6 = end6 - start6
//        console.log("-------list 接口测试完成, 测试内容：list1000个文件列表信息");
//        console.log("-------list end6:"+end6+", start6:"+start6+", time6:" +time6);
//        console.log("-------File_performance_testing_001--list()执行1000次平均时间："+time6/1000);
//
//        let start7 = new Date().getTime()
//        for(let i = 0; i < 1000; i++){
//            file.get({uri: srcFpathUri + i,
//                success: function(){console.log("get pass!")},
//                fail: function(){console.log("get fail!")},})
//        }
//        let end7 = new Date().getTime()
//        let time7 = end7 - start7
//        console.log("-------get 接口测试完成, 测试内容：get1000个文件信息");
//        console.log("-------get end7:"+end7+", start7:"+start7+", time7:" +time7);
//        console.log("-------File_performance_testing_001--get()执行1000次平均时间："+time7/1000);

//        let start9 = new Date().getTime()
//        for(let i = 0; i < 1000; i++){
//            file.readText({uri: srcFpathUri + i,
//                success: function(){
//                    //console.log("readText pass!")
//                    let end9 = new Date().getTime()
//                    let time9 = end9 - start9
//                    console.log("-------filePerformance, readText:readText, time9:" +time9 + "," + i);
//                    start9 = new Date().getTime()
//
//                },
//                fail: function(){console.log("readText fail!")},})
//        }
//
//
        let start10 = new Date().getTime()
        for(let i = 0; i < 1000; i++){
            let buf = new Uint8Array(100000);
            for(let i = 0; i < 100000; i++){
                buf[i] = 127
            }
            start10 = new Date().getTime()
            file.writeArrayBuffer({uri: srcFpathUri + i,
                buffer: buf,
                success: function(){
                    //console.log("writeArrayBuffer pass!")
                    let end10 = new Date().getTime()
                    let time10 = end10 - start10
                    console.log("-------filePerformance, writeArrayBuffer: time10:" +time10 + "," + i);
                },
                fail: function(){console.log("writeArrayBuffer fail!")},})
        }

//        let start11 = new Date().getTime()
//        for(let i = 0; i < 1000; i++){
//            file.readArrayBuffer({uri: srcFpathUri + i,
//                success: function(){
//                    //console.log("readArrayBuffer pass!")
//                    let end11 = new Date().getTime()
//                    let time11 = end11 - start11
//                    console.log("-------filePerformance, readArrayBuffer: readArrayBuffer, time11:" +time11 + "," + i);
//                    start11 = new Date().getTime()
//                },
//                fail: function(){console.log("readArrayBuffer fail!")},})
//        }

        for(let i = 0; i < 1000; i++){
            file.delete({uri: srcFpathUri + i})
        }
        console.log("src文件已删除");
    })

    /*File_performance_testing_002 测试move和copy多个文件传输性能 以及rmdir删除非空目录100次 */
//    let timeSum1 = new Array()
//    let timeSum2 = new Array()
//    let timeSum3 = new Array()
//
//    for(let i = 0; i < 100; i++){
//        it('File_performance_testing_002', 0, function(){
//            console.log("----------File_performance_testing_002----------");
//            console.log("测试次数=" + i)
//            let srcDpath = fileName("File_performance_testing_002") + "d1"
//            let dstDpath = fileName("File_performance_testing_002") + "d2"
//            try{
//                fileio.mkdirSync(srcDpath)
//                fileio.mkdirSync(dstDpath)
//            }catch(e){
//                console.log("目录创建失败" + e)
//            }
//            console.log("目录创建完成")
//            for(let i = 0; i < 20; i++){
//                let srcFpath = srcDpath + "/File_performance_testing_002f" + i
//                prepareFile(srcFpath,FILE_CONTENT)
//            }
//            console.log("文件创建完成")
//
//            let start1 = new Date().getTime()
//            for(let i = 0; i < 20; i++){
//                file.move({
//                    srcUri: "internal://app/File_performance_testing_002d1/File_performance_testing_002f" + i,
//                    dstUri: "internal://app/File_performance_testing_002d2/File_performance_testing_002f" + i,
//                    success: function(){console.log("move pass!")},
//                    fail: function(code){console.log("move fail!" + code)},
//                })
//            }
//            let end1 = new Date().getTime()
//            let time1 = end1 - start1
//            timeSum1.push(time1)
//            console.log("-------File_performance_testing_002--move()20个文件执行第"+(i+1)+"次时间："+time1)
//            if(i == 49){
//                let sumTime1 = 0
//                for(let i = 0; i < 100; i++){
//                    sumTime1 = sumTime1 + timeSum1[i]
//                }
//                console.log("-------filePerformance_stream--move执行100次平均时间：" + sumTime1/100);
//            }
//
//            let start2 = new Date().getTime()
//            for(let i = 0; i < 20; i++){
//                file.copy({
//                    srcUri: "internal://app/File_performance_testing_002d2/File_performance_testing_002f" + i,
//                    dstUri: "internal://app/File_performance_testing_002d1/File_performance_testing_002f" + i,
//                    success: function(){console.log("copy pass!")},
//                    fail: function(code){console.log("copy fail!" + code)},
//                })
//            }
//            let end2 = new Date().getTime()
//            let time2 = end2 - start2
//            timeSum2.push(time2)
//            console.log("-------File_performance_testing_002--copy()20个文件执行第"+(i+1)+"次时间："+time2)
//            if(i == 49){
//                let sumTime2 = 0
//                for(let i = 0; i < 100; i++){
//                    sumTime2 = sumTime2 + timeSum2[i]
//                }
//                console.log("-------filePerformance_stream--copy执行100次平均时间：" + sumTime2/100);
//            }
//
//            let start3 = new Date().getTime()
//            file.rmdir({
//                uri: "internal://app/File_performance_testing_002d1", recursive: true,
//                success: function(){
//                    console.log("rmdir pass")
//                },
//                fail: function(data, code){
//                    console.log("rmdir fail" + code + data)
//                }
//            })
//            let end3 = new Date().getTime()
//            let time3 = end3 - start3
//            timeSum3.push(time3)
//            console.log("-------File_performance_testing_002--rmdir()20个文件执行第"+(i+1)+"次时间："+time1)
//            if(i == 49){
//                let sumTime3 = 0
//                for(let i = 0; i < 100; i++){
//                    sumTime3 = sumTime3 + timeSum3[i]
//                }
//                console.log("-------File_performance_testing_002--rmdir执行100次平均时间：" + sumTime3/100);
//            }
//
//            file.rmdir({uri: "internal://app/File_performance_testing_002d2", recursive: true,
//                success: function(){
//                    console.log("rmdir2 pass")
//                },
//                fail: function(data, code){
//                    console.log("rmdir2 fail" + code + data)
//                },})
//            console.log("目录删除完成")
//        })
//    }
})