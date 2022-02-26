import app from '@system.app'
import motion from "@ohos.motion"
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

describe('MsdpInfoTest', function () {
    console.log("*************Motion Unit Test Begin*************");

    /**
      * @tc.number Motion_001
      * @tc.name Normal value return
      * @tc.desc TYPE_PICKUP
      */
    it('Msdp_Test_Motion_001', 0, async function (done) {
        console.log("Msdp_Test_Motion_001 start");
        motion.on(motion.MotionType.TYPE_PICKUP, (data) => {
            expect(data.motionValue !== -1).assertTrue();
            console.log("Msdp_Test_Motion_001 on success");
            motion.off(motion.MotionType.TYPE_PICKUP,() => {
                done();
                console.log("Msdp_Test_Motion_001 success");
            })
        })
    })

    /**
      * @tc.number Motion_002
      * @tc.name -1 return
      * @tc.desc TYPE_PICKUP
      */
    it('Msdp_Test_Motion_002', 0, async function (done) {
        console.log("Msdp_Test_Motion_002 start");
        motion.on(-1, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_002 success");
        })
    })

    /**
     * @tc.number Motion_003
     * @tc.name Loop 10 times
     * @tc.desc TYPE_PICKUP
    */
    it('Msdp_Test_Motion_003',0, async function(done){
        console.log("Msdp_Test_Motion_003 start");

        for (let i = 0; i < 10 ;i ++) {
            motion.on(motion.MotionType.TYPE_PICKUP,(data) => {
                expect(data.motionValue !== -1).assertTrue()
                console.log("Msdp_Test_Motion_003 on success")
            })
            motion.off(motion.MotionType.TYPE_PICKUP, () => {
                done();
                console.log("Msdp_Test_Motion_003 success");
            })
        }
    })

    /**
     * @tc.number Motion_004
     * @tc.name Ilegal value
     * @tc.desc TYPE_PICKUP
    */
    it('Msdp_Test_Motion_004', 0, async function (done) {
        console.log("Msdp_Test_Motion_004 start");
        motion.on(17, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_004 success");
        })
    })

    /**
      * @tc.number Motion_005
      * @tc.name Normal value return
      * @tc.desc TYPE_PICKUP
      */
    it('Msdp_Test_Motion_005', 0, async function (done) {
        console.log("Msdp_Test_Motion_005 start");
        motion.on(motion.MotionType.TYPE_PICKUP, (data) => {
            expect(data.motionValue !== -1).assertTrue();
            motion.off(motion.MotionType.TYPE_PICKUP,() => {
                console.log("Msdp_Test_Motion_005 off success");
                done();
                console.log("Msdp_Test_Motion_005 success");
            })
        })
    })

    /**
      * @tc.number Motion_006
      * @tc.name -1 return
      * @tc.desc TYPE_PICKUP
      */
    it('Msdp_Test_Motion_006', 0, async function (done) {
        console.log("Msdp_Test_Motion_006 start");
        motion.off(-1, () => {
            done();
            console.log("Msdp_Test_Motion_006 success");
        })
    })

    /**
     * @tc.number Motion_007
     * @tc.name Loop 10 times
     * @tc.desc TYPE_PICKUP
    */
    it('Msdp_Test_Motion_007',0, async function(done){
        console.log("Msdp_Test_Motion_007 start");

        for (let i = 0; i < 10 ;i ++) {
            motion.on(motion.MotionType.TYPE_PICKUP,(data) => {
                expect(data.motionValue !== -1).assertTrue()
            })
            motion.off(motion.MotionType.TYPE_PICKUP, () => {
                console.log("Msdp_Test_Motion_007 off success")
                done();
                console.log("Msdp_Test_Motion_007 success");
            })
        }
    })

    /**
     * @tc.number Motion_008
     * @tc.name Ilegal value
     * @tc.desc TYPE_PICKUP
    */
    it('Msdp_Test_Motion_008', 0, async function (done) {
        console.log("Msdp_Test_Motion_008 start");
        motion.off(17, () => {
            done();
            console.log("Msdp_Test_Motion_008 success");
        })
    })

    /**
      * @tc.number Motion_009
      * @tc.name Normal value return
      * @tc.desc TYPE_PICKUP
      */
    it('Msdp_Test_Motion_009', 0, async function (done) {
        console.log("Msdp_Test_Motion_009 start");
        motion.once(motion.MotionType.TYPE_PICKUP,(data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_009 success");
        })
    })

    /**
      * @tc.number Motion_010
      * @tc.name -1 return
      * @tc.desc TYPE_PICKUP
      */
    it('Msdp_Test_Motion_010', 0, async function (done) {
        console.log("Msdp_Test_Motion_010 start");
        motion.once(-1, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_010 success");
        })
    })

    /**
     * @tc.number Motion_011
     * @tc.name Loop 10 times
     * @tc.desc TYPE_PICKUP
    */
    it('Msdp_Test_Motion_011',0, async function(done){
        console.log("Msdp_Test_Motion_011 start");
        for (let i = 0; i < 10 ;i ++) {
            motion.once(motion.MotionType.TYPE_PICKUP,(data) => {
                expect(data.motionValue == -1).assertTrue();
                done();
                console.log("Msdp_Test_Motion_011 success");
            })
        }
    })

    /**
     * @tc.number Motion_012
     * @tc.name Ilegal value
     * @tc.desc TYPE_PICKUP
    */
    it('Msdp_Test_Motion_012', 0, async function (done) {
        console.log("Msdp_Test_Motion_012 start");
        motion.once(17, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_012 success");
        })
    })

    /**
      * @tc.number Motion_013
      * @tc.name Normal value return
      * @tc.desc TYPE_FLIP
      */
    it('Msdp_Test_Motion_013', 0, async function (done) {
        console.log("Msdp_Test_Motion_013 start");
        motion.on(motion.MotionType.TYPE_FLIP, (data) => {
            expect(data.motionValue !== -1).assertTrue();
            console.log("Msdp_Test_Motion_013 on success");
            motion.off(motion.MotionType.TYPE_FLIP,() => {
                done();
                console.log("Msdp_Test_Motion_013 success");
            })
        })
    })

    /**
      * @tc.number Motion_014
      * @tc.name -1 return
      * @tc.desc TYPE_FLIP
      */
    it('Msdp_Test_Motion_014', 0, async function (done) {
        console.log("Msdp_Test_Motion_014 start");
        motion.on(-1, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_014 success");
        })
    })

    /**
     * @tc.number Motion_015
     * @tc.name Loop 10 times
     * @tc.desc TYPE_FLIP
    */
    it('Msdp_Test_Motion_015',0, async function(done){
        console.log("Msdp_Test_Motion_015 start");

        for (let i = 0; i < 10 ;i ++) {
            motion.on(motion.MotionType.TYPE_FLIP,(data) => {
                expect(data.motionValue !== -1).assertTrue()
                console.log("Msdp_Test_Motion_015 on success")
            })
            motion.off(motion.MotionType.TYPE_FLIP, () => {
                done();
                console.log("Msdp_Test_Motion_015 success");
            })
        }
    })

    /**
     * @tc.number Motion_016
     * @tc.name Ilegal value
     * @tc.desc TYPE_FLIP
    */
    it('Msdp_Test_Motion_016', 0, async function (done) {
        console.log("Msdp_Test_Motion_016 start");
        motion.on(17, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_016 success");
        })
    })

    /**
      * @tc.number Motion_017
      * @tc.name Normal value return
      * @tc.desc TYPE_FLIP
      */
    it('Msdp_Test_Motion_017', 0, async function (done) {
        console.log("Msdp_Test_Motion_017 start");
        motion.on(motion.MotionType.TYPE_FLIP, (data) => {
            expect(data.motionValue !== -1).assertTrue();
            motion.off(motion.MotionType.TYPE_FLIP,() => {
                console.log("Msdp_Test_Motion_017 off success");
                done();
                console.log("Msdp_Test_Motion_017 success");
            })
        })
    })

    /**
      * @tc.number Motion_018
      * @tc.name -1 return
      * @tc.desc TYPE_FLIP
      */
    it('Msdp_Test_Motion_018', 0, async function (done) {
        console.log("Msdp_Test_Motion_018 start");
        motion.off(-1, () => {
            done();
            console.log("Msdp_Test_Motion_018 success");
        })
    })

    /**
     * @tc.number Motion_019
     * @tc.name Loop 10 times
     * @tc.desc TYPE_FLIP
    */
    it('Msdp_Test_Motion_019',0, async function(done){
        console.log("Msdp_Test_Motion_019 start");

        for (let i = 0; i < 10 ;i ++) {
            motion.on(motion.MotionType.TYPE_FLIP,(data) => {
                expect(data.motionValue !== -1).assertTrue()
            })
            motion.off(motion.MotionType.TYPE_FLIP, () => {
                console.log("Msdp_Test_Motion_019 off success")
                done();
                console.log("Msdp_Test_Motion_019 success");
            })
        }
    })

    /**
     * @tc.number Motion_020
     * @tc.name Ilegal value
     * @tc.desc TYPE_FLIP
    */
    it('Msdp_Test_Motion_020', 0, async function (done) {
        console.log("Msdp_Test_Motion_020 start");
        motion.off(17, () => {
            done();
            console.log("Msdp_Test_Motion_020 success");
        })
    })

    /**
      * @tc.number Motion_021
      * @tc.name Normal value return
      * @tc.desc TYPE_FLIP
      */
    it('Msdp_Test_Motion_021', 0, async function (done) {
        console.log("Msdp_Test_Motion_021 start");
        try {
            motion.once(motion.MotionType.TYPE_FLIP,(data) => {
                expect(data.motionValue == -1).assertTrue();
                done();
                console.log("Msdp_Test_Motion_021 success");
            })
        }
        catch {
            console.log("Msdp_Test_Motion_021 fail");
        }
    })

    /**
      * @tc.number Motion_022
      * @tc.name -1 return
      * @tc.desc TYPE_FLIP
      */
    it('Msdp_Test_Motion_022', 0, async function (done) {
        console.log("Msdp_Test_Motion_022 start");
        motion.once(-1, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_022 success");
        })
    })

    /**
     * @tc.number Motion_023
     * @tc.name Loop 10 times
     * @tc.desc TYPE_FLIP
    */
    it('Msdp_Test_Motion_023',0, async function(done){
        console.log("Msdp_Test_Motion_023 start");
        for (let i = 0; i < 10 ;i ++) {
            motion.once(motion.MotionType.TYPE_FLIP,(data) => {
                expect(data.motionValue == -1).assertTrue();
                done();
                console.log("Msdp_Test_Motion_023 success");
            })
        }
    })

    /**
     * @tc.number Motion_024
     * @tc.name Ilegal value
     * @tc.desc TYPE_FLIP
    */
    it('Msdp_Test_Motion_024', 0, async function (done) {
        console.log("Msdp_Test_Motion_024 start");
        motion.once(17, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_024 success");
        })
    })

    /**
      * @tc.number Motion_025
      * @tc.name Normal value return
      * @tc.desc TYPE_CLOSE_TO_EAR
      */
    it('Msdp_Test_Motion_025', 0, async function (done) {
        console.log("Msdp_Test_Motion_025 start");
        motion.on(motion.MotionType.TYPE_CLOSE_TO_EAR, (data) => {
            expect(data.motionValue !== -1).assertTrue();
            console.log("Msdp_Test_Motion_025 on success");
            motion.off(motion.MotionType.TYPE_CLOSE_TO_EAR,() => {
                done();
                console.log("Msdp_Test_Motion_025 success");
            })
        })
    })

    /**
      * @tc.number Motion_026
      * @tc.name -1 return
      * @tc.desc TYPE_CLOSE_TO_EAR
      */
    it('Msdp_Test_Motion_026', 0, async function (done) {
        console.log("Msdp_Test_Motion_026 start");
        motion.on(-1, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_026 success");
        })
    })

    /**
     * @tc.number Motion_027
     * @tc.name Loop 10 times
     * @tc.desc TYPE_CLOSE_TO_EAR
    */
    it('Msdp_Test_Motion_027',0, async function(done){
        console.log("Msdp_Test_Motion_027 start");

        for (let i = 0; i < 10 ;i ++) {
            motion.on(motion.MotionType.TYPE_CLOSE_TO_EAR,(data) => {
                expect(data.motionValue !== -1).assertTrue()
                console.log("Msdp_Test_Motion_027 on success")
            })
            motion.off(motion.MotionType.TYPE_CLOSE_TO_EAR, () => {
                done();
                console.log("Msdp_Test_Motion_027 success");
            })
        }
    })

    /**
     * @tc.number Motion_028
     * @tc.name Ilegal value
     * @tc.desc TYPE_CLOSE_TO_EAR
    */
    it('Msdp_Test_Motion_028', 0, async function (done) {
        console.log("Msdp_Test_Motion_028 start");
        motion.on(17, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_028 success");
        })
    })

    /**
      * @tc.number Motion_029
      * @tc.name Normal value return
      * @tc.desc TYPE_CLOSE_TO_EAR
      */
    it('Msdp_Test_Motion_029', 0, async function (done) {
        console.log("Msdp_Test_Motion_029 start");
        motion.on(motion.MotionType.TYPE_CLOSE_TO_EAR, (data) => {
            expect(data.motionValue !== -1).assertTrue();
            motion.off(motion.MotionType.TYPE_CLOSE_TO_EAR,() => {
                console.log("Msdp_Test_Motion_029 off success");
                done();
                console.log("Msdp_Test_Motion_029 success");
            })
        })
    })

    /**
      * @tc.number Motion_030
      * @tc.name -1 return
      * @tc.desc TYPE_CLOSE_TO_EAR
      */
    it('Msdp_Test_Motion_030', 0, async function (done) {
        console.log("Msdp_Test_Motion_030 start");
        motion.off(-1, () => {
            done();
            console.log("Msdp_Test_Motion_030 success");
        })
    })

    /**
     * @tc.number Motion_031
     * @tc.name Loop 10 times
     * @tc.desc TYPE_CLOSE_TO_EAR
    */
    it('Msdp_Test_Motion_031',0, async function(done){
        console.log("Msdp_Test_Motion_031 start");

        for (let i = 0; i < 10 ;i ++) {
            motion.on(motion.MotionType.TYPE_CLOSE_TO_EAR,(data) => {
                expect(data.motionValue !== -1).assertTrue()
            })
            motion.off(motion.MotionType.TYPE_CLOSE_TO_EAR, () => {
                console.log("Msdp_Test_Motion_031 off success")
                done();
                console.log("Msdp_Test_Motion_031 success");
            })
        }
    })

    /**
     * @tc.number Motion_032
     * @tc.name Ilegal value
     * @tc.desc TYPE_CLOSE_TO_EAR
    */
    it('Msdp_Test_Motion_032', 0, async function (done) {
        console.log("Msdp_Test_Motion_032 start");
        motion.off(17, () => {
            done();
            console.log("Msdp_Test_Motion_032 success");
        })
    })

    /**
      * @tc.number Motion_033
      * @tc.name Normal value return
      * @tc.desc TYPE_CLOSE_TO_EAR
      */
    it('Msdp_Test_Motion_033', 0, async function (done) {
        console.log("Msdp_Test_Motion_033 start");
        motion.once(motion.MotionType.TYPE_CLOSE_TO_EAR,(data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_033 success");
        })
    })

    /**
      * @tc.number Motion_034
      * @tc.name -1 return
      * @tc.desc TYPE_CLOSE_TO_EAR
      */
    it('Msdp_Test_Motion_034', 0, async function (done) {
        console.log("Msdp_Test_Motion_034 start");
        motion.once(-1, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_034 success");
        })
    })

    /**
     * @tc.number Motion_035
     * @tc.name Loop 10 times
     * @tc.desc TYPE_CLOSE_TO_EAR
    */
    it('Msdp_Test_Motion_035',0, async function(done){
        console.log("Msdp_Test_Motion_035 start");
        for (let i = 0; i < 10 ;i ++) {
            motion.once(motion.MotionType.TYPE_CLOSE_TO_EAR,(data) => {
                expect(data.motionValue == -1).assertTrue();
                done();
                console.log("Msdp_Test_Motion_035 success");
            })
        }
    })

    /**
     * @tc.number Motion_036
     * @tc.name Ilegal value
     * @tc.desc TYPE_CLOSE_TO_EAR
    */
    it('Msdp_Test_Motion_036', 0, async function (done) {
        console.log("Msdp_Test_Motion_036 start");
        motion.once(17, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_036 success");
        })
    })




    /**
      * @tc.number Motion_037
      * @tc.name Normal value return
      * @tc.desc TYPE_SHAKE
      */
    it('Msdp_Test_Motion_037', 0, async function (done) {
        console.log("Msdp_Test_Motion_037 start");
        motion.on(motion.MotionType.TYPE_SHAKE, (data) => {
            expect(data.motionValue !== -1).assertTrue();
            console.log("Msdp_Test_Motion_037 on success");
            motion.off(motion.MotionType.TYPE_SHAKE,() => {
                done();
                console.log("Msdp_Test_Motion_037 success");
            })
        })
    })

    /**
      * @tc.number Motion_038
      * @tc.name -1 return
      * @tc.desc TYPE_SHAKE
      */
    it('Msdp_Test_Motion_038', 0, async function (done) {
        console.log("Msdp_Test_Motion_038 start");
        motion.on(-1, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_038 success");
        })
    })

    /**
     * @tc.number Motion_039
     * @tc.name Loop 10 times
     * @tc.desc TYPE_SHAKE
    */
    it('Msdp_Test_Motion_039',0, async function(done){
        console.log("Msdp_Test_Motion_039 start");

        for (let i = 0; i < 10 ;i ++) {
            motion.on(motion.MotionType.TYPE_SHAKE,(data) => {
                expect(data.motionValue !== -1).assertTrue()
                console.log("Msdp_Test_Motion_039 on success")
            })
            motion.off(motion.MotionType.TYPE_SHAKE, () => {
                done();
                console.log("Msdp_Test_Motion_039 success");
            })
        }
    })

    /**
     * @tc.number Motion_040
     * @tc.name Ilegal value
     * @tc.desc TYPE_SHAKE
    */
    it('Msdp_Test_Motion_040', 0, async function (done) {
        console.log("Msdp_Test_Motion_040 start");
        motion.on(17, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_040 success");
        })
    })

    /**
      * @tc.number Motion_041
      * @tc.name Normal value return
      * @tc.desc TYPE_SHAKE
      */
    it('Msdp_Test_Motion_041', 0, async function (done) {
        console.log("Msdp_Test_Motion_041 start");
        motion.on(motion.MotionType.TYPE_SHAKE, (data) => {
            expect(data.motionValue !== -1).assertTrue();
            motion.off(motion.MotionType.TYPE_SHAKE,() => {
                console.log("Msdp_Test_Motion_041 off success");
                done();
                console.log("Msdp_Test_Motion_041 success");
            })
        })
    })

    /**
      * @tc.number Motion_042
      * @tc.name -1 return
      * @tc.desc TYPE_SHAKE
      */
    it('Msdp_Test_Motion_042', 0, async function (done) {
        console.log("Msdp_Test_Motion_042 start");
        motion.off(-1, () => {
            done();
            console.log("Msdp_Test_Motion_042 success");
        })
    })

    /**
     * @tc.number Motion_043
     * @tc.name Loop 10 times
     * @tc.desc TYPE_SHAKE
    */
    it('Msdp_Test_Motion_043',0, async function(done){
        console.log("Msdp_Test_Motion_043 start");

        for (let i = 0; i < 10 ;i ++) {
            motion.on(motion.MotionType.TYPE_SHAKE,(data) => {
                expect(data.motionValue !== -1).assertTrue()
            })
            motion.off(motion.MotionType.TYPE_SHAKE, () => {
                console.log("Msdp_Test_Motion_043 off success")
                done();
                console.log("Msdp_Test_Motion_043 success");
            })
        }
    })

    /**
     * @tc.number Motion_044
     * @tc.name Ilegal value
     * @tc.desc TYPE_SHAKE
    */
    it('Msdp_Test_Motion_044', 0, async function (done) {
        console.log("Msdp_Test_Motion_044 start");
        motion.off(17, () => {
            done();
            console.log("Msdp_Test_Motion_044 success");
        })
    })

    /**
      * @tc.number Motion_045
      * @tc.name Normal value return
      * @tc.desc TYPE_SHAKE
      */
    it('Msdp_Test_Motion_045', 0, async function (done) {
        console.log("Msdp_Test_Motion_045 start");
        motion.once(motion.MotionType.TYPE_SHAKE,(data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_045 success");
        })
    })

    /**
      * @tc.number Motion_046
      * @tc.name -1 return
      * @tc.desc TYPE_SHAKE
      */
    it('Msdp_Test_Motion_046', 0, async function (done) {
        console.log("Msdp_Test_Motion_046 start");
        motion.once(-1, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_046 success");
        })
    })

    /**
     * @tc.number Motion_047
     * @tc.name Loop 10 times
     * @tc.desc TYPE_SHAKE
    */
    it('Msdp_Test_Motion_047',0, async function(done){
        console.log("Msdp_Test_Motion_047 start");
        for (let i = 0; i < 10 ;i ++) {
            motion.once(motion.MotionType.TYPE_SHAKE,(data) => {
                expect(data.motionValue == -1).assertTrue();
                done();
                console.log("Msdp_Test_Motion_047 success");
            })
        }
    })

    /**
     * @tc.number Motion_048
     * @tc.name Ilegal value
     * @tc.desc TYPE_SHAKE
    */
    it('Msdp_Test_Motion_048', 0, async function (done) {
        console.log("Msdp_Test_Motion_048 start");
        motion.once(17, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_048 success");
        })
    })

    /**
      * @tc.number Motion_049
      * @tc.name Normal value return
      * @tc.desc TYPE_ROTATE
      */
    it('Msdp_Test_Motion_049', 0, async function (done) {
        console.log("Msdp_Test_Motion_049 start");
        motion.on(motion.MotionType.TYPE_ROTATE, (data) => {
            expect(data.motionValue !== -1).assertTrue();
            console.log("Msdp_Test_Motion_049 on success");
            motion.off(motion.MotionType.TYPE_ROTATE,() => {
                done();
                console.log("Msdp_Test_Motion_049 success");
            })
        })
    })

    /**
      * @tc.number Motion_050
      * @tc.name -1 return
      * @tc.desc TYPE_ROTATE
      */
    it('Msdp_Test_Motion_050', 0, async function (done) {
        console.log("Msdp_Test_Motion_050 start");
        motion.on(-1, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_050 success");
        })
    })

    /**
     * @tc.number Motion_051
     * @tc.name Loop 10 times
     * @tc.desc TYPE_ROTATE
    */
    it('Msdp_Test_Motion_051',0, async function(done){
        console.log("Msdp_Test_Motion_051 start");

        for (let i = 0; i < 10 ;i ++) {
            motion.on(motion.MotionType.TYPE_ROTATE,(data) => {
                expect(data.motionValue !== -1).assertTrue()
                console.log("Msdp_Test_Motion_051 on success")
            })
            motion.off(motion.MotionType.TYPE_ROTATE, () => {
                done();
                console.log("Msdp_Test_Motion_051 success");
            })
        }
    })

    /**
     * @tc.number Motion_052
     * @tc.name Ilegal value
     * @tc.desc TYPE_ROTATE
    */
    it('Msdp_Test_Motion_052', 0, async function (done) {
        console.log("Msdp_Test_Motion_052 start");
        motion.on(17, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_052 success");
        })
    })

    /**
      * @tc.number Motion_053
      * @tc.name Normal value return
      * @tc.desc TYPE_ROTATE
      */
    it('Msdp_Test_Motion_053', 0, async function (done) {
        console.log("Msdp_Test_Motion_053 start");
        motion.on(motion.MotionType.TYPE_ROTATE, (data) => {
            expect(data.motionValue !== -1).assertTrue();
            motion.off(motion.MotionType.TYPE_ROTATE,() => {
                console.log("Msdp_Test_Motion_053 off success");
                done();
                console.log("Msdp_Test_Motion_053 success");
            })
        })
    })

    /**
      * @tc.number Motion_054
      * @tc.name -1 return
      * @tc.desc TYPE_ROTATE
      */
    it('Msdp_Test_Motion_054', 0, async function (done) {
        console.log("Msdp_Test_Motion_054 start");
        motion.off(-1, () => {
            done();
            console.log("Msdp_Test_Motion_054 success");
        })
    })

    /**
     * @tc.number Motion_055
     * @tc.name Loop 10 times
     * @tc.desc TYPE_ROTATE
    */
    it('Msdp_Test_Motion_055',0, async function(done){
        console.log("Msdp_Test_Motion_055 start");

        for (let i = 0; i < 10 ;i ++) {
            motion.on(motion.MotionType.TYPE_ROTATE,(data) => {
                expect(data.motionValue !== -1).assertTrue()
            })
            motion.off(motion.MotionType.TYPE_ROTATE, () => {
                console.log("Msdp_Test_Motion_055 off success")
                done();
                console.log("Msdp_Test_Motion_055 success");
            })
        }
    })

    /**
     * @tc.number Motion_056
     * @tc.name Ilegal value
     * @tc.desc TYPE_ROTATE
    */
    it('Msdp_Test_Motion_056', 0, async function (done) {
        console.log("Msdp_Test_Motion_056 start");
        motion.off(17, () => {
            done();
            console.log("Msdp_Test_Motion_056 success");
        })
    })

    /**
      * @tc.number Motion_057
      * @tc.name Normal value return
      * @tc.desc TYPE_ROTATE
      */
    it('Msdp_Test_Motion_057', 0, async function (done) {
        console.log("Msdp_Test_Motion_057 start");
        motion.once(motion.MotionType.TYPE_ROTATE,(data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_057 success");
        })
    })

    /**
      * @tc.number Motion_058
      * @tc.name -1 return
      * @tc.desc TYPE_ROTATE
      */
    it('Msdp_Test_Motion_058', 0, async function (done) {
        console.log("Msdp_Test_Motion_058 start");
        motion.once(-1, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_058 success");
        })
    })

    /**
     * @tc.number Motion_059
     * @tc.name Loop 10 times
     * @tc.desc TYPE_ROTATE
    */
    it('Msdp_Test_Motion_059',0, async function(done){
        console.log("Msdp_Test_Motion_059 start");
        for (let i = 0; i < 10 ;i ++) {
            motion.once(motion.MotionType.TYPE_ROTATE,(data) => {
                expect(data.motionValue == -1).assertTrue();
                done();
                console.log("Msdp_Test_Motion_059 success");
            })
        }
    })

    /**
     * @tc.number Motion_060
     * @tc.name Ilegal value
     * @tc.desc TYPE_ROTATE
    */
    it('Msdp_Test_Motion_060', 0, async function (done) {
        console.log("Msdp_Test_Motion_060 start");
        motion.once(17, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_060 success");
        })
    })

    /**
      * @tc.number Motion_061
      * @tc.name Normal value return
      * @tc.desc TYPE_POCKET
      */
    it('Msdp_Test_Motion_061', 0, async function (done) {
        console.log("Msdp_Test_Motion_061 start");
        motion.on(motion.MotionType.TYPE_POCKET, (data) => {
            expect(data.motionValue !== -1).assertTrue();
            console.log("Msdp_Test_Motion_061 on success");
            motion.off(motion.MotionType.TYPE_POCKET,() => {
                done();
                console.log("Msdp_Test_Motion_061 success");
            })
        })
    })

    /**
      * @tc.number Motion_062
      * @tc.name -1 return
      * @tc.desc TYPE_POCKET
      */
    it('Msdp_Test_Motion_062', 0, async function (done) {
        console.log("Msdp_Test_Motion_062 start");
        motion.on(-1, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_062 success");
        })
    })

    /**
     * @tc.number Motion_063
     * @tc.name Loop 10 times
     * @tc.desc TYPE_POCKET
    */
    it('Msdp_Test_Motion_063',0, async function(done){
        console.log("Msdp_Test_Motion_063 start");

        for (let i = 0; i < 10 ;i ++) {
            motion.on(motion.MotionType.TYPE_POCKET,(data) => {
                expect(data.motionValue !== -1).assertTrue()
                console.log("Msdp_Test_Motion_063 on success")
            })
            motion.off(motion.MotionType.TYPE_POCKET, () => {
                done();
                console.log("Msdp_Test_Motion_063 success");
            })
        }
    })

    /**
     * @tc.number Motion_064
     * @tc.name Ilegal value
     * @tc.desc TYPE_POCKET
    */
    it('Msdp_Test_Motion_064', 0, async function (done) {
        console.log("Msdp_Test_Motion_064 start");
        motion.on(17, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_064 success");
        })
    })

    /**
      * @tc.number Motion_065
      * @tc.name Normal value return
      * @tc.desc TYPE_POCKET
      */
    it('Msdp_Test_Motion_065', 0, async function (done) {
        console.log("Msdp_Test_Motion_065 start");
        motion.on(motion.MotionType.TYPE_POCKET, (data) => {
            expect(data.motionValue !== -1).assertTrue();
            motion.off(motion.MotionType.TYPE_POCKET,() => {
                console.log("Msdp_Test_Motion_065 off success");
                done();
                console.log("Msdp_Test_Motion_065 success");
            })
        })
    })

    /**
      * @tc.number Motion_066
      * @tc.name -1 return
      * @tc.desc TYPE_POCKET
      */
    it('Msdp_Test_Motion_066', 0, async function (done) {
        console.log("Msdp_Test_Motion_066 start");
        motion.off(-1, () => {
            done();
            console.log("Msdp_Test_Motion_066 success");
        })
    })

    /**
     * @tc.number Motion_067
     * @tc.name Loop 10 times
     * @tc.desc TYPE_POCKET
    */
    it('Msdp_Test_Motion_067',0, async function(done){
        console.log("Msdp_Test_Motion_067 start");

        for (let i = 0; i < 10 ;i ++) {
            motion.on(motion.MotionType.TYPE_POCKET,(data) => {
                expect(data.motionValue !== -1).assertTrue()
            })
            motion.off(motion.MotionType.TYPE_POCKET, () => {
                console.log("Msdp_Test_Motion_067 off success")
                done();
                console.log("Msdp_Test_Motion_067 success");
            })
        }
    })

    /**
     * @tc.number Motion_068
     * @tc.name Ilegal value
     * @tc.desc TYPE_POCKET
    */
    it('Msdp_Test_Motion_068', 0, async function (done) {
        console.log("Msdp_Test_Motion_068 start");
        motion.off(17, () => {
            done();
            console.log("Msdp_Test_Motion_068 success");
        })
    })

    /**
      * @tc.number Motion_069
      * @tc.name Normal value return
      * @tc.desc TYPE_POCKET
      */
    it('Msdp_Test_Motion_069', 0, async function (done) {
        console.log("Msdp_Test_Motion_069 start");
        motion.once(motion.MotionType.TYPE_POCKET,(data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_069 success");
        })
    })

    /**
      * @tc.number Motion_070
      * @tc.name -1 return
      * @tc.desc TYPE_POCKET
      */
    it('Msdp_Test_Motion_070', 0, async function (done) {
        console.log("Msdp_Test_Motion_070 start");
        motion.once(-1, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_070 success");
        })
    })

    /**
     * @tc.number Motion_071
     * @tc.name Loop 10 times
     * @tc.desc TYPE_POCKET
    */
    it('Msdp_Test_Motion_071',0, async function(done){
        console.log("Msdp_Test_Motion_071 start");
        for (let i = 0; i < 10 ;i ++) {
            motion.once(motion.MotionType.TYPE_POCKET,(data) => {
                expect(data.motionValue == -1).assertTrue();
                done();
                console.log("Msdp_Test_Motion_071 success");
            })
        }
    })

    /**
     * @tc.number Motion_072
     * @tc.name Ilegal value
     * @tc.desc TYPE_POCKET
    */
    it('Msdp_Test_Motion_072', 0, async function (done) {
        console.log("Msdp_Test_Motion_072 start");
        motion.once(17, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_072 success");
        })
    })

    /**
      * @tc.number Motion_073
      * @tc.name Normal value return
      * @tc.desc TYPE_TAKE_OFF
      */
    it('Msdp_Test_Motion_073', 0, async function (done) {
        console.log("Msdp_Test_Motion_073 start");
        motion.on(motion.MotionType.TYPE_TAKE_OFF, (data) => {
            expect(data.motionValue !== -1).assertTrue();
            console.log("Msdp_Test_Motion_073 on success");
            motion.off(motion.MotionType.TYPE_TAKE_OFF,() => {
                done();
                console.log("Msdp_Test_Motion_073 success");
            })
        })
    })

    /**
      * @tc.number Motion_074
      * @tc.name -1 return
      * @tc.desc TYPE_TAKE_OFF
      */
    it('Msdp_Test_Motion_074', 0, async function (done) {
        console.log("Msdp_Test_Motion_074 start");
        motion.on(-1, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_074 success");
        })
    })

    /**
     * @tc.number Motion_075
     * @tc.name Loop 10 times
     * @tc.desc TYPE_TAKE_OFF
    */
    it('Msdp_Test_Motion_075',0, async function(done){
        console.log("Msdp_Test_Motion_075 start");

        for (let i = 0; i < 10 ;i ++) {
            motion.on(motion.MotionType.TYPE_TAKE_OFF,(data) => {
                expect(data.motionValue !== -1).assertTrue()
                console.log("Msdp_Test_Motion_075 on success")
            })
            motion.off(motion.MotionType.TYPE_TAKE_OFF, () => {
                done();
                console.log("Msdp_Test_Motion_075 success");
            })
        }
    })

    /**
     * @tc.number Motion_076
     * @tc.name Ilegal value
     * @tc.desc TYPE_TAKE_OFF
    */
    it('Msdp_Test_Motion_076', 0, async function (done) {
        console.log("Msdp_Test_Motion_076 start");
        motion.on(17, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_076 success");
        })
    })

    /**
      * @tc.number Motion_077
      * @tc.name Normal value return
      * @tc.desc TYPE_TAKE_OFF
      */
    it('Msdp_Test_Motion_077', 0, async function (done) {
        console.log("Msdp_Test_Motion_077 start");
        motion.on(motion.MotionType.TYPE_TAKE_OFF, (data) => {
            expect(data.motionValue !== -1).assertTrue();
            motion.off(motion.MotionType.TYPE_TAKE_OFF,() => {
                console.log("Msdp_Test_Motion_077 off success");
                done();
                console.log("Msdp_Test_Motion_077 success");
            })
        })
    })

    /**
      * @tc.number Motion_078
      * @tc.name -1 return
      * @tc.desc TYPE_TAKE_OFF
      */
    it('Msdp_Test_Motion_078', 0, async function (done) {
        console.log("Msdp_Test_Motion_078 start");
        motion.off(-1, () => {
            done();
            console.log("Msdp_Test_Motion_078 success");
        })
    })

    /**
     * @tc.number Motion_079
     * @tc.name Loop 10 times
     * @tc.desc TYPE_TAKE_OFF
    */
    it('Msdp_Test_Motion_079',0, async function(done){
        console.log("Msdp_Test_Motion_079 start");

        for (let i = 0; i < 10 ;i ++) {
            motion.on(motion.MotionType.TYPE_TAKE_OFF,(data) => {
                expect(data.motionValue !== -1).assertTrue()
            })
            motion.off(motion.MotionType.TYPE_TAKE_OFF, () => {
                console.log("Msdp_Test_Motion_079 off success")
                done();
                console.log("Msdp_Test_Motion_079 success");
            })
        }
    })

    /**
     * @tc.number Motion_080
     * @tc.name Ilegal value
     * @tc.desc TYPE_TAKE_OFF
    */
    it('Msdp_Test_Motion_080', 0, async function (done) {
        console.log("Msdp_Test_Motion_080 start");
        motion.off(17, () => {
            done();
            console.log("Msdp_Test_Motion_080 success");
        })
    })

    /**
      * @tc.number Motion_081
      * @tc.name Normal value return
      * @tc.desc TYPE_TAKE_OFF
      */
    it('Msdp_Test_Motion_081', 0, async function (done) {
        console.log("Msdp_Test_Motion_081 start");
        motion.once(motion.MotionType.TYPE_TAKE_OFF,(data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_081 success");
        })
    })

    /**
      * @tc.number Motion_082
      * @tc.name -1 return
      * @tc.desc TYPE_TAKE_OFF
      */
    it('Msdp_Test_Motion_082', 0, async function (done) {
        console.log("Msdp_Test_Motion_082 start");
        motion.once(-1, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_082 success");
        })
    })

    /**
     * @tc.number Motion_083
     * @tc.name Loop 10 times
     * @tc.desc TYPE_TAKE_OFF
    */
    it('Msdp_Test_Motion_083',0, async function(done){
        console.log("Msdp_Test_Motion_083 start");
        for (let i = 0; i < 10 ;i ++) {
            motion.once(motion.MotionType.TYPE_TAKE_OFF,(data) => {
                expect(data.motionValue == -1).assertTrue();
                done();
                console.log("Msdp_Test_Motion_083 success");
            })
        }
    })

    /**
     * @tc.number Motion_084
     * @tc.name Ilegal value
     * @tc.desc TYPE_TAKE_OFF
    */
    it('Msdp_Test_Motion_084', 0, async function (done) {
        console.log("Msdp_Test_Motion_084 start");
        motion.once(17, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_084 success");
        })
    })

    /**
      * @tc.number Motion_085
      * @tc.name Normal value return
      * @tc.desc TYPE_WRIST_TILT
      */
    it('Msdp_Test_Motion_085', 0, async function (done) {
        console.log("Msdp_Test_Motion_085 start");
        motion.on(motion.MotionType.TYPE_WRIST_TILT, (data) => {
            expect(data.motionValue !== -1).assertTrue();
            console.log("Msdp_Test_Motion_085 on success");
            motion.off(motion.MotionType.TYPE_WRIST_TILT,() => {
                done();
                console.log("Msdp_Test_Motion_085 success");
            })
        })
    })

    /**
      * @tc.number Motion_086
      * @tc.name -1 return
      * @tc.desc TYPE_WRIST_TILT
      */
    it('Msdp_Test_Motion_086', 0, async function (done) {
        console.log("Msdp_Test_Motion_086 start");
        motion.on(-1, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_086 success");
        })
    })

    /**
     * @tc.number Motion_087
     * @tc.name Loop 10 times
     * @tc.desc TYPE_WRIST_TILT
    */
    it('Msdp_Test_Motion_087',0, async function(done){
        console.log("Msdp_Test_Motion_087 start");

        for (let i = 0; i < 10 ;i ++) {
            motion.on(motion.MotionType.TYPE_WRIST_TILT,(data) => {
                expect(data.motionValue !== -1).assertTrue()
                console.log("Msdp_Test_Motion_087 on success")
            })
            motion.off(motion.MotionType.TYPE_WRIST_TILT, () => {
                done();
                console.log("Msdp_Test_Motion_087 success");
            })
        }
    })

    /**
     * @tc.number Motion_088
     * @tc.name Ilegal value
     * @tc.desc TYPE_WRIST_TILT
    */
    it('Msdp_Test_Motion_088', 0, async function (done) {
        console.log("Msdp_Test_Motion_088 start");
        motion.on(17, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_088 success");
        })
    })

    /**
      * @tc.number Motion_089
      * @tc.name Normal value return
      * @tc.desc TYPE_WRIST_TILT
      */
    it('Msdp_Test_Motion_089', 0, async function (done) {
        console.log("Msdp_Test_Motion_089 start");
        motion.on(motion.MotionType.TYPE_WRIST_TILT, (data) => {
            expect(data.motionValue !== -1).assertTrue();
            motion.off(motion.MotionType.TYPE_WRIST_TILT,() => {
                console.log("Msdp_Test_Motion_089 off success");
                done();
                console.log("Msdp_Test_Motion_089 success");
            })
        })
    })

    /**
      * @tc.number Motion_090
      * @tc.name -1 return
      * @tc.desc TYPE_WRIST_TILT
      */
    it('Msdp_Test_Motion_090', 0, async function (done) {
        console.log("Msdp_Test_Motion_090 start");
        motion.off(-1, () => {
            done();
            console.log("Msdp_Test_Motion_090 success");
        })
    })

    /**
     * @tc.number Motion_091
     * @tc.name Loop 10 times
     * @tc.desc TYPE_WRIST_TILT
    */
    it('Msdp_Test_Motion_091',0, async function(done){
        console.log("Msdp_Test_Motion_091 start");

        for (let i = 0; i < 10 ;i ++) {
            motion.on(motion.MotionType.TYPE_WRIST_TILT,(data) => {
                expect(data.motionValue !== -1).assertTrue()
            })
            motion.off(motion.MotionType.TYPE_WRIST_TILT, () => {
                console.log("Msdp_Test_Motion_091 off success")
                done();
                console.log("Msdp_Test_Motion_091 success");
            })
        }
    })

    /**
     * @tc.number Motion_092
     * @tc.name Ilegal value
     * @tc.desc TYPE_WRIST_TILT
    */
    it('Msdp_Test_Motion_092', 0, async function (done) {
        console.log("Msdp_Test_Motion_092 start");
        motion.off(17, () => {
            done();
            console.log("Msdp_Test_Motion_092 success");
        })
    })

    /**
      * @tc.number Motion_093
      * @tc.name Normal value return
      * @tc.desc TYPE_WRIST_TILT
      */
    it('Msdp_Test_Motion_093', 0, async function (done) {
        console.log("Msdp_Test_Motion_093 start");
        motion.once(motion.MotionType.TYPE_WRIST_TILT,(data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_093 success");
        })
    })

    /**
      * @tc.number Motion_094
      * @tc.name -1 return
      * @tc.desc TYPE_WRIST_TILT
      */
    it('Msdp_Test_Motion_094', 0, async function (done) {
        console.log("Msdp_Test_Motion_094 start");
        motion.once(-1, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_094 success");
        })
    })

    /**
     * @tc.number Motion_095
     * @tc.name Loop 10 times
     * @tc.desc TYPE_WRIST_TILT
    */
    it('Msdp_Test_Motion_095',0, async function(done){
        console.log("Msdp_Test_Motion_095 start");
        for (let i = 0; i < 10 ;i ++) {
            motion.once(motion.MotionType.TYPE_WRIST_TILT,(data) => {
                expect(data.motionValue == -1).assertTrue();
                done();
                console.log("Msdp_Test_Motion_095 success");
            })
        }
    })

    /**
     * @tc.number Motion_096
     * @tc.name Ilegal value
     * @tc.desc TYPE_WRIST_TILT
    */
    it('Msdp_Test_Motion_096', 0, async function (done) {
        console.log("Msdp_Test_Motion_096 start");
        motion.once(17, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_096 success");
        })
    })

    /**
      * @tc.number Motion_097
      * @tc.name Normal value return
      * @tc.desc TYPE_WAVE
      */
    it('Msdp_Test_Motion_097', 0, async function (done) {
        console.log("Msdp_Test_Motion_097 start");
        motion.on(motion.MotionType.TYPE_WAVE, (data) => {
            expect(data.motionValue !== -1).assertTrue();
            console.log("Msdp_Test_Motion_097 on success");
            motion.off(motion.MotionType.TYPE_WAVE,() => {
                done();
                console.log("Msdp_Test_Motion_097 success");
            })
        })
    })

    /**
      * @tc.number Motion_098
      * @tc.name -1 return
      * @tc.desc TYPE_WAVE
      */
    it('Msdp_Test_Motion_098', 0, async function (done) {
        console.log("Msdp_Test_Motion_098 start");
        motion.on(-1, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_098 success");
        })
    })

    /**
     * @tc.number Motion_099
     * @tc.name Loop 10 times
     * @tc.desc TYPE_WAVE
    */
    it('Msdp_Test_Motion_099',0, async function(done){
        console.log("Msdp_Test_Motion_099 start");

        for (let i = 0; i < 10 ;i ++) {
            motion.on(motion.MotionType.TYPE_WAVE,(data) => {
                expect(data.motionValue !== -1).assertTrue()
                console.log("Msdp_Test_Motion_099 on success")
            })
            motion.off(motion.MotionType.TYPE_WAVE, () => {
                done();
                console.log("Msdp_Test_Motion_099 success");
            })
        }
    })

    /**
     * @tc.number Motion_100
     * @tc.name Ilegal value
     * @tc.desc TYPE_WAVE
    */
    it('Msdp_Test_Motion_100', 0, async function (done) {
        console.log("Msdp_Test_Motion_100 start");
        motion.on(17, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_100 success");
        })
    })

    /**
      * @tc.number Motion_101
      * @tc.name Normal value return
      * @tc.desc TYPE_WAVE
      */
    it('Msdp_Test_Motion_101', 0, async function (done) {
        console.log("Msdp_Test_Motion_101 start");
        motion.on(motion.MotionType.TYPE_WAVE, (data) => {
            expect(data.motionValue !== -1).assertTrue();
            motion.off(motion.MotionType.TYPE_WAVE,() => {
                console.log("Msdp_Test_Motion_101 off success");
                done();
                console.log("Msdp_Test_Motion_101 success");
            })
        })
    })

    /**
      * @tc.number Motion_102
      * @tc.name -1 return
      * @tc.desc TYPE_WAVE
      */
    it('Msdp_Test_Motion_102', 0, async function (done) {
        console.log("Msdp_Test_Motion_102 start");
        motion.off(-1, () => {
            done();
            console.log("Msdp_Test_Motion_102 success");
        })
    })

    /**
     * @tc.number Motion_103
     * @tc.name Loop 10 times
     * @tc.desc TYPE_WAVE
    */
    it('Msdp_Test_Motion_103',0, async function(done){
        console.log("Msdp_Test_Motion_103 start");

        for (let i = 0; i < 10 ;i ++) {
            motion.on(motion.MotionType.TYPE_WAVE,(data) => {
                expect(data.motionValue !== -1).assertTrue()
            })
            motion.off(motion.MotionType.TYPE_WAVE, () => {
                console.log("Msdp_Test_Motion_103 off success")
                done();
                console.log("Msdp_Test_Motion_103 success");
            })
        }
    })

    /**
     * @tc.number Motion_104
     * @tc.name Ilegal value
     * @tc.desc TYPE_WAVE
    */
    it('Msdp_Test_Motion_104', 0, async function (done) {
        console.log("Msdp_Test_Motion_104 start");
        motion.off(17, () => {
            done();
            console.log("Msdp_Test_Motion_104 success");
        })
    })

    /**
      * @tc.number Motion_105
      * @tc.name Normal value return
      * @tc.desc TYPE_WAVE
      */
    it('Msdp_Test_Motion_105', 0, async function (done) {
        console.log("Msdp_Test_Motion_105 start");
        motion.once(motion.MotionType.TYPE_WAVE,(data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_105 success");
        })
    })

    /**
      * @tc.number Motion_106
      * @tc.name -1 return
      * @tc.desc TYPE_WAVE
      */
    it('Msdp_Test_Motion_106', 0, async function (done) {
        console.log("Msdp_Test_Motion_106 start");
        motion.once(-1, (data) => {
            expect(data.motionValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Motion_106 success");
        })
    })

    /**
     * @tc.number Motion_107
     * @tc.name Loop 10 times
     * @tc.desc TYPE_WAVE
    */
    it('Msdp_Test_Motion_107',0, async function(done){
        console.log("Msdp_Test_Motion_107 start");
        for (let i = 0; i < 10 ;i ++) {
            motion.once(motion.MotionType.TYPE_WAVE,(data) => {
                expect(data.motionValue == -1).assertTrue();
                done();
                console.log("Msdp_Test_Motion_107 success");
            })
        }
    })

    /**
     * @tc.number Motion_108
     * @tc.name Ilegal value
     * @tc.desc TYPE_WAVE
    */
    it('Msdp_Test_Motion_108', 0, async function (done) {
        console.log("Msdp_Test_Motion_108 start");
        try {
            motion.once(17, (data) => {
                expect(data.motionValue == -1).assertTrue();
                done();
                console.log("Msdp_Test_Motion_108 success");
            })
        }
        catch {
            console.log("Msdp_Test_Motion_108 fail");
        }
    })

})
