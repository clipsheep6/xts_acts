import app from '@system.app'
import timeline from "@ohos.timeline"
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

describe('MsdpInfoTest', function () {
    console.log("*************Timeline Unit Test Begin*************");

    /**
      * @tc.number Timeline_001
      * @tc.name Normal value return
      * @tc.desc AREA_HOME
      */
    it('Msdp_Test_Timeline_001', 0, async function (done) {
        console.log("Msdp_Test_Timeline_001 start");
        timeline.on(timeline.TimelineArea.AREA_HOME, (data) => {
            expect(data.TimeLineValue !== -1).assertTrue();
            console.log("Msdp_Test_Timeline_001 on success");
            timeline.off(timeline.TimelineArea.AREA_HOME, () => {
                done();
                console.log("Msdp_Test_Timeline_001 success");
            })
        })
    })

    /**
      * @tc.number Timeline_002
      * @tc.name -1 return
      * @tc.desc AREA_HOME
      */
    it('Msdp_Test_Timeline_002', 0, async function (done) {
        console.log("Msdp_Test_Timeline_002 start");
        timeline.on(-1, (data) => {
            //            console.log("data2="+JSON.stringify(data));
            //            console.log("data2="+data['TimelineValue']);
            //            console.log("data2="+typeof(data['TimelineValue']));
            //            console.log("data2="+data.TimelineValue);
            //            console.log("data2="+JSON.stringify(data.TimelineValue));
            expect(data['TimelineValue'] == -1).assertTrue();
            console.log("Msdp_Test_Timeline_002 success");
            done();
        })
    })

    /**
     * @tc.number Timeline_003
     * @tc.name Loop 10 times
     * @tc.desc AREA_HOME
    */
    it('Msdp_Test_Timeline_003', 0, async function (done) {
        console.log("Msdp_Test_Timeline_003 start");
        for (let i = 0; i < 10; i++) {
            timeline.on(timeline.TimelineArea.AREA_HOME, (data) => {
                console.log("data is ="+data['TimelineValue']);
                expect(data.TimeLineValue !== -1).assertTrue();
                console.log("Msdp_Test_Timeline_003 on success");
                timeline.off(timeline.TimelineArea.AREA_HOME, () => {
                    done();
                    console.log("Msdp_Test_Timeline_003 success");
                })
            })
        }
    })

    /**
     * @tc.number Timeline_004
     * @tc.name Ilegal value
     * @tc.desc AREA_HOME
    */
    it('Msdp_Test_Timeline_004', 0, async function (done) {
        console.log("Msdp_Test_Timeline_004 start");
        timeline.on(17, (data) => {
            expect(data['TimelineValue'] == -1).assertTrue();
            done();
            console.log("Msdp_Test_Timeline_004 success");
        })
    })

    /**
      * @tc.number Timeline_005
      * @tc.name Normal value return
      * @tc.desc AREA_HOME
      */
    it('Msdp_Test_Timeline_005', 0, async function (done) {
        console.log("Msdp_Test_Timeline_005 start");
        timeline.on(timeline.TimelineArea.AREA_HOME, (data) => {
            expect(data.timelineValue !== -1).assertTrue();
            timeline.off(timeline.TimelineArea.AREA_HOME, () => {
                console.log("Msdp_Test_Timeline_005 off success");
                done();
                console.log("Msdp_Test_Timeline_005 success");
            })
        })
    })

    /**
      * @tc.number Timeline_006
      * @tc.name -1 return
      * @tc.desc AREA_HOME
      */
    it('Msdp_Test_Timeline_006', 0, async function (done) {
        console.log("Msdp_Test_Timeline_006 start");
        timeline.off(-1, () => {
            console.log("Msdp_Test_Timeline_006 off failed");
            done();
            console.log("Msdp_Test_Timeline_006 success");

        })
    })

    /**
     * @tc.number Timeline_007
     * @tc.name Loop 10 times
     * @tc.desc AREA_HOME
    */
    it('Msdp_Test_Timeline_007', 0, async function (done) {
        console.log("Msdp_Test_Timeline_007 start");

        for (let i = 0; i < 10; i++) {
            timeline.on(timeline.TimelineArea.AREA_HOME, (data) => {
                expect(data.TimeLineValue !== -1).assertTrue()
            })
            timeline.off(timeline.TimelineArea.AREA_HOME, () => {
                console.log("Msdp_Test_Timeline_007 off success");
                done();
                console.log("Msdp_Test_Timeline_007 success");
            })
        }
    })

    /**
     * @tc.number Timeline_008
     * @tc.name Ilegal value
     * @tc.desc AREA_HOME
    */
    it('Msdp_Test_Timeline_008', 0, async function (done) {
        console.log("Msdp_Test_Timeline_008 start");
        timeline.off(17, () => {
            console.log("Msdp_Test_Timeline_008 off success");
            done();
            console.log("Msdp_Test_Timeline_008 success");
        })
    })


	
     /**
      * @tc.number Timeline_009
      * @tc.name Normal value return
      * @tc.desc AREA_COMPANY
      */
    it('Msdp_Test_Timeline_009', 0, async function (done) {
        console.log("Msdp_Test_Timeline_009 start");
        timeline.on(timeline.TimelineArea.AREA_COMPANY, (data) => {
            expect(data.TimeLineValue !== -1).assertTrue();
            console.log("Msdp_Test_Timeline_009 on success");
            timeline.off(timeline.TimelineArea.AREA_COMPANY, () => {
                done();
                console.log("Msdp_Test_Timeline_009 success");
            })
        })
    })

    /**
      * @tc.number Timeline_010
      * @tc.name -1 return
      * @tc.desc AREA_COMPANY
      */
    it('Msdp_Test_Timeline_010', 0, async function (done) {
        console.log("Msdp_Test_Timeline_010 start");
        timeline.on(-1, (data) => {
            expect(data['TimelineValue'] == -1).assertTrue();
            console.log("Msdp_Test_Timeline_010 success");
            done();
        })
    })

    /**
     * @tc.number Timeline_011
     * @tc.name Loop 10 times
     * @tc.desc AREA_COMPANY
    */
    it('Msdp_Test_Timeline_011', 0, async function (done) {
        console.log("Msdp_Test_Timeline_011 start");
        for (let i = 0; i < 10; i++) {
            timeline.on(timeline.TimelineArea.AREA_COMPANY, (data) => {
                console.log("data is ="+data['TimelineValue']);
                expect(data.TimeLineValue !== -1).assertTrue();
                console.log("Msdp_Test_Timeline_011 on success");
                timeline.off(timeline.TimelineArea.AREA_COMPANY, () => {
                    done();
                    console.log("Msdp_Test_Timeline_011 success");
                })
            })
        }
    })

    /**
     * @tc.number Timeline_012
     * @tc.name Ilegal value
     * @tc.desc AREA_COMPANY
    */
    it('Msdp_Test_Timeline_012', 0, async function (done) {
        console.log("Msdp_Test_Timeline_012 start");
        timeline.on(17, (data) => {
            expect(data['TimelineValue'] == -1).assertTrue();
            done();
            console.log("Msdp_Test_Timeline_012 success");
        })
    })

    /**
      * @tc.number Timeline_013
      * @tc.name Normal value return
      * @tc.desc AREA_COMPANY
      */
    it('Msdp_Test_Timeline_013', 0, async function (done) {
        console.log("Msdp_Test_Timeline_013 start");
        timeline.on(timeline.TimelineArea.AREA_COMPANY, (data) => {
            expect(data.timelineValue !== -1).assertTrue();
            timeline.off(timeline.TimelineArea.AREA_COMPANY, () => {
                console.log("Msdp_Test_Timeline_013 off success");
                done();
                console.log("Msdp_Test_Timeline_013 success");
            })
        })
    })

    /**
      * @tc.number Timeline_014
      * @tc.name -1 return
      * @tc.desc AREA_COMPANY
      */
    it('Msdp_Test_Timeline_014', 0, async function (done) {
        console.log("Msdp_Test_Timeline_014 start");
        timeline.off(-1, () => {
            console.log("Msdp_Test_Timeline_014 off failed");
            done();
            console.log("Msdp_Test_Timeline_014 success");

        })
    })

    /**
     * @tc.number Timeline_015
     * @tc.name Loop 10 times
     * @tc.desc AREA_COMPANY
    */
    it('Msdp_Test_Timeline_015', 0, async function (done) {
        console.log("Msdp_Test_Timeline_015 start");

        for (let i = 0; i < 10; i++) {
            timeline.on(timeline.TimelineArea.AREA_COMPANY, (data) => {
                expect(data.TimeLineValue !== -1).assertTrue()
            })
            timeline.off(timeline.TimelineArea.AREA_COMPANY, () => {
                console.log("Msdp_Test_Timeline_015 off success");
                done();
                console.log("Msdp_Test_Timeline_015 success");
            })
        }
    })

    /**
     * @tc.number Timeline_016
     * @tc.name Ilegal value
     * @tc.desc AREA_COMPANY
    */
    it('Msdp_Test_Timeline_016', 0, async function (done) {
        console.log("Msdp_Test_Timeline_016 start");
        timeline.off(17, () => {
            console.log("Msdp_Test_Timeline_016 off success");
            done();
            console.log("Msdp_Test_Timeline_016 success");
        })
    })
	
    /**
      * @tc.number Timeline_017
      * @tc.name Normal value return
      * @tc.desc AREA_UNKNOWN
      */
    it('Msdp_Test_Timeline_017', 0, async function (done) {
        console.log("Msdp_Test_Timeline_017 start");
        timeline.on(timeline.TimelineArea.AREA_UNKNOWN, (data) => {
            expect(data.TimeLineValue !== -1).assertTrue();
            console.log("Msdp_Test_Timeline_017 on success");
            timeline.off(timeline.TimelineArea.AREA_UNKNOWN, () => {
                done();
                console.log("Msdp_Test_Timeline_017 success");
            })
        })
    })

    /**
      * @tc.number Timeline_018
      * @tc.name -1 return
      * @tc.desc AREA_UNKNOWN
      */
    it('Msdp_Test_Timeline_018', 0, async function (done) {
        console.log("Msdp_Test_Timeline_018 start");
        timeline.on(-1, (data) => {
            expect(data['TimelineValue'] == -1).assertTrue();
            console.log("Msdp_Test_Timeline_018 success");
            done();
        })
    })

    /**
     * @tc.number Timeline_019
     * @tc.name Loop 10 times
     * @tc.desc AREA_UNKNOWN
    */
    it('Msdp_Test_Timeline_019', 0, async function (done) {
        console.log("Msdp_Test_Timeline_019 start");
        for (let i = 0; i < 10; i++) {
            timeline.on(timeline.TimelineArea.AREA_UNKNOWN, (data) => {
                console.log("data is ="+data['TimelineValue']);
                expect(data.TimeLineValue !== -1).assertTrue();
                console.log("Msdp_Test_Timeline_019 on success");
                timeline.off(timeline.TimelineArea.AREA_UNKNOWN, () => {
                    done();
                    console.log("Msdp_Test_Timeline_019 success");
                })
            })
        }
    })

    /**
     * @tc.number Timeline_020
     * @tc.name Ilegal value
     * @tc.desc AREA_UNKNOWN
    */
    it('Msdp_Test_Timeline_020', 0, async function (done) {
        console.log("Msdp_Test_Timeline_020 start");
        timeline.on(17, (data) => {
            expect(data['TimelineValue'] == -1).assertTrue();
            done();
            console.log("Msdp_Test_Timeline_020 success");
        })
    })

    /**
      * @tc.number Timeline_021
      * @tc.name Normal value return
      * @tc.desc AREA_UNKNOWN
      */
    it('Msdp_Test_Timeline_021', 0, async function (done) {
        console.log("Msdp_Test_Timeline_021 start");
        timeline.on(timeline.TimelineArea.AREA_UNKNOWN, (data) => {
            expect(data.timelineValue !== -1).assertTrue();
            timeline.off(timeline.TimelineArea.AREA_UNKNOWN, () => {
                console.log("Msdp_Test_Timeline_021 off success");
                done();
                console.log("Msdp_Test_Timeline_021 success");
            })
        })
    })

    /**
      * @tc.number Timeline_022
      * @tc.name -1 return
      * @tc.desc AREA_UNKNOWN
      */
    it('Msdp_Test_Timeline_022', 0, async function (done) {
        console.log("Msdp_Test_Timeline_022 start");
        timeline.off(-1, () => {
            console.log("Msdp_Test_Timeline_022 off failed");
            done();
            console.log("Msdp_Test_Timeline_022 success");

        })
    })

    /**
     * @tc.number Timeline_023
     * @tc.name Loop 10 times
     * @tc.desc AREA_UNKNOWN
    */
    it('Msdp_Test_Timeline_023', 0, async function (done) {
        console.log("Msdp_Test_Timeline_023 start");

        for (let i = 0; i < 10; i++) {
            timeline.on(timeline.TimelineArea.AREA_UNKNOWN, (data) => {
                expect(data.TimeLineValue !== -1).assertTrue()
            })
            timeline.off(timeline.TimelineArea.AREA_UNKNOWN, () => {
                console.log("Msdp_Test_Timeline_023 off success");
                done();
                console.log("Msdp_Test_Timeline_023 success");
            })
        }
    })

    /**
     * @tc.number Timeline_024
     * @tc.name Ilegal value
     * @tc.desc AREA_UNKNOWN
    */
    it('Msdp_Test_Timeline_024', 0, async function (done) {
        console.log("Msdp_Test_Timeline_024 start");
        timeline.off(17, () => {
            console.log("Msdp_Test_Timeline_024 off success");
            done();
            console.log("Msdp_Test_Timeline_024 success");
        })
    })
	
    /**
      * @tc.number Timeline_009
      * @tc.name Normal value return
      * @tc.desc
      */
    it('Msdp_Test_Timeline_009', 0, async function (done) {
        console.log("Msdp_Test_Timeline_009 start");
        timeline.setPositionState(1, 1);
        done();
        console.log("Msdp_Test_Timeline_009 on success");
    })

    /**
      * @tc.number Timeline_010
      * @tc.name -1
      * @tc.desc
      */
    it('Msdp_Test_Timeline_010', 0, async function (done) {
        console.log("Msdp_Test_Timeline_010 start");
        timeline.setPositionState(-1, 1);
        done();
        console.log("Msdp_Test_Timeline_010 on success");
    })

    /**
      * @tc.number Timeline_011
      * @tc.name Normal value return
      * @tc.desc setHomePosition
      */
    it('Msdp_Test_Timeline_011', 0, async function (done) {
        console.log("Msdp_Test_Timeline_011 start");
        timeline.setHomePosition(1, 1);
        done();
        console.log("Msdp_Test_Timeline_011 on success");
    })

    /**
      * @tc.number Timeline_012
      * @tc.name -1
      * @tc.desc
      */
    it('Msdp_Test_Timeline_012', 0, async function (done) {
        console.log("Msdp_Test_Timeline_012 start");
        timeline.setHomePosition(-1, 1);
        done();
        console.log("Msdp_Test_Timeline_012 on success");
    })

    /**
      * @tc.number Timeline_013
      * @tc.name Normal value return
      * @tc.desc setCompanyPosition
      */
    it('Msdp_Test_Timeline_013', 0, async function (done) {
        console.log("Msdp_Test_Timeline_013 start");
        timeline.setCompanyPosition(1, 1);
        done();
        console.log("Msdp_Test_Timeline_013 on success");
    })

    /**
      * @tc.number Timeline_014
      * @tc.name -1
      * @tc.desc
      */
    it('Msdp_Test_Timeline_014', 0, async function (done) {
        console.log("Msdp_Test_Timeline_014 start");
        timeline.setCompanyPosition(-1, 1);
        done();
        console.log("Msdp_Test_Timeline_014 on success");
    })

    /**
      * @tc.number Timeline_015
      * @tc.name Normal value return
      * @tc.desc setSleepTime
      */
    it('Msdp_Test_Timeline_015', 0, async function (done) {
        console.log("Msdp_Test_Timeline_015 start");
        timeline.setSleepTime(1, 1);
        done();
        console.log("Msdp_Test_Timeline_015 on success");
    })

    /**
      * @tc.number Timeline_016
      * @tc.name -1
      * @tc.desc
      */
    it('Msdp_Test_Timeline_016', 0, async function (done) {
        console.log("Msdp_Test_Timeline_016 start");
        timeline.setSleepTime(-1, 1);
        done();
        console.log("Msdp_Test_Timeline_016 on success");
    })


    /**
      * @tc.number Timeline_017
      * @tc.name Normal value return
      * @tc.desc setRestTime
      */
    it('Msdp_Test_Timeline_017', 0, async function (done) {
        console.log("Msdp_Test_Timeline_017 start");
        timeline.setRestTime(1, 1);
        done();
        console.log("Msdp_Test_Timeline_017 on success");
    })

    /**
      * @tc.number Timeline_018
      * @tc.name -1
      * @tc.desc
      */
    it('Msdp_Test_Timeline_018', 0, async function (done) {
        console.log("Msdp_Test_Timeline_018 start");
        timeline.setRestTime(-1, 1);
        done();
        console.log("Msdp_Test_Timeline_018 on success");
    })


    /**
      * @tc.number Timeline_019
      * @tc.name Normal value return
      * @tc.desc setWorkTime
      */
    it('Msdp_Test_Timeline_019', 0, async function (done) {
        console.log("Msdp_Test_Timeline_019 start");
        timeline.setWorkTime(1, 1);
        done();
        console.log("Msdp_Test_Timeline_019 on success");
    })

    /**
      * @tc.number Timeline_020
      * @tc.name -1
      * @tc.desc
      */
    it('Msdp_Test_Timeline_020', 0, async function (done) {
        console.log("Msdp_Test_Timeline_020 start");
        timeline.setWorkTime(-1, 1);
        done();
        console.log("Msdp_Test_Timeline_020 on success");
    })


    /**
      * @tc.number Timeline_021
      * @tc.name Normal value return
      * @tc.desc getForcecast
      */
    it('Msdp_Test_Timeline_021', 0, async function (done) {
        console.log("Msdp_Test_Timeline_021 start");
        timeline.getForcecast(1);
        done();
        console.log("Msdp_Test_Timeline_021 on success");
    })

    /**
      * @tc.number Timeline_022
      * @tc.name -1
      * @tc.desc
      */
    it('Msdp_Test_Timeline_022', 0, async function (done) {
        console.log("Msdp_Test_Timeline_022 start");
        timeline.getForcecast(-1);
        done();
        console.log("Msdp_Test_Timeline_022 on success");
    })
	
	/**
      * @tc.number Timeline_025
      * @tc.name Normal value return
      * @tc.desc
      */
    it('Msdp_Test_Timeline_025', 0, async function (done) {
        console.log("Msdp_Test_Timeline_025 start");
        timeline.setPositionState(1, 1);
        done();
        console.log("Msdp_Test_Timeline_025 on success");
    })

    /**
      * @tc.number Timeline_026
      * @tc.name -1
      * @tc.desc
      */
    it('Msdp_Test_Timeline_026', 0, async function (done) {
        console.log("Msdp_Test_Timeline_026 start");
        timeline.setPositionState(-1, 1);
        done();
        console.log("Msdp_Test_Timeline_026 on success");
    })

    /**
      * @tc.number Timeline_027
      * @tc.name Normal value return
      * @tc.desc setHomePosition
      */
    it('Msdp_Test_Timeline_027', 0, async function (done) {
        console.log("Msdp_Test_Timeline_027 start");
        timeline.setHomePosition(1, 1);
        done();
        console.log("Msdp_Test_Timeline_027 on success");
    })

    /**
      * @tc.number Timeline_028
      * @tc.name -1
      * @tc.desc
      */
    it('Msdp_Test_Timeline_028', 0, async function (done) {
        console.log("Msdp_Test_Timeline_028 start");
        timeline.setHomePosition(-1, 1);
        done();
        console.log("Msdp_Test_Timeline_028 on success");
    })

    /**
      * @tc.number Timeline_029
      * @tc.name Normal value return
      * @tc.desc setCompanyPosition
      */
    it('Msdp_Test_Timeline_029', 0, async function (done) {
        console.log("Msdp_Test_Timeline_029 start");
        timeline.setCompanyPosition(1, 1);
        done();
        console.log("Msdp_Test_Timeline_029 on success");
    })

    /**
      * @tc.number Timeline_030
      * @tc.name -1
      * @tc.desc
      */
    it('Msdp_Test_Timeline_030', 0, async function (done) {
        console.log("Msdp_Test_Timeline_030 start");
        timeline.setCompanyPosition(-1, 1);
        done();
        console.log("Msdp_Test_Timeline_030 on success");
    })

    /**
      * @tc.number Timeline_031
      * @tc.name Normal value return
      * @tc.desc setSleepTime
      */
    it('Msdp_Test_Timeline_031', 0, async function (done) {
        console.log("Msdp_Test_Timeline_031 start");
        timeline.setSleepTime(1, 1);
        done();
        console.log("Msdp_Test_Timeline_031 on success");
    })

    /**
      * @tc.number Timeline_032
      * @tc.name -1
      * @tc.desc
      */
    it('Msdp_Test_Timeline_032', 0, async function (done) {
        console.log("Msdp_Test_Timeline_032 start");
        timeline.setSleepTime(-1, 1);
        done();
        console.log("Msdp_Test_Timeline_032 on success");
    })


    /**
      * @tc.number Timeline_033
      * @tc.name Normal value return
      * @tc.desc setRestTime
      */
    it('Msdp_Test_Timeline_033', 0, async function (done) {
        console.log("Msdp_Test_Timeline_033 start");
        timeline.setRestTime(1, 1);
        done();
        console.log("Msdp_Test_Timeline_033 on success");
    })

    /**
      * @tc.number Timeline_034
      * @tc.name -1
      * @tc.desc
      */
    it('Msdp_Test_Timeline_034', 0, async function (done) {
        console.log("Msdp_Test_Timeline_034 start");
        timeline.setRestTime(-1, 1);
        done();
        console.log("Msdp_Test_Timeline_034 on success");
    })


    /**
      * @tc.number Timeline_035
      * @tc.name Normal value return
      * @tc.desc setWorkTime
      */
    it('Msdp_Test_Timeline_035', 0, async function (done) {
        console.log("Msdp_Test_Timeline_035 start");
        timeline.setWorkTime(1, 1);
        done();
        console.log("Msdp_Test_Timeline_035 on success");
    })

    /**
      * @tc.number Timeline_036
      * @tc.name -1
      * @tc.desc
      */
    it('Msdp_Test_Timeline_036', 0, async function (done) {
        console.log("Msdp_Test_Timeline_036 start");
        timeline.setWorkTime(-1, 1);
        done();
        console.log("Msdp_Test_Timeline_036 on success");
    })


    /**
      * @tc.number Timeline_037
      * @tc.name Normal value return
      * @tc.desc getForcecast
      */
    it('Msdp_Test_Timeline_037', 0, async function (done) {
        console.log("Msdp_Test_Timeline_037 start");
        timeline.getForcecast(1);
        done();
        console.log("Msdp_Test_Timeline_037 on success");
    })

    /**
      * @tc.number Timeline_038
      * @tc.name -1
      * @tc.desc
      */
    it('Msdp_Test_Timeline_038', 0, async function (done) {
        console.log("Msdp_Test_Timeline_038 start");
        timeline.getForcecast(-1);
        done();
        console.log("Msdp_Test_Timeline_038 on success");
    })

})