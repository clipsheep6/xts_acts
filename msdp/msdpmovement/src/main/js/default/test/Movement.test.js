import app from '@system.app'
import movement from "@ohos.movement"
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

describe('MsdpInfoTest', function () {
    console.log("*************Movement Unit Test Begin*************");

    /**
      * @tc.number Movement_001
      * @tc.name Normal value return
      * @tc.desc TYPE_IN_VEHICLE
      */
    it('Msdp_Test_Movement_001', 0, async function (done) {
        console.log("Msdp_Test_Movement_001 start");
        movement.on(movement.MovementType.TYPE_IN_VEHICLE, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            console.log("Msdp_Test_Movement_001 on success");
            movement.off(movement.MovementType.TYPE_IN_VEHICLE, () => {
                done();
                console.log("Msdp_Test_Movement_001 success");
            })
        })
    })

    /**
      * @tc.number Movement_002
      * @tc.name -1 return
      * @tc.desc TYPE_IN_VEHICLE
      */
    it('Msdp_Test_Movement_002', 0, async function (done) {
        console.log("Msdp_Test_Movement_002 start");
        movement.on(-1, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_002 success");
        })
    })

    /**
     * @tc.number Movement_003
     * @tc.name Loop 10 times
     * @tc.desc TYPE_IN_VEHICLE
    */
    it('Msdp_Test_Movement_003', 0, async function (done) {
        console.log("Msdp_Test_Movement_003 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_IN_VEHICLE, (data) => {
                expect(data.movementValue !== -1).assertTrue()
                console.log("Msdp_Test_Movement_003 on success")
            })
            movement.off(movement.MovementType.TYPE_IN_VEHICLE, () => {
                done();
                console.log("Msdp_Test_Movement_003 success");
            })
        }
    })

    /**
     * @tc.number Movement_004
     * @tc.name Ilegal value
     * @tc.desc TYPE_IN_VEHICLE
    */
    it('Msdp_Test_Movement_004', 0, async function (done) {
        console.log("Msdp_Test_Movement_004 start");
        movement.on(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_004 success");
        })
    })

    /**
      * @tc.number Movement_005
      * @tc.name Normal value return
      * @tc.desc TYPE_IN_VEHICLE
      */
    it('Msdp_Test_Movement_005', 0, async function (done) {
        console.log("Msdp_Test_Movement_005 start");
        movement.on(movement.MovementType.TYPE_IN_VEHICLE, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            movement.off(movement.MovementType.TYPE_IN_VEHICLE, () => {
                console.log("Msdp_Test_Movement_005 off success");
                done();
                console.log("Msdp_Test_Movement_005 success");
            })
        })
    })

    /**
      * @tc.number Movement_006
      * @tc.name -1 return
      * @tc.desc TYPE_IN_VEHICLE
      */
    it('Msdp_Test_Movement_006', 0, async function (done) {
        console.log("Msdp_Test_Movement_006 start");
        movement.off(-1, () => {
            done();
            console.log("Msdp_Test_Movement_006 success");
        })
    })

    /**
     * @tc.number Movement_007
     * @tc.name Loop 10 times
     * @tc.desc TYPE_IN_VEHICLE
    */
    it('Msdp_Test_Movement_007', 0, async function (done) {
        console.log("Msdp_Test_Movement_007 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_IN_VEHICLE, (data) => {
                expect(data.movementValue !== -1).assertTrue()
            })
            movement.off(movement.MovementType.TYPE_IN_VEHICLE, () => {
                console.log("Msdp_Test_Movement_007 off success")
                done();
                console.log("Msdp_Test_Movement_007 success");
            })
        }
    })

    /**
     * @tc.number Movement_008
     * @tc.name Ilegal value
     * @tc.desc TYPE_IN_VEHICLE
    */
    it('Msdp_Test_Movement_008', 0, async function (done) {
        console.log("Msdp_Test_Movement_008 start");
        movement.off(17, () => {
            done();
            console.log("Msdp_Test_Movement_008 success");
        })
    })

    /**
      * @tc.number Movement_009
      * @tc.name Normal value return
      * @tc.desc TYPE_IN_VEHICLE
      */
    it('Msdp_Test_Movement_009', 0, async function (done) {
        console.log("Msdp_Test_Movement_009 start");
        movement.once(movement.MovementType.TYPE_IN_VEHICLE, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_009 success");
        })
    })

    /**
      * @tc.number Movement_010
      * @tc.name -1 return
      * @tc.desc TYPE_IN_VEHICLE
      */
    it('Msdp_Test_Movement_010', 0, async function (done) {
        console.log("Msdp_Test_Movement_010 start");
        movement.once(-1, (data) => {
            expect(data.movementValue == -1).assertTrue;
            done();
            console.log("Msdp_Test_Movement_010 success");
        })
    })

    /**
     * @tc.number Movement_011
     * @tc.name Loop 10 times
     * @tc.desc TYPE_IN_VEHICLE
    */
    it('Msdp_Test_Movement_011', 0, async function (done) {
        console.log("Msdp_Test_Movement_011 start");
        for (let i = 0; i < 10; i++) {
            movement.once(movement.MovementType.TYPE_IN_VEHICLE, (data) => {
                expect(data.movementValue == -1).assertTrue();
                done();
                console.log("Msdp_Test_Movement_011 success");
            })
        }
    })

    /**
     * @tc.number Movement_012
     * @tc.name Ilegal value
     * @tc.desc TYPE_IN_VEHICLE
    */
    it('Msdp_Test_Movement_012', 0, async function (done) {
        console.log("Msdp_Test_Movement_012 start");
        movement.once(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_012 success");
        })
    })

    /**
      * @tc.number Movement_013
      * @tc.name Normal value return
      * @tc.desc TYPE_IN_AUTO
      */
    it('Msdp_Test_Movement_013', 0, async function (done) {
        console.log("Msdp_Test_Movement_013 start");
        movement.on(movement.MovementType.TYPE_IN_AUTO, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            console.log("Msdp_Test_Movement_013 on success");
            movement.off(movement.MovementType.TYPE_IN_AUTO, () => {
                done();
                console.log("Msdp_Test_Movement_013 success");
            })
        })
    })

    /**
      * @tc.number Movement_014
      * @tc.name -1 return
      * @tc.desc TYPE_IN_AUTO
      */
    it('Msdp_Test_Movement_014', 0, async function (done) {
        console.log("Msdp_Test_Movement_014 start");
        movement.on(-1, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_014 success");
        })
    })

    /**
     * @tc.number Movement_015
     * @tc.name Loop 10 times
     * @tc.desc TYPE_IN_AUTO
    */
    it('Msdp_Test_Movement_015', 0, async function (done) {
        console.log("Msdp_Test_Movement_003 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_IN_AUTO, (data) => {
                expect(data.movementValue !== -1).assertTrue()
                console.log("Msdp_Test_Movement_015 on success")
            })
            movement.off(movement.MovementType.TYPE_IN_AUTO, () => {
                done();
                console.log("Msdp_Test_Movement_015 success");
            })
        }
    })

    /**
     * @tc.number Movement_016
     * @tc.name Ilegal value
     * @tc.desc TYPE_IN_AUTO
    */
    it('Msdp_Test_Movement_016', 0, async function (done) {
        console.log("Msdp_Test_Movement_016 start");
        movement.on(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_016 success");
        })
    })

    /**
      * @tc.number Movement_017
      * @tc.name Normal value return
      * @tc.desc TYPE_IN_AUTO
      */
    it('Msdp_Test_Movement_017', 0, async function (done) {
        console.log("Msdp_Test_Movement_017 start");
        movement.on(movement.MovementType.TYPE_IN_AUTO, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            movement.off(movement.MovementType.TYPE_IN_AUTO, () => {
                console.log("Msdp_Test_Movement_017 off success");
                done();
                console.log("Msdp_Test_Movement_017 success");
            })
        })
    })

    /**
      * @tc.number Movement_018
      * @tc.name -1 return
      * @tc.desc TYPE_IN_AUTO
      */
    it('Msdp_Test_Movement_018', 0, async function (done) {
        console.log("Msdp_Test_Movement_018 start");
        movement.off(-1, () => {
            done();
            console.log("Msdp_Test_Movement_018 success");
        })
    })

    /**
     * @tc.number Movement_019
     * @tc.name Loop 10 times
     * @tc.desc TYPE_IN_AUTO
    */
    it('Msdp_Test_Movement_019', 0, async function (done) {
        console.log("Msdp_Test_Movement_019 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_IN_AUTO, (data) => {
                expect(data.movementValue !== -1).assertTrue()
            })
            movement.off(movement.MovementType.TYPE_IN_AUTO, () => {
                console.log("Msdp_Test_Movement_019 off success")
                done();
                console.log("Msdp_Test_Movement_019 success");
            })
        }
    })

    /**
     * @tc.number Movement_020
     * @tc.name Ilegal value
     * @tc.desc TYPE_IN_AUTO
    */
    it('Msdp_Test_Movement_020', 0, async function (done) {
        console.log("Msdp_Test_Movement_020 start");
        movement.off(17, () => {
            done();
            console.log("Msdp_Test_Movement_020 success");
        })
    })

    /**
      * @tc.number Movement_021
      * @tc.name Normal value return
      * @tc.desc TYPE_IN_AUTO
      */
    it('Msdp_Test_Movement_021', 0, async function (done) {
        console.log("Msdp_Test_Movement_021 start");
        movement.once(movement.MovementType.TYPE_IN_AUTO, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_021 success");
        })
    })

    /**
      * @tc.number Movement_022
      * @tc.name -1 return
      * @tc.desc TYPE_IN_AUTO
      */
    it('Msdp_Test_Movement_022', 0, async function (done) {
        console.log("Msdp_Test_Movement_022 start");
        movement.once(-1, (data) => {
            expect(data.movementValue == -1).assertTrue;
            done();
            console.log("Msdp_Test_Movement_022 success");
        })
    })

    /**
     * @tc.number Movement_023
     * @tc.name Loop 10 times
     * @tc.desc TYPE_IN_AUTO
    */
    it('Msdp_Test_Movement_023', 0, async function (done) {
        console.log("Msdp_Test_Movement_023 start");
        for (let i = 0; i < 10; i++) {
            movement.once(movement.MovementType.TYPE_IN_AUTO, (data) => {
                expect(data.movementValue == -1).assertTrue();
                done();
                console.log("Msdp_Test_Movement_023 success");
            })
        }
    })

    /**
     * @tc.number Movement_024
     * @tc.name Ilegal value
     * @tc.desc TYPE_IN_AUTO
    */
    it('Msdp_Test_Movement_024', 0, async function (done) {
        console.log("Msdp_Test_Movement_024 start");
        movement.once(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_024 success");
        })
    })

    /**
      * @tc.number Movement_025
      * @tc.name Normal value return
      * @tc.desc TYPE_ON_BICYCLE
      */
    it('Msdp_Test_Movement_025', 0, async function (done) {
        console.log("Msdp_Test_Movement_025 start");
        movement.on(movement.MovementType.TYPE_ON_BICYCLE, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            console.log("Msdp_Test_Movement_025 on success");
            movement.off(movement.MovementType.TYPE_ON_BICYCLE, () => {
                done();
                console.log("Msdp_Test_Movement_025 success");
            })
        })
    })

    /**
      * @tc.number Movement_026
      * @tc.name -1 return
      * @tc.desc TYPE_ON_BICYCLE
      */
    it('Msdp_Test_Movement_026', 0, async function (done) {
        console.log("Msdp_Test_Movement_026 start");
        movement.on(-1, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_026 success");
        })

    })

    /**
     * @tc.number Movement_027
     * @tc.name Loop 10 times
     * @tc.desc TYPE_ON_BICYCLE
    */
    it('Msdp_Test_Movement_027', 0, async function (done) {
        console.log("Msdp_Test_Movement_027 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_ON_BICYCLE, (data) => {
                expect(data.movementValue !== -1).assertTrue()
                console.log("Msdp_Test_Movement_027 on success")
            })
            movement.off(movement.MovementType.TYPE_ON_BICYCLE, () => {
                done();
                console.log("Msdp_Test_Movement_027 success");
            })
        }
    })

    /**
     * @tc.number Movement_028
     * @tc.name Ilegal value
     * @tc.desc TYPE_ON_BICYCLE
    */
    it('Msdp_Test_Movement_028', 0, async function (done) {
        console.log("Msdp_Test_Movement_028 start");
        movement.on(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_028 success");
        })
    })

    /**
      * @tc.number Movement_029
      * @tc.name Normal value return
      * @tc.desc TYPE_ON_BICYCLE
      */
    it('Msdp_Test_Movement_029', 0, async function (done) {
        console.log("Msdp_Test_Movement_029 start");
        movement.on(movement.MovementType.TYPE_ON_BICYCLE, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            movement.off(movement.MovementType.TYPE_ON_BICYCLE, () => {
                console.log("Msdp_Test_Movement_029 off success");
                done();
                console.log("Msdp_Test_Movement_029 success");
            })
        })
    })

    /**
      * @tc.number Movement_030
      * @tc.name -1 return
      * @tc.desc TYPE_ON_BICYCLE
      */
    it('Msdp_Test_Movement_030', 0, async function (done) {
        console.log("Msdp_Test_Movement_030 start");
        movement.off(-1, () => {
            done();
            console.log("Msdp_Test_Movement_030 success");
        })
    })

    /**
     * @tc.number Movement_031
     * @tc.name Loop 10 times
     * @tc.desc TYPE_ON_BICYCLE
    */
    it('Msdp_Test_Movement_031', 0, async function (done) {
        console.log("Msdp_Test_Movement_031 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_ON_BICYCLE, (data) => {
                expect(data.movementValue !== -1).assertTrue()
            })
            movement.off(movement.MovementType.TYPE_ON_BICYCLE, () => {
                console.log("Msdp_Test_Movement_031 off success")
                done();
                console.log("Msdp_Test_Movement_031 success");
            })
        }
    })

    /**
     * @tc.number Movement_032
     * @tc.name Ilegal value
     * @tc.desc TYPE_ON_BICYCLE
    */
    it('Msdp_Test_Movement_032', 0, async function (done) {
        console.log("Msdp_Test_Movement_032 start");
        movement.off(17, () => {
            done();
            console.log("Msdp_Test_Movement_032 success");
        })
    })

    /**
      * @tc.number Movement_033
      * @tc.name Normal value return
      * @tc.desc TYPE_ON_BICYCLE
      */
    it('Msdp_Test_Movement_033', 0, async function (done) {
        console.log("Msdp_Test_Movement_033 start");
        movement.once(movement.MovementType.TYPE_ON_BICYCLE, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_033 success");
        })
    })

    /**
      * @tc.number Movement_034
      * @tc.name -1 return
      * @tc.desc TYPE_ON_BICYCLE
      */
    it('Msdp_Test_Movement_034', 0, async function (done) {
        console.log("Msdp_Test_Movement_034 start");
        movement.once(-1, (data) => {
            expect(data.movementValue == -1).assertTrue;
            done();
            console.log("Msdp_Test_Movement_034 success");
        })
    })

    /**
     * @tc.number Movement_035
     * @tc.name Loop 10 times
     * @tc.desc TYPE_ON_BICYCLE
    */
    it('Msdp_Test_Movement_035', 0, async function (done) {
        console.log("Msdp_Test_Movement_035 start");
        for (let i = 0; i < 10; i++) {
            movement.once(movement.MovementType.TYPE_ON_BICYCLE, (data) => {
                expect(data.movementValue == -1).assertTrue();
                done();
                console.log("Msdp_Test_Movement_035 success");
            })
        }
    })

    /**
     * @tc.number Movement_036
     * @tc.name Ilegal value
     * @tc.desc TYPE_ON_BICYCLE
    */
    it('Msdp_Test_Movement_036', 0, async function (done) {
        console.log("Msdp_Test_Movement_036 start");
        movement.once(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_036 success");
        })
    })


    /**
      * @tc.number Movement_037
      * @tc.name Normal value return
      * @tc.desc TYPE_WALKING
      */
    it('Msdp_Test_Movement_037', 0, async function (done) {
        console.log("Msdp_Test_Movement_037 start");
        movement.on(movement.MovementType.TYPE_WALKING, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            console.log("Msdp_Test_Movement_037 on success");
            movement.off(movement.MovementType.TYPE_WALKING, () => {
                done();
                console.log("Msdp_Test_Movement_037 success");
            })
        })
    })

    /**
      * @tc.number Movement_038
      * @tc.name -1 return
      * @tc.desc TYPE_WALKING
      */
    it('Msdp_Test_Movement_038', 0, async function (done) {
        console.log("Msdp_Test_Movement_038 start");
        movement.on(-1, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_038 success");
        })
    })

    /**
     * @tc.number Movement_039
     * @tc.name Loop 10 times
     * @tc.desc TYPE_WALKING
    */
    it('Msdp_Test_Movement_039', 0, async function (done) {
        console.log("Msdp_Test_Movement_039 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_WALKING, (data) => {
                expect(data.movementValue !== -1).assertTrue()
                console.log("Msdp_Test_Movement_039 on success")
            })
            movement.off(movement.MovementType.TYPE_WALKING, () => {
                done();
                console.log("Msdp_Test_Movement_039 success");
            })
        }
    })

    /**
     * @tc.number Movement_040
     * @tc.name Ilegal value
     * @tc.desc TYPE_WALKING
    */
    it('Msdp_Test_Movement_040', 0, async function (done) {
        console.log("Msdp_Test_Movement_040 start");
        movement.on(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_040 success");
        })
    })

    /**
      * @tc.number Movement_041
      * @tc.name Normal value return
      * @tc.desc TYPE_WALKING
      */
    it('Msdp_Test_Movement_041', 0, async function (done) {
        console.log("Msdp_Test_Movement_041 start");
        movement.on(movement.MovementType.TYPE_WALKING, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            movement.off(movement.MovementType.TYPE_WALKING, () => {
                console.log("Msdp_Test_Movement_041 off success");
                done();
                console.log("Msdp_Test_Movement_041 success");
            })
        })
    })

    /**
      * @tc.number Movement_042
      * @tc.name -1 return
      * @tc.desc TYPE_WALKING
      */
    it('Msdp_Test_Movement_042', 0, async function (done) {
        console.log("Msdp_Test_Movement_042 start");
        movement.off(-1, () => {
            done();
            console.log("Msdp_Test_Movement_042 success");
        })
    })

    /**
     * @tc.number Movement_043
     * @tc.name Loop 10 times
     * @tc.desc TYPE_WALKING
    */
    it('Msdp_Test_Movement_043', 0, async function (done) {
        console.log("Msdp_Test_Movement_043 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_WALKING, (data) => {
                expect(data.movementValue !== -1).assertTrue()
            })
            movement.off(movement.MovementType.TYPE_WALKING, () => {
                console.log("Msdp_Test_Movement_043 off success")
                done();
                console.log("Msdp_Test_Movement_043 success");
            })
        }
    })

    /**
     * @tc.number Movement_044
     * @tc.name Ilegal value
     * @tc.desc TYPE_WALKING
    */
    it('Msdp_Test_Movement_044', 0, async function (done) {
        console.log("Msdp_Test_Movement_044 start");
        movement.off(17, () => {
            done();
            console.log("Msdp_Test_Movement_044 success");
        })
    })

    /**
      * @tc.number Movement_045
      * @tc.name Normal value return
      * @tc.desc TYPE_WALKING
      */
    it('Msdp_Test_Movement_045', 0, async function (done) {
        console.log("Msdp_Test_Movement_045 start");
        movement.once(movement.MovementType.TYPE_WALKING, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_045 success");
        })
    })

    /**
      * @tc.number Movement_046
      * @tc.name -1 return
      * @tc.desc TYPE_WALKING
      */
    it('Msdp_Test_Movement_046', 0, async function (done) {
        console.log("Msdp_Test_Movement_046 start");
        movement.once(-1, (data) => {
            expect(data.movementValue == -1).assertTrue;
            done();
            console.log("Msdp_Test_Movement_046 success");
        })
    })

    /**
     * @tc.number Movement_047
     * @tc.name Loop 10 times
     * @tc.desc TYPE_WALKING
    */
    it('Msdp_Test_Movement_047', 0, async function (done) {
        console.log("Msdp_Test_Movement_047 start");
        for (let i = 0; i < 10; i++) {
            movement.once(movement.MovementType.TYPE_WALKING, (data) => {
                expect(data.movementValue == -1).assertTrue();
                done();
                console.log("Msdp_Test_Movement_047 success");
            })
        }
    })

    /**
     * @tc.number Movement_048
     * @tc.name Ilegal value
     * @tc.desc TYPE_WALKING
    */
    it('Msdp_Test_Movement_048', 0, async function (done) {
        console.log("Msdp_Test_Movement_048 start");
        movement.once(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_048 success");
        })
    })


    /**
      * @tc.number Movement_049
      * @tc.name Normal value return
      * @tc.desc TYPE_STILL
      */
    it('Msdp_Test_Movement_049', 0, async function (done) {
        console.log("Msdp_Test_Movement_049 start");
        movement.on(movement.MovementType.TYPE_STILL, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            console.log("Msdp_Test_Movement_049 on success");
            movement.off(movement.MovementType.TYPE_STILL, () => {
                done();
                console.log("Msdp_Test_Movement_049 success");
            })
        })
    })

    /**
      * @tc.number Movement_050
      * @tc.name -1 return
      * @tc.desc TYPE_STILL
      */
    it('Msdp_Test_Movement_050', 0, async function (done) {
        console.log("Msdp_Test_Movement_050 start");
        movement.on(-1, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_050 success");
        })
    })

    /**
     * @tc.number Movement_051
     * @tc.name Loop 10 times
     * @tc.desc TYPE_STILL
    */
    it('Msdp_Test_Movement_051', 0, async function (done) {
        console.log("Msdp_Test_Movement_051 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_STILL, (data) => {
                expect(data.movementValue !== -1).assertTrue()
                console.log("Msdp_Test_Movement_051 on success")
            })
            movement.off(movement.MovementType.TYPE_STILL, () => {
                done();
                console.log("Msdp_Test_Movement_051 success");
            })
        }
    })

    /**
     * @tc.number Movement_052
     * @tc.name Ilegal value
     * @tc.desc TYPE_STILL
    */
    it('Msdp_Test_Movement_052', 0, async function (done) {
        console.log("Msdp_Test_Movement_052 start");
        movement.on(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_052 success");
        })
    })

    /**
      * @tc.number Movement_053
      * @tc.name Normal value return
      * @tc.desc TYPE_STILL
      */
    it('Msdp_Test_Movement_053', 0, async function (done) {
        console.log("Msdp_Test_Movement_053 start");
        movement.on(movement.MovementType.TYPE_STILL, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            movement.off(movement.MovementType.TYPE_STILL, () => {
                console.log("Msdp_Test_Movement_053 off success");
                done();
                console.log("Msdp_Test_Movement_053 success");
            })
        })
    })

    /**
      * @tc.number Movement_054
      * @tc.name -1 return
      * @tc.desc TYPE_STILL
      */
    it('Msdp_Test_Movement_054', 0, async function (done) {
        console.log("Msdp_Test_Movement_054 start");
        movement.off(-1, () => {
            done();
            console.log("Msdp_Test_Movement_054 success");
        })
    })

    /**
     * @tc.number Movement_055
     * @tc.name Loop 10 times
     * @tc.desc TYPE_STILL
    */
    it('Msdp_Test_Movement_055', 0, async function (done) {
        console.log("Msdp_Test_Movement_055 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_STILL, (data) => {
                expect(data.movementValue !== -1).assertTrue()
            })
            movement.off(movement.MovementType.TYPE_STILL, () => {
                console.log("Msdp_Test_Movement_055 off success")
                done();
                console.log("Msdp_Test_Movement_055 success");
            })
        }
    })

    /**
     * @tc.number Movement_056
     * @tc.name Ilegal value
     * @tc.desc TYPE_STILL
    */
    it('Msdp_Test_Movement_056', 0, async function (done) {
        console.log("Msdp_Test_Movement_056 start");
        movement.off(17, () => {
            done();
            console.log("Msdp_Test_Movement_056 success");
        })
    })

    /**
      * @tc.number Movement_057
      * @tc.name Normal value return
      * @tc.desc TYPE_STILL
      */
    it('Msdp_Test_Movement_057', 0, async function (done) {
        console.log("Msdp_Test_Movement_057 start");
        movement.once(movement.MovementType.TYPE_STILL, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_057 success");
        })
    })

    /**
      * @tc.number Movement_058
      * @tc.name -1 return
      * @tc.desc TYPE_STILL
      */
    it('Msdp_Test_Movement_058', 0, async function (done) {
        console.log("Msdp_Test_Movement_058 start");
        movement.once(-1, (data) => {
            expect(data.movementValue == -1).assertTrue;
            done();
            console.log("Msdp_Test_Movement_058 success");
        })
    })

    /**
     * @tc.number Movement_059
     * @tc.name Loop 10 times
     * @tc.desc TYPE_STILL
    */
    it('Msdp_Test_Movement_059', 0, async function (done) {
        console.log("Msdp_Test_Movement_059 start");
        for (let i = 0; i < 10; i++) {
            movement.once(movement.MovementType.TYPE_STILL, (data) => {
                expect(data.movementValue == -1).assertTrue();
                done();
                console.log("Msdp_Test_Movement_059 success");
            })
        }
    })

    /**
     * @tc.number Movement_060
     * @tc.name Ilegal value
     * @tc.desc TYPE_STILL
    */
    it('Msdp_Test_Movement_060', 0, async function (done) {
        console.log("Msdp_Test_Movement_060 start");
        movement.once(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_060 success");
        })
    })


    /**
      * @tc.number Movement_061
      * @tc.name Normal value return
      * @tc.desc TYPE_ON_FOOT
      */
    it('Msdp_Test_Movement_061', 0, async function (done) {
        console.log("Msdp_Test_Movement_061 start");
        movement.on(movement.MovementType.TYPE_ON_FOOT, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            console.log("Msdp_Test_Movement_061 on success");
            movement.off(movement.MovementType.TYPE_ON_FOOT, () => {
                done();
                console.log("Msdp_Test_Movement_061 success");
            })
        })
    })

    /**
      * @tc.number Movement_062
      * @tc.name -1 return
      * @tc.desc TYPE_ON_FOOT
      */
    it('Msdp_Test_Movement_062', 0, async function (done) {
        console.log("Msdp_Test_Movement_062 start");
        movement.on(-1, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_062 success");
        })
    })

    /**
     * @tc.number Movement_063
     * @tc.name Loop 10 times
     * @tc.desc TYPE_ON_FOOT
    */
    it('Msdp_Test_Movement_063', 0, async function (done) {
        console.log("Msdp_Test_Movement_063 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_ON_FOOT, (data) => {
                expect(data.movementValue !== -1).assertTrue()
                console.log("Msdp_Test_Movement_063 on success")
            })
            movement.off(movement.MovementType.TYPE_ON_FOOT, () => {
                done();
                console.log("Msdp_Test_Movement_063 success");
            })
        }
    })

    /**
     * @tc.number Movement_064
     * @tc.name Ilegal value
     * @tc.desc TYPE_ON_FOOT
    */
    it('Msdp_Test_Movement_064', 0, async function (done) {
        console.log("Msdp_Test_Movement_064 start");
        movement.on(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_064 success");
        })
    })

    /**
      * @tc.number Movement_065
      * @tc.name Normal value return
      * @tc.desc TYPE_ON_FOOT
      */
    it('Msdp_Test_Movement_065', 0, async function (done) {
        console.log("Msdp_Test_Movement_065 start");
        movement.on(movement.MovementType.TYPE_ON_FOOT, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            movement.off(movement.MovementType.TYPE_ON_FOOT, () => {
                console.log("Msdp_Test_Movement_065 off success");
                done();
                console.log("Msdp_Test_Movement_065 success");
            })
        })
    })

    /**
      * @tc.number Movement_066
      * @tc.name -1 return
      * @tc.desc TYPE_ON_FOOT
      */
    it('Msdp_Test_Movement_066', 0, async function (done) {
        console.log("Msdp_Test_Movement_066 start");
        movement.off(-1, () => {
            done();
            console.log("Msdp_Test_Movement_066 success");
        })
    })

    /**
     * @tc.number Movement_067
     * @tc.name Loop 10 times
     * @tc.desc TYPE_ON_FOOT
    */
    it('Msdp_Test_Movement_067', 0, async function (done) {
        console.log("Msdp_Test_Movement_067 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_ON_FOOT, (data) => {
                expect(data.movementValue !== -1).assertTrue()
            })
            movement.off(movement.MovementType.TYPE_ON_FOOT, () => {
                console.log("Msdp_Test_Movement_067 off success")
                done();
                console.log("Msdp_Test_Movement_067 success");
            })
        }
    })

    /**
     * @tc.number Movement_068
     * @tc.name Ilegal value
     * @tc.desc TYPE_ON_FOOT
    */
    it('Msdp_Test_Movement_068', 0, async function (done) {
        console.log("Msdp_Test_Movement_068 start");
        movement.off(17, () => {
            done();
            console.log("Msdp_Test_Movement_068 success");
        })
    })

    /**
      * @tc.number Movement_069
      * @tc.name Normal value return
      * @tc.desc TYPE_ON_FOOT
      */
    it('Msdp_Test_Movement_069', 0, async function (done) {
        console.log("Msdp_Test_Movement_069 start");
        movement.once(movement.MovementType.TYPE_ON_FOOT, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_069 success");
        })
    })

    /**
      * @tc.number Movement_070
      * @tc.name -1 return
      * @tc.desc TYPE_ON_FOOT
      */
    it('Msdp_Test_Movement_070', 0, async function (done) {
        console.log("Msdp_Test_Movement_070 start");
        movement.once(-1, (data) => {
            expect(data.movementValue == -1).assertTrue;
            done();
            console.log("Msdp_Test_Movement_070 success");
        })
    })

    /**
     * @tc.number Movement_071
     * @tc.name Loop 10 times
     * @tc.desc TYPE_ON_FOOT
    */
    it('Msdp_Test_Movement_071', 0, async function (done) {
        console.log("Msdp_Test_Movement_071 start");
        for (let i = 0; i < 10; i++) {
            movement.once(movement.MovementType.TYPE_ON_FOOT, (data) => {
                expect(data.movementValue == -1).assertTrue();
                done();
                console.log("Msdp_Test_Movement_071 success");
            })
        }
    })

    /**
     * @tc.number Movement_072
     * @tc.name Ilegal value
     * @tc.desc TYPE_ON_FOOT
    */
    it('Msdp_Test_Movement_072', 0, async function (done) {
        console.log("Msdp_Test_Movement_072 start");
        movement.once(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_072 success");
        })
    })


    /**
      * @tc.number Movement_073
      * @tc.name Normal value return
      * @tc.desc TYPE_FAST_WALKING
      */
    it('Msdp_Test_Movement_073', 0, async function (done) {
        console.log("Msdp_Test_Movement_073 start");
        movement.on(movement.MovementType.TYPE_FAST_WALKING, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            console.log("Msdp_Test_Movement_073 on success");
            movement.off(movement.MovementType.TYPE_FAST_WALKING, () => {
                done();
                console.log("Msdp_Test_Movement_073 success");
            })
        })
    })

    /**
      * @tc.number Movement_074
      * @tc.name -1 return
      * @tc.desc TYPE_FAST_WALKING
      */
    it('Msdp_Test_Movement_074', 0, async function (done) {
        console.log("Msdp_Test_Movement_074 start");
        movement.on(-1, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_074 success");
        })
    })

    /**
     * @tc.number Movement_075
     * @tc.name Loop 10 times
     * @tc.desc TYPE_FAST_WALKING
    */
    it('Msdp_Test_Movement_075', 0, async function (done) {
        console.log("Msdp_Test_Movement_075 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_FAST_WALKING, (data) => {
                expect(data.movementValue !== -1).assertTrue()
                console.log("Msdp_Test_Movement_075 on success")
            })
            movement.off(movement.MovementType.TYPE_FAST_WALKING, () => {
                done();
                console.log("Msdp_Test_Movement_075 success");
            })
        }
    })

    /**
     * @tc.number Movement_076
     * @tc.name Ilegal value
     * @tc.desc TYPE_FAST_WALKING
    */
    it('Msdp_Test_Movement_076', 0, async function (done) {
        console.log("Msdp_Test_Movement_076 start");
        movement.on(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_076 success");
        })
    })

    /**
      * @tc.number Movement_077
      * @tc.name Normal value return
      * @tc.desc TYPE_FAST_WALKING
      */
    it('Msdp_Test_Movement_077', 0, async function (done) {
        console.log("Msdp_Test_Movement_077 start");
        movement.on(movement.MovementType.TYPE_FAST_WALKING, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            movement.off(movement.MovementType.TYPE_FAST_WALKING, () => {
                console.log("Msdp_Test_Movement_077 off success");
                done();
                console.log("Msdp_Test_Movement_077 success");
            })
        })
    })

    /**
      * @tc.number Movement_078
      * @tc.name -1 return
      * @tc.desc TYPE_FAST_WALKING
      */
    it('Msdp_Test_Movement_078', 0, async function (done) {
        console.log("Msdp_Test_Movement_078 start");
        movement.off(-1, () => {
            done();
            console.log("Msdp_Test_Movement_078 success");
        })
    })

    /**
     * @tc.number Movement_079
     * @tc.name Loop 10 times
     * @tc.desc TYPE_FAST_WALKING
    */
    it('Msdp_Test_Movement_079', 0, async function (done) {
        console.log("Msdp_Test_Movement_079 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_FAST_WALKING, (data) => {
                expect(data.movementValue !== -1).assertTrue()
            })
            movement.off(movement.MovementType.TYPE_FAST_WALKING, () => {
                console.log("Msdp_Test_Movement_079 off success")
                done();
                console.log("Msdp_Test_Movement_079 success");
            })
        }
    })

    /**
     * @tc.number Movement_080
     * @tc.name Ilegal value
     * @tc.desc TYPE_FAST_WALKING
    */
    it('Msdp_Test_Movement_080', 0, async function (done) {
        console.log("Msdp_Test_Movement_080 start");
        movement.off(17, () => {
            done();
            console.log("Msdp_Test_Movement_080 success");
        })
    })

    /**
      * @tc.number Movement_081
      * @tc.name Normal value return
      * @tc.desc TYPE_FAST_WALKING
      */
    it('Msdp_Test_Movement_081', 0, async function (done) {
        console.log("Msdp_Test_Movement_081 start");
        movement.once(movement.MovementType.TYPE_FAST_WALKING, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_081 success");
        })
    })

    /**
      * @tc.number Movement_082
      * @tc.name -1 return
      * @tc.desc TYPE_FAST_WALKING
      */
    it('Msdp_Test_Movement_082', 0, async function (done) {
        console.log("Msdp_Test_Movement_082 start");
        movement.once(-1, (data) => {
            expect(data.movementValue == -1).assertTrue;
            done();
            console.log("Msdp_Test_Movement_082 success");
        })
    })

    /**
     * @tc.number Movement_083
     * @tc.name Loop 10 times
     * @tc.desc TYPE_FAST_WALKING
    */
    it('Msdp_Test_Movement_083', 0, async function (done) {
        console.log("Msdp_Test_Movement_083 start");
        for (let i = 0; i < 10; i++) {
            movement.once(movement.MovementType.TYPE_FAST_WALKING, (data) => {
                expect(data.movementValue == -1).assertTrue();
                done();
                console.log("Msdp_Test_Movement_083 success");
            })
        }
    })

    /**
     * @tc.number Movement_084
     * @tc.name Ilegal value
     * @tc.desc TYPE_FAST_WALKING
    */
    it('Msdp_Test_Movement_084', 0, async function (done) {
        console.log("Msdp_Test_Movement_084 start");
        movement.once(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_084 success");
        })
    })

    /**
      * @tc.number Movement_085
      * @tc.name Normal value return
      * @tc.desc TYPE_RUNNING
      */
    it('Msdp_Test_Movement_085', 0, async function (done) {
        console.log("Msdp_Test_Movement_085 start");
        movement.on(movement.MovementType.TYPE_RUNNING, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            console.log("Msdp_Test_Movement_085 on success");
            movement.off(movement.MovementType.TYPE_RUNNING, () => {
                done();
                console.log("Msdp_Test_Movement_085 success");
            })
        })
    })

    /**
      * @tc.number Movement_086
      * @tc.name -1 return
      * @tc.desc TYPE_RUNNING
      */
    it('Msdp_Test_Movement_086', 0, async function (done) {
        console.log("Msdp_Test_Movement_086 start");
        movement.on(-1, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_086 success");
        })
    })

    /**
     * @tc.number Movement_087
     * @tc.name Loop 10 times
     * @tc.desc TYPE_RUNNING
    */
    it('Msdp_Test_Movement_087', 0, async function (done) {
        console.log("Msdp_Test_Movement_087 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_RUNNING, (data) => {
                expect(data.movementValue !== -1).assertTrue()
                console.log("Msdp_Test_Movement_087 on success")
            })
            movement.off(movement.MovementType.TYPE_RUNNING, () => {
                done();
                console.log("Msdp_Test_Movement_087 success");
            })
        }
    })

    /**
     * @tc.number Movement_088
     * @tc.name Ilegal value
     * @tc.desc TYPE_RUNNING
    */
    it('Msdp_Test_Movement_088', 0, async function (done) {
        console.log("Msdp_Test_Movement_088 start");
        movement.on(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_088 success");
        })
    })

    /**
      * @tc.number Movement_089
      * @tc.name Normal value return
      * @tc.desc TYPE_RUNNING
      */
    it('Msdp_Test_Movement_089', 0, async function (done) {
        console.log("Msdp_Test_Movement_089 start");
        movement.on(movement.MovementType.TYPE_RUNNING, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            movement.off(movement.MovementType.TYPE_RUNNING, () => {
                console.log("Msdp_Test_Movement_089 off success");
                done();
                console.log("Msdp_Test_Movement_089 success");
            })
        })
    })

    /**
      * @tc.number Movement_090
      * @tc.name -1 return
      * @tc.desc TYPE_RUNNING
      */
    it('Msdp_Test_Movement_090', 0, async function (done) {
        console.log("Msdp_Test_Movement_090 start");
        movement.off(-1, () => {
            done();
            console.log("Msdp_Test_Movement_090 success");
        })
    })

    /**
     * @tc.number Movement_091
     * @tc.name Loop 10 times
     * @tc.desc TYPE_RUNNING
    */
    it('Msdp_Test_Movement_091', 0, async function (done) {
        console.log("Msdp_Test_Movement_091 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_RUNNING, (data) => {
                expect(data.movementValue !== -1).assertTrue()
            })
            movement.off(movement.MovementType.TYPE_RUNNING, () => {
                console.log("Msdp_Test_Movement_091 off success")
                done();
                console.log("Msdp_Test_Movement_091 success");
            })
        }
    })

    /**
     * @tc.number Movement_092
     * @tc.name Ilegal value
     * @tc.desc TYPE_RUNNING
    */
    it('Msdp_Test_Movement_092', 0, async function (done) {
        console.log("Msdp_Test_Movement_092 start");
        movement.off(17, () => {
            done();
            console.log("Msdp_Test_Movement_092 success");
        })
    })

    /**
      * @tc.number Movement_093
      * @tc.name Normal value return
      * @tc.desc TYPE_RUNNING
      */
    it('Msdp_Test_Movement_093', 0, async function (done) {
        console.log("Msdp_Test_Movement_093 start");
        movement.once(movement.MovementType.TYPE_RUNNING, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_093 success");
        })
    })

    /**
      * @tc.number Movement_094
      * @tc.name -1 return
      * @tc.desc TYPE_RUNNING
      */
    it('Msdp_Test_Movement_094', 0, async function (done) {
        console.log("Msdp_Test_Movement_094 start");
        movement.once(-1, (data) => {
            expect(data.movementValue == -1).assertTrue;
            done();
            console.log("Msdp_Test_Movement_094 success");
        })
    })

    /**
     * @tc.number Movement_095
     * @tc.name Loop 10 times
     * @tc.desc TYPE_RUNNING
    */
    it('Msdp_Test_Movement_095', 0, async function (done) {
        console.log("Msdp_Test_Movement_095 start");
        for (let i = 0; i < 10; i++) {
            movement.once(movement.MovementType.TYPE_RUNNING, (data) => {
                expect(data.movementValue == -1).assertTrue();
                done();
                console.log("Msdp_Test_Movement_095 success");
            })
        }
    })

    /**
     * @tc.number Movement_096
     * @tc.name Ilegal value
     * @tc.desc TYPE_RUNNING
    */
    it('Msdp_Test_Movement_096', 0, async function (done) {
        console.log("Msdp_Test_Movement_096 start");
        movement.once(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_096 success");
        })
    })

    /**
      * @tc.number Movement_097
      * @tc.name Normal value return
      * @tc.desc TYPE_IN_ELEVATOR
      */
    it('Msdp_Test_Movement_097', 0, async function (done) {
        console.log("Msdp_Test_Movement_097 start");
        movement.on(movement.MovementType.TYPE_IN_ELEVATOR, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            console.log("Msdp_Test_Movement_097 on success");
            movement.off(movement.MovementType.TYPE_IN_ELEVATOR, () => {
                done();
                console.log("Msdp_Test_Movement_097 success");
            })
        })
    })

    /**
      * @tc.number Movement_098
      * @tc.name -1 return
      * @tc.desc TYPE_IN_ELEVATOR
      */
    it('Msdp_Test_Movement_098', 0, async function (done) {
        console.log("Msdp_Test_Movement_098 start");
        movement.on(-1, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_098 success");
        })
    })

    /**
     * @tc.number Movement_099
     * @tc.name Loop 10 times
     * @tc.desc TYPE_IN_ELEVATOR
    */
    it('Msdp_Test_Movement_099', 0, async function (done) {
        console.log("Msdp_Test_Movement_099 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_IN_ELEVATOR, (data) => {
                expect(data.movementValue !== -1).assertTrue()
                console.log("Msdp_Test_Movement_099 on success")
            })
            movement.off(movement.MovementType.TYPE_IN_ELEVATOR, () => {
                done();
                console.log("Msdp_Test_Movement_099 success");
            })
        }
    })

    /**
     * @tc.number Movement_100
     * @tc.name Ilegal value
     * @tc.desc TYPE_IN_ELEVATOR
    */
    it('Msdp_Test_Movement_100', 0, async function (done) {
        console.log("Msdp_Test_Movement_100 start");
        movement.on(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_100 success");
        })
    })

    /**
      * @tc.number Movement_101
      * @tc.name Normal value return
      * @tc.desc TYPE_IN_ELEVATOR
      */
    it('Msdp_Test_Movement_101', 0, async function (done) {
        console.log("Msdp_Test_Movement_101 start");
        movement.on(movement.MovementType.TYPE_IN_ELEVATOR, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            movement.off(movement.MovementType.TYPE_IN_ELEVATOR, () => {
                console.log("Msdp_Test_Movement_101 off success");
                done();
                console.log("Msdp_Test_Movement_101 success");
            })
        })
    })

    /**
      * @tc.number Movement_102
      * @tc.name -1 return
      * @tc.desc TYPE_IN_ELEVATOR
      */
    it('Msdp_Test_Movement_102', 0, async function (done) {
        console.log("Msdp_Test_Movement_102 start");
        movement.off(-1, () => {
            done();
            console.log("Msdp_Test_Movement_102 success");
        })
    })

    /**
     * @tc.number Movement_103
     * @tc.name Loop 10 times
     * @tc.desc TYPE_IN_ELEVATOR
    */
    it('Msdp_Test_Movement_103', 0, async function (done) {
        console.log("Msdp_Test_Movement_103 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_IN_ELEVATOR, (data) => {
                expect(data.movementValue !== -1).assertTrue()
            })
            movement.off(movement.MovementType.TYPE_IN_ELEVATOR, () => {
                console.log("Msdp_Test_Movement_103 off success")
                done();
                console.log("Msdp_Test_Movement_103 success");
            })
        }
    })

    /**
     * @tc.number Movement_104
     * @tc.name Ilegal value
     * @tc.desc TYPE_IN_ELEVATOR
    */
    it('Msdp_Test_Movement_104', 0, async function (done) {
        console.log("Msdp_Test_Movement_104 start");
        movement.off(17, () => {
            done();
            console.log("Msdp_Test_Movement_104 success");
        })
    })

    /**
      * @tc.number Movement_105
      * @tc.name Normal value return
      * @tc.desc TYPE_IN_ELEVATOR
      */
    it('Msdp_Test_Movement_105', 0, async function (done) {
        console.log("Msdp_Test_Movement_105 start");
        movement.once(movement.MovementType.TYPE_IN_ELEVATOR, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_105 success");
        })
    })

    /**
      * @tc.number Movement_106
      * @tc.name -1 return
      * @tc.desc TYPE_IN_ELEVATOR
      */
    it('Msdp_Test_Movement_106', 0, async function (done) {
        console.log("Msdp_Test_Movement_106 start");
        movement.once(-1, (data) => {
            expect(data.movementValue == -1).assertTrue;
            done();
            console.log("Msdp_Test_Movement_106 success");
        })
    })

    /**
     * @tc.number Movement_107
     * @tc.name Loop 10 times
     * @tc.desc TYPE_IN_ELEVATOR
    */
    it('Msdp_Test_Movement_107', 0, async function (done) {
        console.log("Msdp_Test_Movement_107 start");
        for (let i = 0; i < 10; i++) {
            movement.once(movement.MovementType.TYPE_IN_ELEVATOR, (data) => {
                expect(data.movementValue == -1).assertTrue();
                done();
                console.log("Msdp_Test_Movement_107 success");
            })
        }
    })

    /**
     * @tc.number Movement_108
     * @tc.name Ilegal value
     * @tc.desc TYPE_IN_ELEVATOR
    */
    it('Msdp_Test_Movement_108', 0, async function (done) {
        console.log("Msdp_Test_Movement_108 start");
        movement.once(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_108 success");
        })
    })

    /**
      * @tc.number Movement_109
      * @tc.name Normal value return
      * @tc.desc TYPE_LYING_POSTURE
      */
    it('Msdp_Test_Movement_109', 0, async function (done) {
        console.log("Msdp_Test_Movement_109 start");
        movement.on(movement.MovementType.TYPE_LYING_POSTURE, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            console.log("Msdp_Test_Movement_109 on success");
            movement.off(movement.MovementType.TYPE_LYING_POSTURE, () => {
                done();
                console.log("Msdp_Test_Movement_109 success");
            })
        })
    })

    /**
      * @tc.number Movement_110
      * @tc.name -1 return
      * @tc.desc TYPE_LYING_POSTURE
      */
    it('Msdp_Test_Movement_110', 0, async function (done) {
        console.log("Msdp_Test_Movement_110 start");
        movement.on(-1, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_110 success");
        })
    })

    /**
     * @tc.number Movement_111
     * @tc.name Loop 10 times
     * @tc.desc TYPE_LYING_POSTURE
    */
    it('Msdp_Test_Movement_111', 0, async function (done) {
        console.log("Msdp_Test_Movement_111 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_LYING_POSTURE, (data) => {
                expect(data.movementValue !== -1).assertTrue()
                console.log("Msdp_Test_Movement_111 on success")
            })
            movement.off(movement.MovementType.TYPE_LYING_POSTURE, () => {
                done();
                console.log("Msdp_Test_Movement_111 success");
            })
        }
    })

    /**
     * @tc.number Movement_112
     * @tc.name Ilegal value
     * @tc.desc TYPE_LYING_POSTURE
    */
    it('Msdp_Test_Movement_112', 0, async function (done) {
        console.log("Msdp_Test_Movement_112 start");
        movement.on(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_112 success");
        })
    })

    /**
      * @tc.number Movement_113
      * @tc.name Normal value return
      * @tc.desc TYPE_LYING_POSTURE
      */
    it('Msdp_Test_Movement_113', 0, async function (done) {
        console.log("Msdp_Test_Movement_113 start");
        movement.on(movement.MovementType.TYPE_LYING_POSTURE, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            movement.off(movement.MovementType.TYPE_LYING_POSTURE, () => {
                console.log("Msdp_Test_Movement_113 off success");
                done();
                console.log("Msdp_Test_Movement_113 success");
            })
        })
    })

    /**
      * @tc.number Movement_114
      * @tc.name -1 return
      * @tc.desc TYPE_LYING_POSTURE
      */
    it('Msdp_Test_Movement_114', 0, async function (done) {
        console.log("Msdp_Test_Movement_114 start");
        movement.off(-1, () => {
            done();
            console.log("Msdp_Test_Movement_114 success");
        })
    })

    /**
     * @tc.number Movement_115
     * @tc.name Loop 10 times
     * @tc.desc TYPE_LYING_POSTURE
    */
    it('Msdp_Test_Movement_115', 0, async function (done) {
        console.log("Msdp_Test_Movement_115 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_LYING_POSTURE, (data) => {
                expect(data.movementValue !== -1).assertTrue()
            })
            movement.off(movement.MovementType.TYPE_LYING_POSTURE, () => {
                console.log("Msdp_Test_Movement_115 off success")
                done();
                console.log("Msdp_Test_Movement_115 success");
            })
        }
    })

    /**
     * @tc.number Movement_116
     * @tc.name Ilegal value
     * @tc.desc TYPE_LYING_POSTURE
    */
    it('Msdp_Test_Movement_116', 0, async function (done) {
        console.log("Msdp_Test_Movement_116 start");
        movement.off(17, () => {
            done();
            console.log("Msdp_Test_Movement_116 success");
        })
    })

    /**
      * @tc.number Movement_117
      * @tc.name Normal value return
      * @tc.desc TYPE_LYING_POSTURE
      */
    it('Msdp_Test_Movement_117', 0, async function (done) {
        console.log("Msdp_Test_Movement_117 start");
        movement.once(movement.MovementType.TYPE_LYING_POSTURE, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_117 success");
        })
    })

    /**
      * @tc.number Movement_118
      * @tc.name -1 return
      * @tc.desc TYPE_LYING_POSTURE
      */
    it('Msdp_Test_Movement_118', 0, async function (done) {
        console.log("Msdp_Test_Movement_118 start");
        movement.once(-1, (data) => {
            expect(data.movementValue == -1).assertTrue;
            done();
            console.log("Msdp_Test_Movement_118 success");
        })
    })

    /**
     * @tc.number Movement_119
     * @tc.name Loop 10 times
     * @tc.desc TYPE_LYING_POSTURE
    */
    it('Msdp_Test_Movement_119', 0, async function (done) {
        console.log("Msdp_Test_Movement_119 start");
        for (let i = 0; i < 10; i++) {
            movement.once(movement.MovementType.TYPE_LYING_POSTURE, (data) => {
                expect(data.movementValue == -1).assertTrue();
                done();
                console.log("Msdp_Test_Movement_119 success");
            })
        }
    })

    /**
     * @tc.number Movement_120
     * @tc.name Ilegal value
     * @tc.desc TYPE_LYING_POSTURE
    */
    it('Msdp_Test_Movement_120', 0, async function (done) {
        console.log("Msdp_Test_Movement_120 start");
        movement.once(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_120 success");
        })
    })

    /**
      * @tc.number Movement_121
      * @tc.name Normal value return
      * @tc.desc TYPE_WALKING_HANDHOLD
      */
    it('Msdp_Test_Movement_121', 0, async function (done) {
        console.log("Msdp_Test_Movement_121 start");
        movement.on(movement.MovementType.TYPE_WALKING_HANDHOLD, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            console.log("Msdp_Test_Movement_121 on success");
            movement.off(movement.MovementType.TYPE_WALKING_HANDHOLD, () => {
                done();
                console.log("Msdp_Test_Movement_121 success");
            })
        })
    })

    /**
      * @tc.number Movement_122
      * @tc.name -1 return
      * @tc.desc TYPE_WALKING_HANDHOLD
      */
    it('Msdp_Test_Movement_122', 0, async function (done) {
        console.log("Msdp_Test_Movement_122 start");
        movement.on(-1, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_122 success");
        })
    })

    /**
     * @tc.number Movement_123
     * @tc.name Loop 10 times
     * @tc.desc TYPE_WALKING_HANDHOLD
    */
    it('Msdp_Test_Movement_123', 0, async function (done) {
        console.log("Msdp_Test_Movement_123 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_WALKING_HANDHOLD, (data) => {
                expect(data.movementValue !== -1).assertTrue()
                console.log("Msdp_Test_Movement_123 on success")
            })
            movement.off(movement.MovementType.TYPE_WALKING_HANDHOLD, () => {
                done();
                console.log("Msdp_Test_Movement_123 success");
            })
        }
    })

    /**
     * @tc.number Movement_124
     * @tc.name Ilegal value
     * @tc.desc TYPE_WALKING_HANDHOLD
    */
    it('Msdp_Test_Movement_124', 0, async function (done) {
        console.log("Msdp_Test_Movement_124 start");
        movement.on(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_124 success");
        })
    })

    /**
      * @tc.number Movement_125
      * @tc.name Normal value return
      * @tc.desc TYPE_WALKING_HANDHOLD
      */
    it('Msdp_Test_Movement_125', 0, async function (done) {
        console.log("Msdp_Test_Movement_125 start");
        movement.on(movement.MovementType.TYPE_WALKING_HANDHOLD, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            movement.off(movement.MovementType.TYPE_WALKING_HANDHOLD, () => {
                console.log("Msdp_Test_Movement_125 off success");
                done();
                console.log("Msdp_Test_Movement_125 success");
            })
        })
    })

    /**
      * @tc.number Movement_126
      * @tc.name -1 return
      * @tc.desc TYPE_WALKING_HANDHOLD
      */
    it('Msdp_Test_Movement_126', 0, async function (done) {
        console.log("Msdp_Test_Movement_126 start");
        movement.off(-1, () => {
            done();
            console.log("Msdp_Test_Movement_126 success");
        })
    })

    /**
     * @tc.number Movement_127
     * @tc.name Loop 10 times
     * @tc.desc TYPE_WALKING_HANDHOLD
    */
    it('Msdp_Test_Movement_127', 0, async function (done) {
        console.log("Msdp_Test_Movement_127 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_WALKING_HANDHOLD, (data) => {
                expect(data.movementValue !== -1).assertTrue()
            })
            movement.off(movement.MovementType.TYPE_WALKING_HANDHOLD, () => {
                console.log("Msdp_Test_Movement_127 off success")
                done();
                console.log("Msdp_Test_Movement_127 success");
            })
        }
    })

    /**
     * @tc.number Movement_128
     * @tc.name Ilegal value
     * @tc.desc TYPE_WALKING_HANDHOLD
    */
    it('Msdp_Test_Movement_128', 0, async function (done) {
        console.log("Msdp_Test_Movement_128 start");
        movement.off(17, () => {
            done();
            console.log("Msdp_Test_Movement_128 success");
        })
    })

    /**
      * @tc.number Movement_129
      * @tc.name Normal value return
      * @tc.desc TYPE_WALKING_HANDHOLD
      */
    it('Msdp_Test_Movement_129', 0, async function (done) {
        console.log("Msdp_Test_Movement_129 start");
        movement.once(movement.MovementType.TYPE_WALKING_HANDHOLD, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_129 success");
        })
    })

    /**
      * @tc.number Movement_130
      * @tc.name -1 return
      * @tc.desc TYPE_WALKING_HANDHOLD
      */
    it('Msdp_Test_Movement_130', 0, async function (done) {
        console.log("Msdp_Test_Movement_130 start");
        movement.once(-1, (data) => {
            expect(data.movementValue == -1).assertTrue;
            done();
            console.log("Msdp_Test_Movement_130 success");
        })
    })

    /**
     * @tc.number Movement_131
     * @tc.name Loop 10 times
     * @tc.desc TYPE_WALKING_HANDHOLD
    */
    it('Msdp_Test_Movement_131', 0, async function (done) {
        console.log("Msdp_Test_Movement_131 start");
        for (let i = 0; i < 10; i++) {
            movement.once(movement.MovementType.TYPE_WALKING_HANDHOLD, (data) => {
                expect(data.movementValue == -1).assertTrue();
                done();
                console.log("Msdp_Test_Movement_131 success");
            })
        }
    })

    /**
     * @tc.number Movement_132
     * @tc.name Ilegal value
     * @tc.desc TYPE_WALKING_HANDHOLD
    */
    it('Msdp_Test_Movement_132', 0, async function (done) {
        console.log("Msdp_Test_Movement_132 start");
        movement.once(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_132 success");
        })
    })

    /**
      * @tc.number Movement_133
      * @tc.name Normal value return
      * @tc.desc TYPE_SMART_FLIGHT
      */
    it('Msdp_Test_Movement_133', 0, async function (done) {
        console.log("Msdp_Test_Movement_133 start");
        movement.on(movement.MovementType.TYPE_SMART_FLIGHT, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            console.log("Msdp_Test_Movement_133 on success");
            movement.off(movement.MovementType.TYPE_SMART_FLIGHT, () => {
                done();
                console.log("Msdp_Test_Movement_133 success");
            })
        })
    })

    /**
      * @tc.number Movement_134
      * @tc.name -1 return
      * @tc.desc TYPE_SMART_FLIGHT
      */
    it('Msdp_Test_Movement_134', 0, async function (done) {
        console.log("Msdp_Test_Movement_134 start");
        movement.on(-1, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_134 success");
        })
    })

    /**
     * @tc.number Movement_135
     * @tc.name Loop 10 times
     * @tc.desc TYPE_SMART_FLIGHT
    */
    it('Msdp_Test_Movement_135', 0, async function (done) {
        console.log("Msdp_Test_Movement_135 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_SMART_FLIGHT, (data) => {
                expect(data.movementValue !== -1).assertTrue()
                console.log("Msdp_Test_Movement_135 on success")
            })
            movement.off(movement.MovementType.TYPE_SMART_FLIGHT, () => {
                done();
                console.log("Msdp_Test_Movement_135 success");
            })
        }
    })

    /**
     * @tc.number Movement_136
     * @tc.name Ilegal value
     * @tc.desc TYPE_SMART_FLIGHT
    */
    it('Msdp_Test_Movement_136', 0, async function (done) {
        console.log("Msdp_Test_Movement_136 start");
        movement.on(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_136 success");
        })
    })

    /**
      * @tc.number Movement_137
      * @tc.name Normal value return
      * @tc.desc TYPE_SMART_FLIGHT
      */
    it('Msdp_Test_Movement_137', 0, async function (done) {
        console.log("Msdp_Test_Movement_137 start");
        movement.on(movement.MovementType.TYPE_SMART_FLIGHT, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            movement.off(movement.MovementType.TYPE_SMART_FLIGHT, () => {
                console.log("Msdp_Test_Movement_137 off success");
                done();
                console.log("Msdp_Test_Movement_137 success");
            })
        })
    })

    /**
      * @tc.number Movement_138
      * @tc.name -1 return
      * @tc.desc TYPE_SMART_FLIGHT
      */
    it('Msdp_Test_Movement_138', 0, async function (done) {
        console.log("Msdp_Test_Movement_138 start");
        movement.off(-1, () => {
            done();
            console.log("Msdp_Test_Movement_138 success");
        })
    })

    /**
     * @tc.number Movement_139
     * @tc.name Loop 10 times
     * @tc.desc TYPE_SMART_FLIGHT
    */
    it('Msdp_Test_Movement_139', 0, async function (done) {
        console.log("Msdp_Test_Movement_139 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_SMART_FLIGHT, (data) => {
                expect(data.movementValue !== -1).assertTrue()
            })
            movement.off(movement.MovementType.TYPE_SMART_FLIGHT, () => {
                console.log("Msdp_Test_Movement_139 off success")
                done();
                console.log("Msdp_Test_Movement_139 success");
            })
        }
    })

    /**
     * @tc.number Movement_140
     * @tc.name Ilegal value
     * @tc.desc TYPE_SMART_FLIGHT
    */
    it('Msdp_Test_Movement_140', 0, async function (done) {
        console.log("Msdp_Test_Movement_140 start");
        movement.off(17, () => {
            done();
            console.log("Msdp_Test_Movement_140 success");
        })
    })

    /**
      * @tc.number Movement_141
      * @tc.name Normal value return
      * @tc.desc TYPE_SMART_FLIGHT
      */
    it('Msdp_Test_Movement_141', 0, async function (done) {
        console.log("Msdp_Test_Movement_141 start");
        movement.once(movement.MovementType.TYPE_SMART_FLIGHT, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_141 success");
        })
    })

    /**
      * @tc.number Movement_142
      * @tc.name -1 return
      * @tc.desc TYPE_SMART_FLIGHT
      */
    it('Msdp_Test_Movement_142', 0, async function (done) {
        console.log("Msdp_Test_Movement_142 start");
        movement.once(-1, (data) => {
            expect(data.movementValue == -1).assertTrue;
            done();
            console.log("Msdp_Test_Movement_142 success");
        })
    })

    /**
     * @tc.number Movement_143
     * @tc.name Loop 10 times
     * @tc.desc TYPE_SMART_FLIGHT
    */
    it('Msdp_Test_Movement_143', 0, async function (done) {
        console.log("Msdp_Test_Movement_143 start");
        for (let i = 0; i < 10; i++) {
            movement.once(movement.MovementType.TYPE_SMART_FLIGHT, (data) => {
                expect(data.movementValue == -1).assertTrue();
                done();
                console.log("Msdp_Test_Movement_143 success");
            })
        }
    })

    /**
     * @tc.number Movement_144
     * @tc.name Ilegal value
     * @tc.desc TYPE_SMART_FLIGHT
    */
    it('Msdp_Test_Movement_144', 0, async function (done) {
        console.log("Msdp_Test_Movement_144 start");
        movement.once(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_144 success");
        })
    })

    /**
      * @tc.number Movement_145
      * @tc.name Normal value return
      * @tc.desc TYPE_HIGH_SPEED_RAIL
      */
    it('Msdp_Test_Movement_145', 0, async function (done) {
        console.log("Msdp_Test_Movement_145 start");
        movement.on(movement.MovementType.TYPE_HIGH_SPEED_RAIL, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            console.log("Msdp_Test_Movement_145 on success");
            movement.off(movement.MovementType.TYPE_HIGH_SPEED_RAIL, () => {
                done();
                console.log("Msdp_Test_Movement_145 success");
            })
        })
    })

    /**
      * @tc.number Movement_146
      * @tc.name -1 return
      * @tc.desc TYPE_HIGH_SPEED_RAIL
      */
    it('Msdp_Test_Movement_146', 0, async function (done) {
        console.log("Msdp_Test_Movement_146 start");
        movement.on(-1, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_146 success");
        })
    })

    /**
     * @tc.number Movement_147
     * @tc.name Loop 10 times
     * @tc.desc TYPE_HIGH_SPEED_RAIL
    */
    it('Msdp_Test_Movement_147', 0, async function (done) {
        console.log("Msdp_Test_Movement_147 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_HIGH_SPEED_RAIL, (data) => {
                expect(data.movementValue !== -1).assertTrue()
                console.log("Msdp_Test_Movement_147 on success")
            })
            movement.off(movement.MovementType.TYPE_HIGH_SPEED_RAIL, () => {
                done();
                console.log("Msdp_Test_Movement_147 success");
            })
        }
    })

    /**
     * @tc.number Movement_148
     * @tc.name Ilegal value
     * @tc.desc TYPE_HIGH_SPEED_RAIL
    */
    it('Msdp_Test_Movement_148', 0, async function (done) {
        console.log("Msdp_Test_Movement_148 start");
        movement.on(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_148 success");
        })
    })

    /**
      * @tc.number Movement_149
      * @tc.name Normal value return
      * @tc.desc TYPE_HIGH_SPEED_RAIL
      */
    it('Msdp_Test_Movement_149', 0, async function (done) {
        console.log("Msdp_Test_Movement_149 start");
        movement.on(movement.MovementType.TYPE_HIGH_SPEED_RAIL, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            movement.off(movement.MovementType.TYPE_HIGH_SPEED_RAIL, () => {
                console.log("Msdp_Test_Movement_149 off success");
                done();
                console.log("Msdp_Test_Movement_149 success");
            })
        })
    })

    /**
      * @tc.number Movement_150
      * @tc.name -1 return
      * @tc.desc TYPE_HIGH_SPEED_RAIL
      */
    it('Msdp_Test_Movement_150', 0, async function (done) {
        console.log("Msdp_Test_Movement_150 start");
        try {
            movement.off(-1, () => {
                done();
                console.log("Msdp_Test_Movement_150 success");
            })
        }
        catch {
            console.log("Msdp_Test_Movement_150 fail");
        }
    })

    /**
     * @tc.number Movement_151
     * @tc.name Loop 10 times
     * @tc.desc TYPE_HIGH_SPEED_RAIL
    */
    it('Msdp_Test_Movement_151', 0, async function (done) {
        console.log("Msdp_Test_Movement_151 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_HIGH_SPEED_RAIL, (data) => {
                expect(data.movementValue !== -1).assertTrue()
            })
            movement.off(movement.MovementType.TYPE_HIGH_SPEED_RAIL, () => {
                console.log("Msdp_Test_Movement_151 off success")
                done();
                console.log("Msdp_Test_Movement_151 success");
            })
        }
    })

    /**
     * @tc.number Movement_152
     * @tc.name Ilegal value
     * @tc.desc TYPE_HIGH_SPEED_RAIL
    */
    it('Msdp_Test_Movement_152', 0, async function (done) {
        console.log("Msdp_Test_Movement_152 start");
        movement.off(17, () => {
            done();
            console.log("Msdp_Test_Movement_152 success");
        })
    })

    /**
      * @tc.number Movement_153
      * @tc.name Normal value return
      * @tc.desc TYPE_HIGH_SPEED_RAIL
      */
    it('Msdp_Test_Movement_153', 0, async function (done) {
        console.log("Msdp_Test_Movement_153 start");
        movement.once(movement.MovementType.TYPE_HIGH_SPEED_RAIL, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_153 success");
        })
    })

    /**
      * @tc.number Movement_154
      * @tc.name -1 return
      * @tc.desc TYPE_HIGH_SPEED_RAIL
      */
    it('Msdp_Test_Movement_154', 0, async function (done) {
        console.log("Msdp_Test_Movement_154 start");
        movement.once(-1, (data) => {
            expect(data.movementValue == -1).assertTrue;
            done();
            console.log("Msdp_Test_Movement_154 success");
        })
    })

    /**
     * @tc.number Movement_155
     * @tc.name Loop 10 times
     * @tc.desc TYPE_HIGH_SPEED_RAIL
    */
    it('Msdp_Test_Movement_155', 0, async function (done) {
        console.log("Msdp_Test_Movement_155 start");
        for (let i = 0; i < 10; i++) {
            movement.once(movement.MovementType.TYPE_HIGH_SPEED_RAIL, (data) => {
                expect(data.movementValue == -1).assertTrue();
                done();
                console.log("Msdp_Test_Movement_155 success");
            })
        }
    })

    /**
     * @tc.number Movement_156
     * @tc.name Ilegal value
     * @tc.desc TYPE_HIGH_SPEED_RAIL
    */
    it('Msdp_Test_Movement_156', 0, async function (done) {
        console.log("Msdp_Test_Movement_156 start");
        movement.once(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_156 success");
        })
    })

    /**
      * @tc.number Movement_157
      * @tc.name Normal value return
      * @tc.desc TYPE_IN_PLANE
      */
    it('Msdp_Test_Movement_157', 0, async function (done) {
        console.log("Msdp_Test_Movement_157 start");
        movement.on(movement.MovementType.TYPE_IN_PLANE, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            console.log("Msdp_Test_Movement_157 on success");
            movement.off(movement.MovementType.TYPE_IN_PLANE, () => {
                done();
                console.log("Msdp_Test_Movement_157 success");
            })
        })
    })

    /**
      * @tc.number Movement_158
      * @tc.name -1 return
      * @tc.desc TYPE_IN_PLANE
      */
    it('Msdp_Test_Movement_158', 0, async function (done) {
        console.log("Msdp_Test_Movement_158 start");
        movement.on(-1, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_158 success");
        })
    })

    /**
     * @tc.number Movement_159
     * @tc.name Loop 10 times
     * @tc.desc TYPE_IN_PLANE
    */
    it('Msdp_Test_Movement_159', 0, async function (done) {
        console.log("Msdp_Test_Movement_159 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_IN_PLANE, (data) => {
                expect(data.movementValue !== -1).assertTrue()
                console.log("Msdp_Test_Movement_159 on success")
            })
            movement.off(movement.MovementType.TYPE_IN_PLANE, () => {
                done();
                console.log("Msdp_Test_Movement_159 success");
            })
        }
    })

    /**
     * @tc.number Movement_160
     * @tc.name Ilegal value
     * @tc.desc TYPE_IN_PLANE
    */
    it('Msdp_Test_Movement_160', 0, async function (done) {
        console.log("Msdp_Test_Movement_160 start");
        movement.on(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_160 success");
        })
    })

    /**
      * @tc.number Movement_161
      * @tc.name Normal value return
      * @tc.desc TYPE_IN_PLANE
      */
    it('Msdp_Test_Movement_161', 0, async function (done) {
        console.log("Msdp_Test_Movement_161 start");
        movement.on(movement.MovementType.TYPE_IN_PLANE, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            movement.off(movement.MovementType.TYPE_IN_PLANE, () => {
                console.log("Msdp_Test_Movement_161 off success");
                done();
                console.log("Msdp_Test_Movement_161 success");
            })
        })
    })

    /**
      * @tc.number Movement_162
      * @tc.name -1 return
      * @tc.desc TYPE_IN_PLANE
      */
    it('Msdp_Test_Movement_162', 0, async function (done) {
        console.log("Msdp_Test_Movement_162 start");
        movement.off(-1, () => {
            done();
            console.log("Msdp_Test_Movement_162 success");
        })
    })

    /**
     * @tc.number Movement_163
     * @tc.name Loop 10 times
     * @tc.desc TYPE_IN_PLANE
    */
    it('Msdp_Test_Movement_163', 0, async function (done) {
        console.log("Msdp_Test_Movement_163 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_IN_PLANE, (data) => {
                expect(data.movementValue !== -1).assertTrue()
            })
            movement.off(movement.MovementType.TYPE_IN_PLANE, () => {
                console.log("Msdp_Test_Movement_163 off success")
                done();
                console.log("Msdp_Test_Movement_163 success");
            })
        }
    })

    /**
     * @tc.number Movement_164
     * @tc.name Ilegal value
     * @tc.desc TYPE_IN_PLANE
    */
    it('Msdp_Test_Movement_164', 0, async function (done) {
        console.log("Msdp_Test_Movement_164 start");
        movement.off(17, () => {
            done();
            console.log("Msdp_Test_Movement_164 success");
        })
    })

    /**
      * @tc.number Movement_165
      * @tc.name Normal value return
      * @tc.desc TYPE_IN_PLANE
      */
    it('Msdp_Test_Movement_165', 0, async function (done) {
        console.log("Msdp_Test_Movement_165 start");
        movement.once(movement.MovementType.TYPE_IN_PLANE, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_165 success");
        })
    })

    /**
      * @tc.number Movement_166
      * @tc.name -1 return
      * @tc.desc TYPE_IN_PLANE
      */
    it('Msdp_Test_Movement_166', 0, async function (done) {
        console.log("Msdp_Test_Movement_166 start");
        movement.once(-1, (data) => {
            expect(data.movementValue == -1).assertTrue;
            done();
            console.log("Msdp_Test_Movement_166 success");
        })
    })

    /**
     * @tc.number Movement_167
     * @tc.name Loop 10 times
     * @tc.desc TYPE_IN_PLANE
    */
    it('Msdp_Test_Movement_167', 0, async function (done) {
        console.log("Msdp_Test_Movement_167 start");
        for (let i = 0; i < 10; i++) {
            movement.once(movement.MovementType.TYPE_IN_PLANE, (data) => {
                expect(data.movementValue == -1).assertTrue();
                done();
                console.log("Msdp_Test_Movement_167 success");
            })
        }
    })

    /**
     * @tc.number Movement_168
     * @tc.name Ilegal value
     * @tc.desc TYPE_IN_PLANE
    */
    it('Msdp_Test_Movement_168', 0, async function (done) {
        console.log("Msdp_Test_Movement_168 start");
        movement.once(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_168 success");
        })
    })

    /**
      * @tc.number Movement_169
      * @tc.name Normal value return
      * @tc.desc TYPE_STAY
      */
    it('Msdp_Test_Movement_169', 0, async function (done) {
        console.log("Msdp_Test_Movement_169 start");
        movement.on(movement.MovementType.TYPE_STAY, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            console.log("Msdp_Test_Movement_169 on success");
            movement.off(movement.MovementType.TYPE_STAY, () => {
                done();
                console.log("Msdp_Test_Movement_169 success");
            })
        })
    })

    /**
      * @tc.number Movement_170
      * @tc.name -1 return
      * @tc.desc TYPE_STAY
      */
    it('Msdp_Test_Movement_170', 0, async function (done) {
        console.log("Msdp_Test_Movement_170 start")
        movement.on(-1, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_170 success");
        })
    })

    /**
     * @tc.number Movement_171
     * @tc.name Loop 10 times
     * @tc.desc TYPE_STAY
    */
    it('Msdp_Test_Movement_171', 0, async function (done) {
        console.log("Msdp_Test_Movement_171 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_STAY, (data) => {
                expect(data.movementValue !== -1).assertTrue();
                console.log("Msdp_Test_Movement_171 on success");
            })
            movement.off(movement.MovementType.TYPE_STAY, () => {
                done();
                console.log("Msdp_Test_Movement_171 success");
            })
        }
    })

    /**
     * @tc.number Movement_172
     * @tc.name Ilegal value
     * @tc.desc TYPE_STAY
    */
    it('Msdp_Test_Movement_172', 0, async function (done) {
        console.log("Msdp_Test_Movement_172 start");
        movement.on(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_172 success");
        })
    })

    /**
      * @tc.number Movement_173
      * @tc.name Normal value return
      * @tc.desc TYPE_STAY
      */
    it('Msdp_Test_Movement_173', 0, async function (done) {
        console.log("Msdp_Test_Movement_173 start");
        movement.on(movement.MovementType.TYPE_STAY, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            movement.off(movement.MovementType.TYPE_STAY, () => {
                console.log("Msdp_Test_Movement_173 off success");
                done();
                console.log("Msdp_Test_Movement_173 success");
            })
        })
    })

    /**
      * @tc.number Movement_174
      * @tc.name -1 return
      * @tc.desc TYPE_STAY
      */
    it('Msdp_Test_Movement_174', 0, async function (done) {
        console.log("Msdp_Test_Movement_174 start");
        movement.off(-1, () => {
            done();
            console.log("Msdp_Test_Movement_174 success");
        })
    })

    /**
     * @tc.number Movement_175
     * @tc.name Loop 10 times
     * @tc.desc TYPE_STAY
    */
    it('Msdp_Test_Movement_175', 0, async function (done) {
        console.log("Msdp_Test_Movement_175 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_STAY, (data) => {
                expect(data.movementValue !== -1).assertTrue();
            })
            movement.off(movement.MovementType.TYPE_STAY, () => {
                console.log("Msdp_Test_Movement_175 off success");
                done();
                console.log("Msdp_Test_Movement_175 success");
            })
        }
    })

    /**
     * @tc.number Movement_176
     * @tc.name Ilegal value
     * @tc.desc TYPE_STAY
    */
    it('Msdp_Test_Movement_176', 0, async function (done) {
        console.log("Msdp_Test_Movement_176 start");
        movement.off(17, () => {
            done();
            console.log("Msdp_Test_Movement_176 success");
        })
    })

    /**
      * @tc.number Movement_177
      * @tc.name Normal value return
      * @tc.desc TYPE_STAY
      */
    it('Msdp_Test_Movement_177', 0, async function (done) {
        console.log("Msdp_Test_Movement_177 start");
        movement.once(movement.MovementType.TYPE_STAY, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_177 success");
        })
    })

    /**
      * @tc.number Movement_178
      * @tc.name -1 return
      * @tc.desc TYPE_STAY
      */
    it('Msdp_Test_Movement_178', 0, async function (done) {
        console.log("Msdp_Test_Movement_178 start");
        movement.once(-1, (data) => {
            expect(data.movementValue == -1).assertTrue;
            done();
            console.log("Msdp_Test_Movement_178 success");
        })
    })

    /**
     * @tc.number Movement_179
     * @tc.name Loop 10 times
     * @tc.desc TYPE_STAY
    */
    it('Msdp_Test_Movement_179', 0, async function (done) {
        console.log("Msdp_Test_Movement_179 start");
        for (let i = 0; i < 10; i++) {
            movement.once(movement.MovementType.TYPE_STAY, (data) => {
                expect(data.movementValue == -1).assertTrue();
                done();
                console.log("Msdp_Test_Movement_179 success");
            })
        }
    })

    /**
     * @tc.number Movement_180
     * @tc.name Ilegal value
     * @tc.desc TYPE_STAY
    */
    it('Msdp_Test_Movement_180', 0, async function (done) {
        console.log("Msdp_Test_Movement_180 start");
        movement.once(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_180 success");
        })
    })

    /**
      * @tc.number Movement_181
      * @tc.name Normal value return
      * @tc.desc TYPE_IN_METRO
      */
    it('Msdp_Test_Movement_181', 0, async function (done) {
        console.log("Msdp_Test_Movement_181 start");
        movement.on(movement.MovementType.TYPE_IN_METRO, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            console.log("Msdp_Test_Movement_181 on success");
            movement.off(movement.MovementType.TYPE_IN_METRO, () => {
                done();
                console.log("Msdp_Test_Movement_181 success");
            })
        })
    })

    /**
      * @tc.number Movement_182
      * @tc.name -1 return
      * @tc.desc TYPE_IN_METRO
      */
    it('Msdp_Test_Movement_182', 0, async function (done) {
        console.log("Msdp_Test_Movement_182 start")
        movement.on(-1, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_182 success");
        })
    })

    /**
     * @tc.number Movement_183
     * @tc.name Loop 10 times
     * @tc.desc TYPE_IN_METRO
    */
    it('Msdp_Test_Movement_183', 0, async function (done) {
        console.log("Msdp_Test_Movement_183 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_IN_METRO, (data) => {
                expect(data.movementValue !== -1).assertTrue();
                console.log("Msdp_Test_Movement_183 on success");
            })
            movement.off(movement.MovementType.TYPE_IN_METRO, () => {
                done();
                console.log("Msdp_Test_Movement_183 success");
            })
        }
    })

    /**
     * @tc.number Movement_184
     * @tc.name Ilegal value
     * @tc.desc TYPE_IN_METRO
    */
    it('Msdp_Test_Movement_184', 0, async function (done) {
        console.log("Msdp_Test_Movement_184 start");
        movement.on(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_184 success");
        })
    })

    /**
      * @tc.number Movement_185
      * @tc.name Normal value return
      * @tc.desc TYPE_IN_METRO
      */
    it('Msdp_Test_Movement_185', 0, async function (done) {
        console.log("Msdp_Test_Movement_185 start");
        movement.on(movement.MovementType.TYPE_IN_METRO, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            movement.off(movement.MovementType.TYPE_IN_METRO, () => {
                console.log("Msdp_Test_Movement_185 off success");
                done();
                console.log("Msdp_Test_Movement_185 success");
            })
        })
    })

    /**
      * @tc.number Movement_186
      * @tc.name -1 return
      * @tc.desc TYPE_IN_METRO
      */
    it('Msdp_Test_Movement_186', 0, async function (done) {
        console.log("Msdp_Test_Movement_186 start");
        movement.off(-1, () => {
            done();
            console.log("Msdp_Test_Movement_186 success");
        })
    })

    /**
     * @tc.number Movement_187
     * @tc.name Loop 10 times
     * @tc.desc TYPE_IN_METRO
    */
    it('Msdp_Test_Movement_187', 0, async function (done) {
        console.log("Msdp_Test_Movement_187 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_IN_METRO, (data) => {
                expect(data.movementValue !== -1).assertTrue();
            })
            movement.off(movement.MovementType.TYPE_IN_METRO, () => {
                console.log("Msdp_Test_Movement_187 off success");
                done();
                console.log("Msdp_Test_Movement_187 success");
            })
        }
    })

    /**
     * @tc.number Movement_188
     * @tc.name Ilegal value
     * @tc.desc TYPE_IN_METRO
    */
    it('Msdp_Test_Movement_188', 0, async function (done) {
        console.log("Msdp_Test_Movement_188 start");
        movement.off(17, () => {
            done();
            console.log("Msdp_Test_Movement_188 success");
        })
    })

    /**
      * @tc.number Movement_189
      * @tc.name Normal value return
      * @tc.desc TYPE_IN_METRO
      */
    it('Msdp_Test_Movement_189', 0, async function (done) {
        console.log("Msdp_Test_Movement_189 start");
        movement.once(movement.MovementType.TYPE_IN_METRO, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_189 success");
        })
    })

    /**
      * @tc.number Movement_190
      * @tc.name -1 return
      * @tc.desc TYPE_IN_METRO
      */
    it('Msdp_Test_Movement_190', 0, async function (done) {
        console.log("Msdp_Test_Movement_190 start");
        movement.once(-1, (data) => {
            expect(data.movementValue == -1).assertTrue;
            done();
            console.log("Msdp_Test_Movement_190 success");
        })
    })

    /**
     * @tc.number Movement_191
     * @tc.name Loop 10 times
     * @tc.desc TYPE_IN_METRO
    */
    it('Msdp_Test_Movement_191', 0, async function (done) {
        console.log("Msdp_Test_Movement_191 start");
        for (let i = 0; i < 10; i++) {
            movement.once(movement.MovementType.TYPE_IN_METRO, (data) => {
                expect(data.movementValue == -1).assertTrue();
                done();
                console.log("Msdp_Test_Movement_191 success");
            })
        }
    })

    /**
     * @tc.number Movement_192
     * @tc.name Ilegal value
     * @tc.desc TYPE_IN_METRO
    */
    it('Msdp_Test_Movement_192', 0, async function (done) {
        console.log("Msdp_Test_Movement_192 start");
        movement.once(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_192 success");
        })
    })

    /**
      * @tc.number Movement_193
      * @tc.name Normal value return
      * @tc.desc TYPE_RELATIVE_STILL
      */
    it('Msdp_Test_Movement_193', 0, async function (done) {
        console.log("Msdp_Test_Movement_193 start");
        movement.on(movement.MovementType.TYPE_RELATIVE_STILL, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            console.log("Msdp_Test_Movement_193 on success");
            movement.off(movement.MovementType.TYPE_RELATIVE_STILL, () => {
                done();
                console.log("Msdp_Test_Movement_193 success");
            })
        })
    })

    /**
      * @tc.number Movement_194
      * @tc.name -1 return
      * @tc.desc TYPE_RELATIVE_STILL
      */
    it('Msdp_Test_Movement_194', 0, async function (done) {
        console.log("Msdp_Test_Movement_194 start")
        movement.on(-1, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_194 success");
        })
    })

    /**
     * @tc.number Movement_195
     * @tc.name Loop 10 times
     * @tc.desc TYPE_RELATIVE_STILL
    */
    it('Msdp_Test_Movement_195', 0, async function (done) {
        console.log("Msdp_Test_Movement_195 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_RELATIVE_STILL, (data) => {
                expect(data.movementValue !== -1).assertTrue();
                console.log("Msdp_Test_Movement_195 on success");
            })
            movement.off(movement.MovementType.TYPE_RELATIVE_STILL, () => {
                done();
                console.log("Msdp_Test_Movement_195 success");
            })
        }
    })

    /**
     * @tc.number Movement_196
     * @tc.name Ilegal value
     * @tc.desc TYPE_RELATIVE_STILL
    */
    it('Msdp_Test_Movement_196', 0, async function (done) {
        console.log("Msdp_Test_Movement_196 start");
        movement.on(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_196 success");
        })
    })

    /**
      * @tc.number Movement_197
      * @tc.name Normal value return
      * @tc.desc TYPE_RELATIVE_STILL
      */
    it('Msdp_Test_Movement_197', 0, async function (done) {
        console.log("Msdp_Test_Movement_197 start");
        movement.on(movement.MovementType.TYPE_RELATIVE_STILL, (data) => {
            expect(data.movementValue !== -1).assertTrue();
            movement.off(movement.MovementType.TYPE_RELATIVE_STILL, () => {
                console.log("Msdp_Test_Movement_197 off success");
                done();
                console.log("Msdp_Test_Movement_197 success");
            })
        })
    })

    /**
      * @tc.number Movement_198
      * @tc.name -1 return
      * @tc.desc TYPE_RELATIVE_STILL
      */
    it('Msdp_Test_Movement_198', 0, async function (done) {
        console.log("Msdp_Test_Movement_198 start");
        movement.off(-1, () => {
            done();
            console.log("Msdp_Test_Movement_198 success");
        })
    })

    /**
     * @tc.number Movement_199
     * @tc.name Loop 10 times
     * @tc.desc TYPE_RELATIVE_STILL
    */
    it('Msdp_Test_Movement_199', 0, async function (done) {
        console.log("Msdp_Test_Movement_199 start");

        for (let i = 0; i < 10; i++) {
            movement.on(movement.MovementType.TYPE_RELATIVE_STILL, (data) => {
                expect(data.movementValue !== -1).assertTrue();
            })
            movement.off(movement.MovementType.TYPE_RELATIVE_STILL, () => {
                console.log("Msdp_Test_Movement_199 off success");
                done();
                console.log("Msdp_Test_Movement_199 success");
            })
        }
    })

    /**
     * @tc.number Movement_200
     * @tc.name Ilegal value
     * @tc.desc TYPE_RELATIVE_STILL
    */
    it('Msdp_Test_Movement_200', 0, async function (done) {
        console.log("Msdp_Test_Movement_200 start");
        movement.off(17, () => {
            done();
            console.log("Msdp_Test_Movement_200 success");
        })
    })

    /**
      * @tc.number Movement_201
      * @tc.name Normal value return
      * @tc.desc TYPE_RELATIVE_STILL
      */
    it('Msdp_Test_Movement_201', 0, async function (done) {
        console.log("Msdp_Test_Movement_201 start");
        movement.once(movement.MovementType.TYPE_RELATIVE_STILL, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_201 success");
        })
    })

    /**
      * @tc.number Movement_202
      * @tc.name -1 return
      * @tc.desc TYPE_RELATIVE_STILL
      */
    it('Msdp_Test_Movement_202', 0, async function (done) {
        console.log("Msdp_Test_Movement_202 start");
        movement.once(-1, (data) => {
            expect(data.movementValue == -1).assertTrue;
            done();
            console.log("Msdp_Test_Movement_202 success");
        })
    })

    /**
     * @tc.number Movement_203
     * @tc.name Loop 10 times
     * @tc.desc TYPE_RELATIVE_STILL
    */
    it('Msdp_Test_Movement_203', 0, async function (done) {
        console.log("Msdp_Test_Movement_203 start");
        for (let i = 0; i < 10; i++) {
            movement.once(movement.MovementType.TYPE_RELATIVE_STILL, (data) => {
                expect(data.movementValue == -1).assertTrue();
                done();
                console.log("Msdp_Test_Movement_203 success");
            })
        }
    })

    /**
     * @tc.number Movement_204
     * @tc.name Ilegal value
     * @tc.desc TYPE_RELATIVE_STILL
    */
    it('Msdp_Test_Movement_204', 0, async function (done) {
        console.log("Msdp_Test_Movement_204 start");
        movement.once(17, (data) => {
            expect(data.movementValue == -1).assertTrue();
            done();
            console.log("Msdp_Test_Movement_204 success");
        })
    })

})
