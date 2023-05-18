/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
import vibrator from '@ohos.vibrator'

import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect, TestType, Size, Level} from '@ohos/hypium'

export default function VibratorJsTest_misc_3() {
    describe("VibratorJsTest_misc_3", function () {
        beforeAll(function () {

            /*
             * @tc.setup: setup invoked before all testcases
             */
            console.info('beforeAll called')
        })

        afterAll(function () {

            /*
             * @tc.teardown: teardown invoked after all testcases
             */
            console.info('afterAll called')
        })

        beforeEach(function () {

            /*
             * @tc.setup: setup invoked before each testcases
             */
            console.info('beforeEach called')
        })

        afterEach(function () {

            /*
             * @tc.teardown: teardown invoked after each testcases
             */
            console.info('afterEach called')
            vibrator.stop("preset");
            vibrator.stop("time");
            console.info('afterEach called')
        })

        const OPERATION_FAIL_CODE = 14600101;
        const PERMISSION_ERROR_CODE = 201;
        const PARAMETER_ERROR_CODE = 401;

        const OPERATION_FAIL_MSG = 'Device operation failed.'
        const PERMISSION_ERROR_MSG = 'Permission denied.'
        const PARAMETER_ERROR_MSG = 'The parameter invalid.'
        let EFFECT_ID = "haptic.clock.timer";
        let INVALID_EFFECT_ID = "xxx";

        /*
         * @tc.name:VibratorJsTest019
         * @tc.desc:Verification results of the incorrect parameters of the test interface.
         * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0290
         */
        it("VibratorJsTest019", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL0, async function (done) {
            vibrator.vibrate({
                type: "time",
                duration: 1000
            }, {
                usage: "unknown"
            }, (error) => {
                if (error) {
                    console.info('VibratorJsTest019 vibrator error'+error);
                    expect(false).assertTrue();
                } else {
                    console.info('VibratorJsTest019 vibrator success');
                    expect(true).assertTrue();
                }
                setTimeout(() => {
                    done();
                }, 500);
            });
        })

        /*
         * @tc.name:VibratorJsTest020
         * @tc.desc:Verification results of the incorrect parameters of the test interface.
         * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0300
         */
        it("VibratorJsTest020", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
            try {
                vibrator.vibrate({
                    type: "",
                    duration: 1000
                }, {
                    usage: "unknown"
                }, (error) => {
                    if (error) {
						console.info('VibratorJsTest020 vibrator error'+error);
                        expect(true).assertTrue();
                    } else {
                        expect(false).assertTrue();
                    }
                    setTimeout(() => {
                        done();
                    }, 500);
                });
            } catch (error) {
                console.info('VibratorJsTest020 error'+error);
                expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
                expect(error.message).assertEqual(PARAMETER_ERROR_MSG);
                done();
            }
        })

        /*
         * @tc.name:VibratorJsTest021
         * @tc.desc:Verification results of the incorrect parameters of the test interface.
         * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0310
         */
        it("VibratorJsTest021", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
            let isSupport = false;
            function vibratePromise() {
                return new Promise((resolve, reject) => {
                    if (isSupport) {
                        vibrator.vibrate({
                            type: "preset",
                            effectId: EFFECT_ID,
                            count: 1,
                        }, {
                            usage: "unknown"
                        }, (error) => {
                            if (error) {
                                console.info('VibratorJsTest021 vibrator error'+error);
                                expect(true).assertTrue();
                            } else {
                                console.info('VibratorJsTest021 vibrator success');
                                expect(true).assertTrue();
                            }

                        });
                    } else {
                        resolve();
                    }
                })
            }

            let isSupportPromise = new Promise((resolve, reject) => {
                vibrator.isSupportEffect(EFFECT_ID, (error, state) => {
                    if (error) {
                        expect(false).assertTrue();
                        reject(error);
                    } else {
                        isSupport = state;
                        resolve();
                    }
                });
            })

            await isSupportPromise.then(() => {
                return vibratePromise();
            }).catch((error) => {
                expect(false).assertTrue();
            })
            setTimeout(() => {
                done();
            }, 500);
        })

        /*
         * @tc.name:VibratorJsTest022
         * @tc.desc:Verification results of the incorrect parameters of the test interface.
         * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0320
         */
        it("VibratorJsTest022", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
            try {
                vibrator.vibrate({
                    type: "preset",
                    effectId: "",
                    count: 3,
                }, {
                    usage: "unknown"
                }, (error) => {
                    if (error) {
						console.info('VibratorJsTest022 vibrator error'+error);
                        expect(true).assertTrue();
                    } else {
                        expect(false).assertTrue();
                    }
                    setTimeout(() => {
                        done();
                    }, 500);
                });
            } catch (error) {
                console.info('VibratorJsTest022 error'+error);
                expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
                expect(error.message).assertEqual(PARAMETER_ERROR_MSG);
                done();
            }

        })

        /*
         * @tc.name:VibratorJsTest023
         * @tc.desc:Verification results of the incorrect parameters of the test interface.
         * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0330
         */
        it("VibratorJsTest023", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
            try {
                vibrator.vibrate({
                    type: "preset",
                    effectId: EFFECT_ID,
                    count: 3,
                }, {
                    usage: ""
                }, (error) => {
                    if (error) {
                        expect(true).assertTrue();
                    } else {
                        expect(false).assertTrue();
                    }
                    setTimeout(() => {
                        done();
                    }, 500);
                });
            } catch (error) {
                console.info('VibratorJsTest023 error'+error);
                expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
                expect(error.message).assertEqual(PARAMETER_ERROR_MSG);
                done();
            }

        })

        /*
         * @tc.name:VibratorJsTest024
         * @tc.desc:Verification results of the incorrect parameters of the test interface.
         * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0340
         */
        it("VibratorJsTest024", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
            try {
                vibrator.vibrate(null, null);
            } catch (error) {
                console.info('VibratorJsTest024 error'+error);
                expect(true).assertTrue();
                done();
            }
        })

        /*
         * @tc.name:VibratorJsTest025
         * @tc.desc:Verification results of the incorrect parameters of the test interface.
         * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0350
         */
        it("VibratorJsTest025", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
            await vibrator.vibrate({
                type: "time",
                duration: 1000,
            }, {
                usage: "unknown"
            }).then(() => {
				console.info('VibratorJsTest025 success');
                expect(true).assertTrue();
            }).catch((error) => {
                expect(false).assertTrue();
            });
            done();
        })

        /*
         * @tc.name:VibratorJsTest026
         * @tc.desc:Verification results of the incorrect parameters of the test interface.
         * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0360
         */
        it("VibratorJsTest026", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
            try {
                await vibrator.vibrate({
                    type: "",
                    duration: 1000
                }, {
                    usage: "unknown"
                }).then(() => {
                    expect(false).assertTrue();
                }).catch((error) => {
					console.info('VibratorJsTest023 vibrate error' +error);
                    expect(true).assertTrue();
                });
                done();
            } catch (error) {
                console.info('VibratorJsTest026 error' +error);
                expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
                expect(error.message).assertEqual(PARAMETER_ERROR_MSG);
                done();
            }
        })

        /*
         * @tc.name:VibratorJsTest027
         * @tc.desc:Verification results of the incorrect parameters of the test interface.
         * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0370
         */
        it("VibratorJsTest027", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
            await vibrator.vibrate({
                type: "preset",
                effectId: EFFECT_ID,
                count: 1,
            }, {
                usage: "unknown"
            }).then(() => {
				console.info('VibratorJsTest023 success');
                expect(true).assertTrue();
            }).catch((error) => {
                expect(false).assertTrue();
            });
            done();
        })

        /*
         * @tc.name:VibratorJsTest028
         * @tc.desc:Verification results of the incorrect parameters of the test interface.
         * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0380
         */
        it("VibratorJsTest028", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
            try {
                vibrator.vibrate({
                    type: "preset",
                    effectId: "",
                    count: 3,
                }, {
                    usage: "unknown"
                }).then(() => {
                    expect(false).assertTrue();
                    done();
                }).catch((error) => {
					console.info('VibratorJsTest028 vibrate error'+error);
                    expect(true).assertTrue();
                    done();
                });
            } catch (error) {
                console.info('VibratorJsTest028 error'+error);
                expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
                expect(error.message).assertEqual(PARAMETER_ERROR_MSG);
                done();
            }
        })

        /*
         * @tc.name:VibratorJsTest029
         * @tc.desc:Verification results of the incorrect parameters of the test interface.
         * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0390
         */
        it("VibratorJsTest029", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
            try {
                vibrator.vibrate({
                    type: "preset",
                    effectId: EFFECT_ID,
                    count: 3,
                }, {
                    usage: ""
                }).then(() => {
                    expect(false).assertTrue();
                    done();
                }).catch((error) => {
					console.info('VibratorJsTest029 vibrate error'+error);
                    expect(true).assertTrue();
                    done();
                });
            } catch (error) {
                console.info('VibratorJsTest029 error'+error);
                expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
                expect(error.message).assertEqual(PARAMETER_ERROR_MSG);
                done();
            }
        })

        /*
         * @tc.name:VibratorJsTest030
         * @tc.desc:Verification results of the incorrect parameters of the test interface.
         * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0400
         */
        it("VibratorJsTest030", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
            try {
                vibrator.vibrate({
                    type: 1,
                    count: 3,
                }, {
                    usage: ""
                })
            } catch (error) {
                console.info('VibratorJsTest030 error'+error);
                expect(true).assertTrue();
                done();
            }
        })

        /*
         * @tc.name:VibratorJsTest031
         * @tc.desc:Verification results of the incorrect parameters of the test interface.
         * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0410
         */
        it("VibratorJsTest031", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
            function vibratePromise() {
                return new Promise((resolve, reject) => {
                    vibrator.vibrate({
                        type: "time",
                        duration: 100
                    }, {
                        usage: "unknown"
                    }, (error) => {
                        if (error) {
                            expect(false).assertTrue();
                        } else {
							console.info('VibratorJsTest031 success_2');
                            expect(true).assertTrue();
                        }
                        setTimeout(() => {
                            done();
                        }, 500);
                    });
                })
            }

            let promise = new Promise((resolve, reject) => {
                vibrator.vibrate({
                    type: "time",
                    duration: 100
                }, {
                    usage: "unknown"
                }, (error) => {
                    if (error) {
                        expect(false).assertTrue();
                        reject();
                    } else {
						console.info('VibratorJsTest031 success_1');
                        expect(true).assertTrue();
                        resolve();
                    }
                });
            })

            await promise.then(() => {
                return vibratePromise();
            }, () => {
                console.info("VibratorJsTest031 reject");
            })
            done();
        })

        /*
         * @tc.name:VibratorJsTest032
         * @tc.desc:Verification results of the incorrect parameters of the test interface.
         * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0420
         */
        it("VibratorJsTest032", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
            let isSupport = false;
            function vibratePromise() {
                return new Promise((resolve, reject) => {
                    if (isSupport) {
                        vibrator.vibrate({
                            type: "time",
                            duration: 100
                        }, {
                            usage: "alarm"
                        }, (error) => {
                            if (error) {
                                expect(false).assertTrue();
                                reject();
                            } else {
								console.info('VibratorJsTest032 success_1');
                                expect(true).assertTrue();
                                resolve();
                            }
                        });
                    } else {
                        resolve();
                    }
                })
            }

            function vibratorPromise() {
                return new Promise((resolve, reject) => {
                    if (isSupport) {
                        vibrator.vibrate({
                            type: "preset",
                            effectId: EFFECT_ID,
                            count: 1,
                        }, {
                            usage: "unknown"
                        }, (error) => {
                            if (error) {
								console.info('VibratorJsTest032 success_2'+error);
                                expect(true).assertTrue();
                            } else {
                                expect(false).assertTrue();
                            }
                            setTimeout(() => {
                                done();
                            }, 500);
                        });
                    } else {
                        resolve();
                    }
                })
            }

            let isSupportPromise = new Promise((resolve, reject) => {
                vibrator.isSupportEffect(EFFECT_ID, (error, state) => {
                    if (error) {
                        expect(false).assertTrue();
                        reject(error);
                    } else {
                        isSupport = state;
                        resolve();
                    }
                });
            })

            await isSupportPromise.then(() => {
                return vibratePromise();
            }).then(() => {
                return vibratorPromise();
            }).catch((error) => {
                expect(false).assertTrue();
            })
            done();
        })

        /*
         * @tc.name:VibratorJsTest033
         * @tc.desc:Verification results of the incorrect parameters of the test interface.
         * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0430
         */
        it("VibratorJsTest033", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
            let isSupport = false;
            function vibratePromise() {
                return new Promise((resolve, reject) => {
                    if (isSupport) {
                        vibrator.vibrate({
                            type: "time",
                            duration: 10000
                        }, {
                            usage: "alarm"
                        }, (error) => {
                            if (error) {
                                expect(false).assertTrue();
                                reject();
                            } else {
								console.info('VibratorJsTest033 success');
                                expect(true).assertTrue();
                                resolve();
                            }
                        });
                    } else {
                        resolve();
                    }
                })
            }

            function vibratorPromise() {
                return new Promise((resolve, reject) => {
                    if (isSupport) {
                        vibrator.vibrate({
                            type: "preset",
                            effectId: EFFECT_ID,
                            count: 3,
                        }, {
                            usage: "unknown",
                        }, (error) => {
                            if (error) {
                                console.info("VibratorJsTest033 vibrate error"+error);
                                expect(false).assertTrue();
                            } else {
                                expect(true).assertTrue();
                            }
                            setTimeout(() => {
                                done();
                            }, 500);
                        });
                    } else {
                        resolve();
                    }
                })
            }

            let isSupportPromise = new Promise((resolve, reject) => {
                vibrator.isSupportEffect(EFFECT_ID, (error, state) => {
                    if (error) {
                        expect(false).assertTrue();
                        reject(error);
                    } else {
                        isSupport = state;
                        resolve();
                    }
                });
            })

            await isSupportPromise.then(() => {
                return vibratePromise();
            }).then(() => {
                return vibratorPromise();
            }).catch((error) => {
				console.info("VibratorJsTest033 error"+error);
                expect(false).assertTrue();
            })
            done();
        })

        /*
         * @tc.name:VibratorJsTest034
         * @tc.desc:Verification results of the incorrect parameters of the test interface.
         * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0440
         */
        it("VibratorJsTest034", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
            let isSupport = false;
            function vibratePromise() {
                return new Promise((resolve, reject) => {
                    if (isSupport) {
                        vibrator.vibrate({
                            type: "preset",
                            effectId: EFFECT_ID,
                            count: 3,
                        }, {
                            usage: "unknown",
                        }, (error) => {
                            if (error) {
                                expect(false).assertTrue();
                                reject();
                            } else {
								console.info("VibratorJsTest034 vibrate success");
                                expect(true).assertTrue();
                                resolve();
                            }
                        });
                    } else {
                        resolve();
                    }
                })
            }

            function vibratorPromise() {
                return new Promise((resolve, reject) => {
                    if (isSupport) {
                        vibrator.vibrate({
                            type: "preset",
                            effectId: EFFECT_ID,
                            count: 1,
                        }, {
                            usage: "unknown",
                        }, (error) => {
                            if (error) {
								console.info("VibratorJsTest034 vibrate error"+error);
                                expect(true).assertTrue();
                            } else {
                                expect(false).assertTrue();
                            }
                            setTimeout(() => {
                                done();
                            }, 500);
                        });
                    } else {
                        resolve();
                    }
                })
            }

            let isSupportPromise = new Promise((resolve, reject) => {
                vibrator.isSupportEffect(EFFECT_ID, (error, state) => {
                    if (error) {
                        expect(false).assertTrue();
                        reject(error);
                    } else {
                        isSupport = state;
                        resolve();
                    }
                });
            })

            await isSupportPromise.then(() => {
                return vibratePromise();
            }).then(() => {
                return vibratorPromise();
            }).catch((error) => {
                expect(false).assertTrue();
            })
            done();
        })

        /*
         * @tc.name:VibratorJsTest035
         * @tc.desc:Verification results of the incorrect parameters of the test interface.
         * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0450
         */
        it("VibratorJsTest035", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
            let isSupport = false;
            function vibratePromise() {
                return new Promise((resolve, reject) => {
                    if (isSupport) {
                        vibrator.vibrate({
                            type: "preset",
                            effectId: EFFECT_ID,
                            count: 3,
                        }, {
                            usage: "unknown"
                        }, (error) => {
                            if (error) {
								console.info("VibratorJsTest035 vibrate error_1:"+error);
                                expect(true).assertTrue();
                            } else {
								console.info("VibratorJsTest035 vibrate success_1");
                                expect(true).assertTrue();
                                resolve();
                            }
                        });
                    } else {
                        resolve();
                    }
                })
            }

            function vibratorPromise() {
                return new Promise((resolve, reject) => {
                    if (isSupport) {
                        vibrator.vibrate({
                            type: "time",
                            duration: 3000,
                        }, {
                            usage: "alarm"
                        }, (error) => {
                            if (error) {
								console.info("VibratorJsTest035 vibrate error_2:"+error);
                                expect(true).assertTrue();
                            } else {
								console.info("VibratorJsTest035 vibrate success_2");
                                expect(true).assertTrue();
                            }
                            setTimeout(() => {
                                done();
                            }, 500);
                        });
                    } else {
                        resolve();
                    }
                })
            }

            let isSupportPromise = new Promise((resolve, reject) => {
                vibrator.isSupportEffect(EFFECT_ID, (error, state) => {
                    if (error) {
                        expect(false).assertTrue();
                        reject(error);
                    } else {
                        isSupport = state;
                        resolve();
                    }
                });
            })

            await isSupportPromise.then(() => {
                return vibratePromise();
            }).then(() => {
                return vibratorPromise();
            }).catch((error) => {
				console.info("VibratorJsTest035 error"+error);
                expect(false).assertTrue();
            })
            done();
        })

        /*
         * @tc.name:VibratorJsTest036
         * @tc.desc:Verification results of the incorrect parameters of the test interface.
         * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0460
         */
        it("VibratorJsTest036", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
            let isSupport = false;
            function vibratePromise() {
                return new Promise((resolve, reject) => {
                    if (isSupport) {
                        vibrator.vibrate({
                            type: "preset",
                            effectId: EFFECT_ID,
                            count: 1,
                        }, {
                            usage: "unknown"
                        }, (error) => {
                            if (error) {
								console.info("VibratorJsTest036 vibrate error_1"+error);
                                expect(true).assertTrue();
                            } else {
								console.info("VibratorJsTest036 success_1");
                                expect(true).assertTrue();
                                resolve();
                            }
                        });
                    } else {
                        resolve();
                    }
                })
            }

            function vibratorPromise() {
                return new Promise((resolve, reject) => {
                    if (isSupport) {
                        vibrator.vibrate({
                            type: "time",
                            duration: 3000,
                        }, {
                            usage: "alarm"
                        }, (error) => {
                            if (error) {
								console.info("VibratorJsTest036 vibrate error_2"+error);
                                expect(true).assertTrue();
                            } else {
								console.info("VibratorJsTest036 success_2");
                                expect(true).assertTrue();
                            }
                            setTimeout(() => {
                                done();
                            }, 500);
                        });
                    } else {
                        resolve();
                    }
                })
            }

            let isSupportPromise = new Promise((resolve, reject) => {
                vibrator.isSupportEffect(EFFECT_ID, (error, state) => {
                    if (error) {
                        expect(false).assertTrue();
                        reject(error);
                    } else {
                        isSupport = state;
                        resolve();
                    }
                });
            })

            await isSupportPromise.then(() => {
                return vibratePromise();
            }).then(() => {
                return vibratorPromise();
            }).catch((error) => {
                expect(false).assertTrue();
            })
            done();
        })

        /*
         * @tc.name:VibratorJsTest037
         * @tc.desc:Verification results of the incorrect parameters of the test interface.
         * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0470
         */
        it("VibratorJsTest037", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
            let isSupport = false;
            function vibratePromise() {
                return new Promise((resolve, reject) => {
                    if (isSupport) {
                        vibrator.vibrate({
                            type: "preset",
                            effectId: EFFECT_ID,
                            count: 3,
                        }, {
                            usage: "unknown"
                        }, (error) => {
                            if (error) {
								console.info("VibratorJsTest037 vibrate error_1:"+error);
                                expect(true).assertTrue();
                            } else {
								console.info("VibratorJsTest037 success_1");
                                expect(true).assertTrue();
                                resolve();
                            }
                        });
                    } else {
                        resolve();
                    }
                })
            }

            function vibratorPromise() {
                return new Promise((resolve, reject) => {
                    if (isSupport) {
                        vibrator.vibrate({
                            type: "preset",
                            effectId: EFFECT_ID,
                            count: 3,
                        }, {
                            usage: "unknown"
                        }, (error) => {
                            if (error) {
								console.info("VibratorJsTest037 vibrate error_2:"+error);
                                expect(true).assertTrue();
                            } else {
								console.info("VibratorJsTest037 success_2");
                                expect(true).assertTrue();
                            }
                            setTimeout(() => {
                                done();
                            }, 500);
                        });
                    } else {
                        resolve();
                    }
                })
            }

            let isSupportPromise = new Promise((resolve, reject) => {
                vibrator.isSupportEffect(EFFECT_ID, (error, state) => {
                    if (error) {
                        expect(false).assertTrue();
                        reject(error);
                    } else {
                        isSupport = state;
                        resolve();
                    }
                });
            })

            await isSupportPromise.then(() => {
                return vibratePromise();
            }).then(() => {
                return vibratorPromise();
            }).catch((error) => {
				console.info("VibratorJsTest037 error:"+error);
                expect(false).assertTrue();
            })
            done();
        })

        /*
         * @tc.name:VibratorJsTest038
         * @tc.desc:Verification results of the incorrect parameters of the test interface.
         * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0480
         */
        it("VibratorJsTest038", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
            let isSupport = false;
            function vibratePromise() {
                return new Promise((resolve, reject) => {
                    if (isSupport) {
                        vibrator.vibrate({
                            type: "preset",
                            effectId: EFFECT_ID,
                            count: 1,
                        }, {
                            usage: "notification"
                        }, (error) => {
                            if (error) {
								console.info("VibratorJsTest038 vibrate error_1:"+error);
                                expect(true).assertTrue();
                            } else {
								console.info("VibratorJsTest038 success_1");
                                expect(true).assertTrue();
                                resolve();
                            }
                        });
                    } else {
                        resolve();
                    }
                })
            }

            function vibratorPromise() {
                return new Promise((resolve, reject) => {
                    if (isSupport) {
                        vibrator.vibrate({
                            type: "preset",
                            effectId: EFFECT_ID,
                            count: 1,
                        }, {
                            usage: "ring"
                        }, (error) => {
                            if (error) {
								console.info("VibratorJsTest038 vibrate error_2:"+error);
                                expect(true).assertTrue();
                            } else {
								console.info("VibratorJsTest038 success_2");
                                expect(true).assertTrue();
                            }
                            setTimeout(() => {
                                done();
                            }, 500);
                        });
                    } else {
                        resolve();
                    }
                })
            }

            let isSupportPromise = new Promise((resolve, reject) => {
                vibrator.isSupportEffect(EFFECT_ID, (error, state) => {
                    if (error) {
                        expect(false).assertTrue();
                        reject(error);
                    } else {
                        isSupport = state;
                        resolve();
                    }
                });
            })

            await isSupportPromise.then(() => {
                return vibratePromise();
            }).then(() => {
                return vibratorPromise();
            }).catch((error) => {
				console.info("VibratorJsTest038 error:"+error);
                expect(false).assertTrue();
            })
            done();
        })

        /*
         * @tc.name:VibratorJsTest039
         * @tc.desc:Verification results of the incorrect parameters of the test interface.
         * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0490
         */
        it("VibratorJsTest039", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
            let isSupport = false;
            function vibratePromise() {
                return new Promise((resolve, reject) => {
                    if (isSupport) {
                        vibrator.vibrate({
                            type: "preset",
                            effectId: EFFECT_ID,
                            count: 1,
                        }, {
                            usage: "notification"
                        }, (error) => {
                            if (error) {
								console.info("VibratorJsTest039 vibrate error_1:"+error);
                                expect(true).assertTrue();
                            } else {
								console.info("VibratorJsTest039 success_1");
                                expect(true).assertTrue();
                                resolve();
                            }
                        });
                    } else {
                        resolve();
                    }
                })
            }

            function vibratorPromise() {
                return new Promise((resolve, reject) => {
                    if (isSupport) {
                        vibrator.vibrate({
                            type: "preset",
                            effectId: EFFECT_ID,
                            count: 1,
                        }, {
                            usage: "unknown"
                        }, (error) => {
                            if (error) {
								console.info("VibratorJsTest039 vibrate error_2:"+error);
                                expect(true).assertTrue();
                            } else {
								console.info("VibratorJsTest039 success_2");
                                expect(false).assertTrue();
                            }
                            setTimeout(() => {
                                done();
                            }, 500);
                        });
                    } else {
                        resolve();
                    }
                })
            }

            let isSupportPromise = new Promise((resolve, reject) => {
                vibrator.isSupportEffect(EFFECT_ID, (error, state) => {
                    if (error) {
                        expect(false).assertTrue();
                        reject(error);
                    } else {
                        isSupport = state;
                        resolve();
                    }
                });
            })

            await isSupportPromise.then(() => {
                return vibratePromise();
            }).then(() => {
                return vibratorPromise();
            }).catch((error) => {
				console.info("VibratorJsTest039 error:"+error);
                expect(false).assertTrue();
            })
            done();
        })

        /*
     * @tc.name:VibratorJsTest040
     * @tc.desc:Verification results of the incorrect parameters of the test interface.
     * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0500
     */
        it("VibratorJsTest040", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL0, async function (done) {
            vibrator.vibrate({
                type: "time",
                duration: 1000
            }, {
                id: 0,
                usage: "unknown"
            }, (error) => {
                if (error) {
                    console.info('VibratorJsTest040 vibrator error'+error);
                    expect(false).assertTrue();
                } else {
                    console.info('VibratorJsTest040 vibrator success');
                    expect(true).assertTrue();
                }
                setTimeout(() => {
                    done();
                }, 500);
            });
        })

        /*
         * @tc.name:VibratorJsTest041
         * @tc.desc:Verification results of the incorrect parameters of the test interface.
         * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0510
         */
        it("VibratorJsTest041", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
            try {
                vibrator.vibrate({
                    type: "",
                    duration: 1000
                }, {
                    id: 1,
                    usage: "unknown"
                }, (error) => {
                    if (error) {
                        expect(true).assertTrue();
                    } else {
                        expect(false).assertTrue();
                    }
                    setTimeout(() => {
                        done();
                    }, 500);
                });
            } catch (error) {
                console.info("VibratorJsTest040 error:"+error);
                expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
                expect(error.message).assertEqual(PARAMETER_ERROR_MSG);
                done();
            }
        })

        /*
         * @tc.name:VibratorJsTest042
         * @tc.desc:Verification results of the incorrect parameters of the test interface.
         * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0520
         */
        it("VibratorJsTest042", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
            try {
                vibrator.vibrate({
                    type: "preset",
                    effectId: EFFECT_ID,
                    count: 1,
                }, {
                    id: "xxx",
                    usage: "unknown"
                }, (error) => {
                    if (error) {
                        console.info('VibratorJsTest042 vibrator error:'+error);
                        expect(false).assertTrue();
                    } else {
                        console.info('VibratorJsTest042 vibrator success');
                        expect(true).assertTrue();
                    }
                    setTimeout(() => {
                        done();
                    }, 500);
                });
            } catch (error) {
                    console.info("VibratorJsTest042 error:"+error);
                    expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
                    expect(error.message).assertEqual(PARAMETER_ERROR_MSG);
                    done();
            }
        )

            /*
             * @tc.name:VibratorJsTest043
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0530
             */
            it("VibratorJsTest043", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
                try {
                    vibrator.vibrate({
                        type: "preset",
                        effectId: "",
                        count: 3,
                    }, {
                        id: null,
                        usage: "unknown"
                    }, (error) => {
                        if (error) {
                            expect(true).assertTrue();
                        } else {
                            expect(false).assertTrue();
                        }
                        setTimeout(() => {
                            done();
                        }, 500);
                    });
                } catch (error) {
                    console.info("VibratorJsTest043 error:"+error);
                    expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
                    expect(error.message).assertEqual(PARAMETER_ERROR_MSG);
                    done();
                }

            })
            /*
          * @tc.name:VibratorJsTest044
          * @tc.desc:Verification results of the incorrect parameters of the test interface.
          * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0540
          */
            it("VibratorJsTest044", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
                vibrator.startVibration({
                    type: "time",
                    duration: 1000
                }, {
                    usage: "unknown"
                }, (error) => {
                    if (error) {
                        console.info('VibratorJsTest044 startVibration error'+error);
                        expect(false).assertTrue();
                    } else {
                        console.info('VibratorJsTest044 startVibration success');
                        expect(true).assertTrue();
                    }
                    setTimeout(() => {
                        done();
                    }, 500);
                });
            })

            /*
             * @tc.name:VibratorJsTest045
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0550
             */
            it("VibratorJsTest045", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
                try {
                    vibrator.startVibration({
                        type: "",
                        duration: 1000
                    }, {
                        usage: "unknown"
                    }, (error) => {
                        if (error) {
                            expect(true).assertTrue();
                        } else {
                            expect(false).assertTrue();
                        }
                        setTimeout(() => {
                            done();
                        }, 500);
                    });
                } catch (error) {
                     console.info('VibratorJsTest045 error'+error);
                    expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
                    expect(error.message).assertEqual(PARAMETER_ERROR_MSG);
                    done();
                }
            })

            /*
             * @tc.name:VibratorJsTest046
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0560
             */
            it("VibratorJsTest046", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
                let isSupport = false;
                function startVibrationPromise() {
                    return new Promise((resolve, reject) => {
                        if (isSupport) {
                            vibrator.startVibration({
                                type: "preset",
                                effectId: EFFECT_ID,
                                count: 1,
                            }, {
                                usage: "unknown"
                            }, (error) => {
                                if (error) {
                                    console.info('VibratorJsTest046 vibrator error'+error);
                                    expect(true).assertTrue();
                                } else {
                                    console.info('VibratorJsTest046 vibrator success');
                                    expect(true).assertTrue();
                                }
                                setTimeout(() => {
                                    done();
                                }, 500);
                            });
                        } else {
                            resolve();
                        }
                    })
                }

                let isSupportPromise = new Promise((resolve, reject) => {
                    vibrator.isSupportEffect(EFFECT_ID, (error, state) => {
                        if (error) {
                            expect(false).assertTrue();
                            reject(error);
                        } else {
                            isSupport = state;
                            resolve();
                        }
                    });
                })

                await isSupportPromise.then(() => {
                    return startVibrationPromise();
                }).catch((error) => {
					 console.info('VibratorJsTest046 error'+error);
                    expect(false).assertTrue();
                })
                done();
            })

            /*
             * @tc.name:VibratorJsTest047
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0570
             */
            it("VibratorJsTest047", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
                try {
                    vibrator.startVibration({
                        type: "preset",
                        effectId: "",
                        count: 3,
                    }, {
                        usage: "unknown"
                    }, (error) => {
                        if (error) {
							console.info('VibratorJsTest047 startVibration error'+error);
                            expect(true).assertTrue();
                        } else {
                            expect(false).assertTrue();
                        }
                        setTimeout(() => {
                            done();
                        }, 500);
                    });
                } catch (error) {
                     console.info('VibratorJsTest047 error'+error);
                    expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
                    expect(error.message).assertEqual(PARAMETER_ERROR_MSG);
                    done();
                }
            })

            /*
             * @tc.name:VibratorJsTest048
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0580
             */
            it("VibratorJsTest048", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
                try {
                    vibrator.startVibration({
                        type: "preset",
                        effectId: EFFECT_ID,
                        count: 3,
                    }, {
                        usage: ""
                    }, (error) => {
                        expect(false).assertTrue();
                        setTimeout(() => {
                            done();
                        }, 500);
                    });
                } catch (error) {
                    console.info("VibratorJsTest048 error :" + error);
                    expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
                    expect(error.message).assertEqual(PARAMETER_ERROR_MSG);
                    done();
                }
            })

            /*
             * @tc.name:VibratorJsTest049
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0590
             */
            it("VibratorJsTest049", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
                try {
                    vibrator.startVibration(null, null);
                } catch (error) {
                    console.info("VibratorJsTest049 error :" + error);
                    expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
                    expect(error.message).assertEqual(PARAMETER_ERROR_MSG);
                    done();
                }
            })

            /*
             * @tc.name:VibratorJsTest050
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0600
             */
            it("VibratorJsTest050", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
                await vibrator.startVibration({
                    type: "time",
                    duration: 1000,
                }, {
                    usage: "unknown"
                }).then(() => {
                    console.info("VibratorJsTest050 success");
                    expect(true).assertTrue();
                }).catch((error) => {
                    console.info("VibratorJsTest050 error :" + error);
                    expect(false).assertTrue();
                });
                done();
            })

            /*
             * @tc.name:VibratorJsTest051
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0610
             */
            it("VibratorJsTest051", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
                try {
                    await vibrator.startVibration({
                        type: "",
                        duration: 1000
                    }, {
                        usage: "unknown"
                    }).then(() => {
                        console.info("VibratorJsTest051 success");
                        expect(false).assertTrue();
                    }).catch((error) => {
                        console.info("VibratorJsTest051 error :" + error);
                        expect(true).assertTrue();
                    });
                    done();
                } catch (error) {
                    console.info("VibratorJsTest051 error :" + error);
                    expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
                    expect(error.message).assertEqual(PARAMETER_ERROR_MSG);
                    done();
                }
            })

            /*
             * @tc.name:VibratorJsTest052
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0620
             */
            it("VibratorJsTest052", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
                function startVibrationPromise() {
                    return new Promise((resolve, reject) => {
                        if (isSupport) {
                            vibrator.startVibration({
                                type: "preset",
                                effectId: EFFECT_ID,
                                count: 1,
                            }, {
                                usage: "unknown"
                            }).then(() => {
                                console.info("VibratorJsTest052 success");
                                expect(true).assertTrue();
                            }).catch((error) => {
                                console.info("VibratorJsTest052 error :" + error);
                                expect(false).assertTrue();
                            });
                        } else {
                            resolve();
                        }
                    })
                }

                let isSupportPromise = new Promise((resolve, reject) => {
                    vibrator.isSupportEffect(EFFECT_ID, (error, state) => {
                        if (error) {
                            expect(false).assertTrue();
                            reject(error);
                        } else {
                            isSupport = state;
                            resolve();
                        }
                    });
                })

                await isSupportPromise.then(() => {
                    return startVibrationPromise();
                }).catch((error) => {
                    expect(false).assertTrue();
                })
                done();
            })

            /*
             * @tc.name:VibratorJsTest053
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0630
             */
            it("VibratorJsTest053", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
                try {
                    vibrator.startVibration({
                        type: "preset",
                        effectId: "",
                        count: 3,
                    }, {
                        usage: "unknown"
                    }).then(() => {
                        console.info("VibratorJsTest051 success");
                        expect(false).assertTrue();
                        done();
                    }).catch((error) => {
                        console.info("VibratorJsTest053 error :" + error);
                        expect(true).assertTrue();
                        done();
                    });
                } catch (error) {
                    console.info("VibratorJsTest053 catch error :" + error);
                    expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
                    expect(error.message).assertEqual(PARAMETER_ERROR_MSG);
                    done();
                }
            })

            /*
             * @tc.name:VibratorJsTest054
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0640
             */
            it("VibratorJsTest054", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
                try {
                    vibrator.startVibration({
                        type: "preset",
                        effectId: EFFECT_ID,
                        count: 3,
                    }, {
                        usage: ""
                    }).then(() => {
                        console.info("VibratorJsTest054 success");
                        expect(false).assertTrue();
                        done();
                    }).catch((error) => {
                        console.info("VibratorJsTest054 error :" + error);
                        expect(true).assertTrue();
                        done();
                    });
                } catch (error) {
                    console.info("VibratorJsTest054 catch error :" + error);
                    expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
                    expect(error.message).assertEqual(PARAMETER_ERROR_MSG);
                    done();
                }
            })

            /*
             * @tc.name:VibratorJsTest055
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0650
             */
            it("VibratorJsTest055", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
                try {
                    vibrator.startVibration({
                        type: 1,
                        count: 3,
                    }, {
                        usage: ""
                    })
                } catch (error) {
                    console.info("VibratorJsTest055 catch error :" + error);
                    expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
                    expect(error.message).assertEqual(PARAMETER_ERROR_MSG);
                    done();
                }
            })

            /*
             * @tc.name:VibratorJsTest056
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0660
             */
            it("VibratorJsTest056", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
                let isSupport = false;
                function vibratePromise() {
                    return new Promise((resolve, reject) => {
                        if (isSupport) {
                            vibrator.startVibration({
                                type: "time",
                                duration: 100
                            }, {
                                usage: "unknown"
                            }, (error) => {
                                if (error) {
                                    console.info("VibratorJsTest056 error :" + error);
                                    expect(false).assertTrue();
                                    reject();
                                } else {
                                    console.info("VibratorJsTest056 success");
                                    expect(true).assertTrue();
                                    resolve();
                                }
                            });
                        } else {
                            resolve();
                        }
                    })
                }

                function startVibrationPromise() {
                    return new Promise((resolve, reject) => {
                        if (isSupport) {
                            vibrator.startVibration({
                                type: "time",
                                duration: 100
                            }, {
                                usage: "unknown"
                            }, (error) => {
                                if (error) {
                                    console.info("VibratorJsTest056_1 error :" + error);
                                    expect(false).assertTrue();
                                } else {
                                    console.info("VibratorJsTest056 success");
                                    expect(true).assertTrue();
                                }
                                setTimeout(() => {
                                    done();
                                }, 500);
                            });
                        } else {
                            resolve();
                        }
                    })
                }

                let isSupportPromise = new Promise((resolve, reject) => {
                    vibrator.isSupportEffect(EFFECT_ID, (error, state) => {
                        if (error) {
                            expect(false).assertTrue();
                            reject(error);
                        } else {
                            isSupport = state;
                            resolve();
                        }
                    });
                })

                await isSupportPromise.then(() => {
                    return vibratePromise();
                }).then(() => {
                    return startVibrationPromise();
                }).catch((error) => {
                    expect(false).assertTrue();
                })
                done();
            })


            /*
             * @tc.name:VibratorJsTest057
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0670
             */
            it("VibratorJsTest057", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
                let isSupport = false;
                function vibratePromise() {
                    return new Promise((resolve, reject) => {
                        if (isSupport) {
                            vibrator.startVibration({
                                type: "time",
                                duration: 100
                            }, {
                                usage: "alarm"
                            }, (error) => {
                                if (error) {
                                    console.info("VibratorJsTest057_2 error :" + error);
                                    expect(false).assertTrue();
                                    reject();
                                } else {
                                    console.info("VibratorJsTest057_2 success");
                                    expect(true).assertTrue();
                                    resolve();
                                }
                            });
                        } else {
                            resolve();
                        }
                    })
                }

                function startVibrationPromise() {
                    return new Promise((resolve, reject) => {
                        if (isSupport) {
                            vibrator.startVibration({
                                type: "preset",
                                effectId: EFFECT_ID,
                                count: 1,
                            }, {
                                usage: "unknown"
                            }, (error) => {
                                if (error) {
                                    console.info("VibratorJsTest057_1 error :" + error);
                                    expect(error.code).assertEqual(OPERATION_FAIL_CODE);
                                    expect(error.message).assertEqual(OPERATION_FAIL_MSG);
                                } else {
                                    expect(false).assertTrue();
                                }
                                setTimeout(() => {
                                    done();
                                }, 500);
                            });
                        } else {
                            resolve();
                        }
                    })
                }

                let isSupportPromise = new Promise((resolve, reject) => {
                    vibrator.isSupportEffect(EFFECT_ID, (error, state) => {
                        if (error) {
                            expect(false).assertTrue();
                            reject(error);
                        } else {
                            isSupport = state;
                            resolve();
                        }
                    });
                })

                await isSupportPromise.then(() => {
                    return vibratePromise();
                }).then(() => {
                    return startVibrationPromise();
                }).catch((error) => {
                    expect(false).assertTrue();
                })
                done();
            })


            /*
             * @tc.name:VibratorJsTest058
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0680
             */
            it("VibratorJsTest058", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
                let isSupport = false;
                function vibratePromise() {
                    return new Promise((resolve, reject) => {
                        if (isSupport) {
                            vibrator.startVibration({
                                type: "time",
                                duration: 10000
                            }, {
                                usage: "alarm"
                            }, (error) => {
                                if (error) {
                                    console.info("VibratorJsTest058 error :" + error);
                                    expect(false).assertTrue();
                                    reject();
                                } else {
                                    console.info("VibratorJsTest058 success");
                                    expect(true).assertTrue();
                                    resolve();
                                }
                            });
                        } else {
                            resolve();
                        }
                    })
                }

                function startVibrationPromise() {
                    return new Promise((resolve, reject) => {
                        if (isSupport) {
                            vibrator.startVibration({
                                type: "preset",
                                effectId: EFFECT_ID,
                                count: 3,
                            }, {
                                usage: "unknown",
                            }, (error) => {
                                if (error) {
                                    console.info("VibratorJsTest058_1 error :" + error);
                                    expect(false).assertTrue();
                                } else {
                                    console.info("VibratorJsTest058_1 success");
                                    expect(true).assertTrue();
                                }
                                setTimeout(() => {
                                    done();
                                }, 500);
                            });
                        } else {
                            resolve();
                        }
                    })
                }

                let isSupportPromise = new Promise((resolve, reject) => {
                    vibrator.isSupportEffect(EFFECT_ID, (error, state) => {
                        if (error) {
                            expect(false).assertTrue();
                            reject(error);
                        } else {
                            isSupport = state;
                            resolve();
                        }
                    });
                })

                await isSupportPromise.then(() => {
                    return vibratePromise();
                }).then(() => {
                    return startVibrationPromise();
                }).catch((error) => {
                    expect(false).assertTrue();
                })
                done();
            })


            /*
             * @tc.name:VibratorJsTest059
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0690
             */
            it("VibratorJsTest059", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
                let isSupport = false;
                function vibratePromise() {
                    return new Promise((resolve, reject) => {
                        if (isSupport) {
                            vibrator.startVibration({
                                type: "preset",
                                effectId: EFFECT_ID,
                                count: 3,
                            }, {
                                usage: "unknown",
                            }, (error) => {
                                if (error) {
                                    expect(false).assertTrue();
                                    reject();
                                } else {
                                    expect(true).assertTrue();
                                    resolve();
                                }
                            });
                        } else {
                            resolve();
                        }
                    })
                }

                function startVibrationPromise() {
                    return new Promise((resolve, reject) => {
                        if (isSupport) {
                            vibrator.startVibration({
                                type: "preset",
                                effectId: EFFECT_ID,
                                count: 1,
                            }, {
                                usage: "unknown",
                            }, (error) => {
                                if (error) {
                                    expect(error.code).assertEqual(OPERATION_FAIL_CODE);
                                    expect(error.message).assertEqual(OPERATION_FAIL_MSG);
                                } else {
                                    expect(false).assertTrue();
                                }
                                setTimeout(() => {
                                    done();
                                }, 500);
                            });
                        } else {
                            resolve();
                        }
                    })
                }

                let isSupportPromise = new Promise((resolve, reject) => {
                    vibrator.isSupportEffect(EFFECT_ID, (error, state) => {
                        if (error) {
                            expect(false).assertTrue();
                            reject(error);
                        } else {
                            isSupport = state;
                            resolve();
                        }
                    });
                })

                await isSupportPromise.then(() => {
                    return vibratePromise();
                }).then(() => {
                    return startVibrationPromise();
                }).catch((error) => {
                    expect(false).assertTrue();
                })
                done();
            })


            /*
             * @tc.name:VibratorJsTest060
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0700
             */
            it("VibratorJsTest060", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
                let isSupport = false;
                function vibratePromise() {
                    return new Promise((resolve, reject) => {
                        if (isSupport) {
                            vibrator.startVibration({
                                type: "preset",
                                effectId: EFFECT_ID,
                                count: 3,
                            }, {
                                usage: "unknown"
                            }, (error) => {
                                if (error) {
                                    expect(false).assertTrue();
                                    reject();
                                } else {
                                    expect(true).assertTrue();
                                    resolve();
                                }
                            });
                        } else {
                            resolve();
                        }
                    })
                }

                function startVibrationPromise() {
                    return new Promise((resolve, reject) => {
                        if (isSupport) {
                            vibrator.startVibration({
                                type: "time",
                                duration: 3000,
                            }, {
                                usage: "alarm"
                            }, (error) => {
                                if (error) {
                                    expect(error.code).assertEqual(OPERATION_FAIL_CODE);
                                    expect(error.message).assertEqual(OPERATION_FAIL_MSG);
                                } else {
                                    expect(false).assertTrue();
                                }
                                setTimeout(() => {
                                    done();
                                }, 500);
                            });
                        } else {
                            resolve();
                        }
                    })
                }

                let isSupportPromise = new Promise((resolve, reject) => {
                    vibrator.isSupportEffect(EFFECT_ID, (error, state) => {
                        if (error) {
                            expect(false).assertTrue();
                            reject(error);
                        } else {
                            isSupport = state;
                            resolve();
                        }
                    });
                })

                await isSupportPromise.then(() => {
                    return vibratePromise();
                }).then(() => {
                    return startVibrationPromise();
                }).catch((error) => {
                    expect(false).assertTrue();
                })
                done();
            })


            /*
             * @tc.name:VibratorJsTest061
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0710
             */
            it("VibratorJsTest061", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
                let isSupport = false;
                function vibratePromise() {
                    return new Promise((resolve, reject) => {
                        if (isSupport) {
                            vibrator.startVibration({
                                type: "preset",
                                effectId: EFFECT_ID,
                                count: 1,
                            }, {
                                usage: "unknown"
                            }, (error) => {
                                if (error) {
                                    expect(false).assertTrue();
                                    reject();
                                } else {
                                    expect(true).assertTrue();
                                    resolve();
                                }
                            });
                        } else {
                            resolve();
                        }
                    })
                }

                function startVibrationPromise() {
                    return new Promise((resolve, reject) => {
                        if (isSupport) {
                            vibrator.startVibration({
                                type: "time",
                                duration: 3000,
                            }, {
                                usage: "alarm"
                            }, (error) => {
                                if (error) {
                                    expect(false).assertTrue();
                                } else {
                                    expect(true).assertTrue();
                                }
                                setTimeout(() => {
                                    done();
                                }, 500);
                            });
                        } else {
                            resolve();
                        }
                    })
                }

                let isSupportPromise = new Promise((resolve, reject) => {
                    vibrator.isSupportEffect(EFFECT_ID, (error, state) => {
                        if (error) {
                            expect(false).assertTrue();
                            reject(error);
                        } else {
                            isSupport = state;
                            resolve();
                        }
                    });
                })

                await isSupportPromise.then(() => {
                    return vibratePromise();
                }).then(() => {
                    return startVibrationPromise();
                }).catch((error) => {
                    expect(false).assertTrue();
                })
                done();
            })


            /*
             * @tc.name:VibratorJsTest062
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0720
             */
            it("VibratorJsTest062", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
                let isSupport = false;
                function vibratePromise() {
                    return new Promise((resolve, reject) => {
                        if (isSupport) {
                            vibrator.startVibration({
                                type: "preset",
                                effectId: EFFECT_ID,
                                count: 1,
                            }, {
                                usage: "unknown"
                            }, (error) => {
                                if (error) {
                                    expect(false).assertTrue();
                                    reject(error);
                                } else {
                                    expect(true).assertTrue();
                                    resolve();
                                }
                            });
                        } else {
                            resolve();
                        }
                    })
                }

                function startVibrationPromise() {
                    return new Promise((resolve, reject) => {
                        if (isSupport) {
                            vibrator.startVibration({
                                type: "preset",
                                effectId: EFFECT_ID,
                                count: 3,
                            }, {
                                usage: "unknown"
                            }, (error) => {
                                if (error) {
                                    expect(false).assertTrue();
                                } else {
                                    expect(true).assertTrue();
                                }
                                setTimeout(() => {
                                    done();
                                }, 500);
                            });
                        } else {
                            resolve();
                        }
                    })
                }

                let isSupportPromise = new Promise((resolve, reject) => {
                    vibrator.isSupportEffect(EFFECT_ID, (error, state) => {
                        if (error) {
                            expect(false).assertTrue();
                            reject(error);
                        } else {
                            isSupport = state;
                            resolve();
                        }
                    });
                })

                await isSupportPromise.then(() => {
                    return vibratePromise();
                }).then(() => {
                    return startVibrationPromise();
                }).catch((error) => {
                    expect(false).assertTrue();
                })
                done();
            })

            /*
             * @tc.name:VibratorJsTest063
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0730
             */
            it("VibratorJsTest063", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
                let isSupport = false;
                function vibratePromise() {
                    return new Promise((resolve, reject) => {
                        if (isSupport) {
                            vibrator.startVibration({
                                type: "preset",
                                effectId: EFFECT_ID,
                                count: 1,
                            }, {
                                usage: "notification"
                            }, (error) => {
                                if (error) {
                                    expect(false).assertTrue();
                                    reject();
                                } else {
                                    expect(true).assertTrue();
                                    resolve();
                                }
                            });
                        } else {
                            resolve();
                        }
                    })
                }

                function startVibrationPromise() {
                    return new Promise((resolve, reject) => {
                        if (isSupport) {
                            vibrator.startVibration({
                                type: "preset",
                                effectId: EFFECT_ID,
                                count: 1,
                            }, {
                                usage: "ring"
                            }, (error) => {
                                if (error) {
                                    expect(false).assertTrue();
                                } else {
                                    expect(true).assertTrue();
                                }
                                setTimeout(() => {
                                    done();
                                }, 500);
                            });
                        } else {
                            resolve();
                        }
                    })
                }

                let isSupportPromise = new Promise((resolve, reject) => {
                    vibrator.isSupportEffect(EFFECT_ID, (error, state) => {
                        if (error) {
                            expect(false).assertTrue();
                            reject(error);
                        } else {
                            isSupport = state;
                            resolve();
                        }
                    });
                })

                await isSupportPromise.then(() => {
                    return vibratePromise();
                }).then(() => {
                    return startVibrationPromise();
                }).catch((error) => {
                    expect(false).assertTrue();
                })
                done();
            })

            /*
             * @tc.name:VibratorJsTest064
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0740
             */
            it("VibratorJsTest064", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
                let isSupport = false;
                function vibratePromise() {
                    return new Promise((resolve, reject) => {
                        if (isSupport) {
                            vibrator.startVibration({
                                type: "preset",
                                effectId: EFFECT_ID,
                                count: 1,
                            }, {
                                usage: "notification"
                            }, (error) => {
                                if (error) {
                                    expect(false).assertTrue();
                                    reject();
                                } else {
                                    expect(true).assertTrue();
                                    resolve();
                                }
                            });
                        } else {
                            resolve();
                        }
                    })
                }

                function startVibrationPromise() {
                    return new Promise((resolve, reject) => {
                        if (isSupport) {
                            vibrator.startVibration({
                                type: "preset",
                                effectId: EFFECT_ID,
                                count: 1,
                            }, {
                                usage: "unknown"
                            }, (error) => {
                                if (error) {
                                    expect(error.code).assertEqual(OPERATION_FAIL_CODE);
                                    expect(error.message).assertEqual(OPERATION_FAIL_MSG);
                                } else {
                                    expect(false).assertTrue();
                                }
                                setTimeout(() => {
                                    done();
                                }, 500);
                            });
                        } else {
                            resolve();
                        }
                    })
                }

                let isSupportPromise = new Promise((resolve, reject) => {
                    vibrator.isSupportEffect(EFFECT_ID, (error, state) => {
                        if (error) {
                            expect(false).assertTrue();
                            reject(error);
                        } else {
                            isSupport = state;
                            resolve();
                        }
                    });
                })

                await isSupportPromise.then(() => {
                    return vibratePromise();
                }).then(() => {
                    return startVibrationPromise();
                }).catch((error) => {
                    expect(false).assertTrue();
                })
                done();
            })


            /*
             * @tc.name:VibratorJsTest065
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0750
             */
            it("VibratorJsTest065", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
                function vibrateCallback(error) {
                    if (error) {
                        console.info('VibratorJsTest065  stop fail');
                        expect(false).assertTrue();
                    } else {
                        console.info('VibratorJsTest065  stop off');
                        expect(false).assertTrue();
                    }
                    setTimeout(() => {
                        done();
                    }, 500);
                }

                try {
                    vibrator.stopVibration("", vibrateCallback);
                } catch (error) {
                    console.info(error);
                    expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
                    expect(error.message).assertEqual(PARAMETER_ERROR_MSG);
                    done();
                }
            })


            /*
             * @tc.name:VibratorJsTest066
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0760
             */
            it("VibratorJsTest066", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
                let isSupport = false;
                function vibratePromise() {
                    return new Promise((resolve, reject) => {
                        if (isSupport) {
                            vibrator.startVibration(EFFECT_ID).then(() => {
                                console.log("VibratorJsTest066  vibrate success");
                                expect(true).assertTrue();
                                setTimeout(() => {
                                    resolve();
                                }, 500);
                            }, (error) => {
                                expect(false).assertTrue();
                                console.log("VibratorJsTest066  vibrate error");
                                setTimeout(() => {
                                    reject();
                                }, 500);
                            });
                        } else {
                            resolve();
                        }
                    })
                }

                function stopPromise() {
                    return new Promise((resolve, reject) => {
                        if (isSupport) {
                            vibrator.stopVibration("preset").then(() => {
                                console.log("VibratorJsTest066  off success");
                                expect(true).assertTrue();
                                setTimeout(() => {
                                    resolve();
                                }, 500);
                            }, (error) => {
                                expect(false).assertTrue();
                                console.log("VibratorJsTest066  off error");
                                setTimeout(() => {
                                    reject();
                                }, 500);
                            });
                        } else {
                            resolve();
                        }
                    })
                }

                let isSupportPromise = new Promise((resolve, reject) => {
                    vibrator.isSupportEffect(EFFECT_ID, (error, state) => {
                        if (error) {
                            expect(false).assertTrue();
                            reject(error);
                        } else {
                            isSupport = state;
                            resolve();
                        }
                    });
                })

                await isSupportPromise.then(() => {
                    return vibratePromise();
                }).then(() => {
                    return stopPromise();
                }).catch((error) => {
                    expect(false).assertTrue();
                })
                done();
            })


            /*
             * @tc.name:VibratorJsTest067
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0770
             */
            it("VibratorJsTest067", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
                try {
                    vibrator.stopVibration("").then(() => {
                        console.log("VibratorJsTest067  stop error");
                        expect(false).assertTrue();
                        setTimeout(() => {
                            done();
                        }, 500);
                    }, (error) => {
                        expect(false).assertTrue();
                        console.log("VibratorJsTest067 stop error");
                        setTimeout(() => {
                            done();
                        }, 500);
                    });
                } catch (error) {
                    console.info(error);
                    expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
                    expect(error.message).assertEqual(PARAMETER_ERROR_MSG);
                    done();
                }
            })

            /*
             * @tc.name:VibratorJsTest068
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0780
             */
            it("VibratorJsTest068", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
                function stopPromise() {
                    return new Promise((resolve, reject) => {
                        vibrator.stopVibration("time").then(() => {
                            console.log("VibratorJsTest068 stop success");
                            expect(true).assertTrue();
                            setTimeout(() => {
                                resolve();
                            }, 500);
                        }, (error) => {
                            expect(false).assertTrue();
                            console.log("VibratorJsTest068 stop error");
                            setTimeout(() => {
                                reject();
                            }, 500);
                        });
                    })
                }

                let promise = new Promise((resolve, reject) => {
                    vibrator.vibrate(180000).then(() => {
                        console.log("VibratorJsTest068 vibrate success");
                        expect(true).assertTrue();
                        setTimeout(() => {
                            resolve();
                        }, 500);
                    }, (error) => {
                        expect(false).assertTrue();
                        console.log("VibratorJsTest068  vibrate error");
                        setTimeout(() => {
                            reject();
                        }, 500);
                    });
                })

                await promise.then(() => {
                    return stopPromise();
                }, () => {
                    console.info("VibratorJsTest068 reject");
                })
                done();
            })

            /*
         * @tc.name:VibratorJsTest069
         * @tc.desc:Verification results of the incorrect parameters of the test interface.
         * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0790
         */
            it("VibratorJsTest069", 0, async function (done) {
                vibrator.isSupportEffect(INVALID_EFFECT_ID, (error, state) => {
                    if (error) {
                        console.info('VibratorJsTest069 error');
                        expect(false).assertTrue();
                    } else {
                        console.info('VibratorJsTest069 success');
                        expect(!state).assertTrue();
                        done();
                    }
                });
            })

            /*
             * @tc.name:VibratorJsTest070
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0800
             */
            it("VibratorJsTest070", 0, async function (done) {
                let isSupport = false;
                function vibratePromise() {
                    return new Promise((resolve, reject) => {
                        if (isSupport) {
                            vibrator.startVibration({
                                type: "preset", 
								effectId: EFFECT_ID,
								count: 1,
                            }, {
                                usage: "unknown"
                            }, (error) => {
                                if (error) {
                                    expect(false).assertTrue();
                                    reject(error);
                                } else {
                                    expect(true).assertTrue();
                                    resolve();
                                }
                            });
                        } else {
                            resolve();
                        }
                    })
                }

                function stopPromise() {
                    return new Promise((resolve, reject) => {
                        if (isSupport) {
                            vibrator.stopVibration((error) => {
                                if (error) {
                                    expect(false).assertTrue();
                                    reject(error);
                                } else {
                                    expect(true).assertTrue();
                                    resolve();
                                }
                            });
                        } else {
                            resolve();
                        }
                    })
                }

                let isSupportPromise = new Promise((resolve, reject) => {
                    vibrator.isSupportEffect(EFFECT_ID, (error, state) => {
                        if (error) {
                            expect(false).assertTrue();
                            reject(error);
                        } else {
                            isSupport = state;
                            resolve();
                        }
                    });
                })

                await isSupportPromise.then(() => {
                    return vibratePromise();
                }).then(() => {
                    return stopPromise();
                }).catch((error) => {
                    expect(false).assertTrue();
                })
                done();
            })

            /*
             * @tc.name:VibratorJsTest071
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0810
             */
            it("VibratorJsTest071", 0, async function (done) {
                try {
                    vibrator.isSupportEffect(123, (error, state) => {
                        console.info("VibratorJsTest071 should not in this method");
                        expect(false).assertTrue();
                        done();
                    });
                } catch (error) {
                    expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
                    expect(error.message).assertEqual(PARAMETER_ERROR_MSG);
                    done();
                }
            })

            /*
             * @tc.name:VibratorJsTest072
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0820
             */
            it("VibratorJsTest072", 0, async function (done) {
                try {
                    vibrator.isSupportEffect();
                } catch (error) {
                    console.info("VibratorJsTest072 error in ：" + error);
                    expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
                    expect(error.message).assertEqual(PARAMETER_ERROR_MSG);
                    done();
                }
            })

            /*
             * @tc.name:VibratorJsTest073
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0830
             */
            it("VibratorJsTest073", 0, async function (done) {
                await vibrator.isSupportEffect(INVALID_EFFECT_ID).then((state) => {
                    expect(!state).assertTrue();
                }, (error) => {
                    expect(false).assertTrue();
                });
                done();
            })

            /*
             * @tc.name:VibratorJsTest073
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0830
             */
            it("VibratorJsTest073", 0, async function (done) {
                let isSupport = false;
                function vibratePromise() {
                    return new Promise((resolve, reject) => {
                        if (isSupport) {
                            vibrator.startVibration({
                                type: "preset", effectId: EFFECT_ID, count: 1,
                            }, {
                                usage: "unknown"
                            }, (error) => {
                                if (error) {
                                    expect(false).assertTrue();
                                    reject(error);
                                } else {
                                    expect(true).assertTrue();
                                    resolve();
                                }
                            });
                        } else {
                            resolve();
                        }
                    })
                }

                function stopPromise() {
                    return new Promise((resolve, reject) => {
                        if (isSupport) {
                            vibrator.stopVibration((error) => {
                                if (error) {
                                    expect(false).assertTrue();
                                    reject(error);
                                } else {
                                    expect(true).assertTrue();
                                    resolve();
                                }
                            });
                        } else {
                            resolve();
                        }
                    })
                }

                let isSupportPromise = new Promise((resolve, reject) => {
                    vibrator.isSupportEffect(EFFECT_ID).then((state) => {
                        isSupport = state;
                        resolve();
                    }, (error) => {
                        expect(false).assertTrue();
                        reject(error);
                    });
                })

                await isSupportPromise.then(() => {
                    return vibratePromise();
                }).then(() => {
                    return stopPromise();
                }).catch((error) => {
                    expect(false).assertTrue();
                })
                done();
            })

            /*
             * @tc.name:VibratorJsTest074
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0840
             */
            it("VibratorJsTest074", 0, async function (done) {
                try {
                    vibrator.isSupportEffect(123).then((state) => {
                        expect(false).assertTrue();
                        done();
                    }, (error) => {
                        expect(false).assertTrue();
                        done();
                    });
                } catch (error) {
                    expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
                    expect(error.message).assertEqual(PARAMETER_ERROR_MSG);
                    done();
                }
            })

            /*
             * @tc.name:VibratorJsTest075
             * @tc.desc:Verification results of the incorrect parameters of the test interface.
             * @tc.number:SUB_SensorSystem_Vibrator_JsTest_0850
             */
            it("VibratorJsTest075", 0, async function (done) {
                try {
                    vibrator.isSupportEffect().then((state) => {
                        expect(false).assertTrue();
                    }, (error) => {
                        expect(true).assertTrue();
                        done()
                    });
                } catch (error) {
                    expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
                    expect(error.message).assertEqual(PARAMETER_ERROR_MSG);
                    done();
                }
            })
        })
    }
