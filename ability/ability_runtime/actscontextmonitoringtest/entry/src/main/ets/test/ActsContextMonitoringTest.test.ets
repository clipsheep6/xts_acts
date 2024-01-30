/**
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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
import hilog from '@ohos.hilog';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import commonEventManager from '@ohos.commonEventManager';

const Time_Short = 200;
const Time_Long = 500;
const TAG='ContextMonitoring';
const TEST_SUITE_NAME : string='ContextMonitoringTest';
function callback1(a, b) {
  let result = `func1 is called,${a},${b}`;
  if ('func1 is called,a,b' === result) {
    commonEventManager.publish(`func1 is called,${a},${b}`, () => {
    })
  }
}
export default function ActsContextMonitoringTest() {
  describe('ActsContextMonitoringTest', function () {
  /**
     * @tc.number    : SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_5100
     * @tc.name      : Test AbilityStage scenario
     * @tc.desc      : Call the on interface of eventHub through the context of AbilityStage
     *               : and register the callback callback1 for event1
     *               : Call the exit interface of eventHub through the context of AbilityStage,
     *               : trigger event1, and pass in parameters a and b when triggered
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_5100', 3, function (done) {
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_5100';
      try{
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
        //console.log("===================>1");
        let callback1 = (a, b) => {
          let result = `func1 is called,${a},${b}`
          if ('func1 is called,a,b' === result) {
            setTimeout(() => {
              done();
            }, Time_Long);
          }
        }
        let delegator = abilityDelegatorRegistry.getAbilityDelegator();
        setTimeout(() => {
          delegator.startAbility({
            bundleName: "com.example.test",
            abilityName: "CodoneTestAbility"
          }).then(() => {
            setTimeout(() => {
              delegator.getCurrentTopAbility().then((ab) => {
                ab.context.eventHub.on("event1", callback1);
                setTimeout(() => {
                  ab.context.eventHub.emit("event1", "a", "b");
                  setTimeout(() => {
                    ab.context.terminateSelf();
                  }, Time_Short);
                }, Time_Short);
              })
            }, Time_Short);
          })
        }, Time_Short);
      }catch(error){
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        done();
      }
    });
    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_5200
     * @tc.name      : Test callback inputs with different numbers of emits
     * @tc.desc      : Call the on interface of eventHub through the context of Ability,
     *               : register the callback callback1 for event1, which has two input parameters
     *               : Call the exit interface of eventHub through the context of Ability,
     *               : trigger event1, and do not pass in parameters when triggered
     *               : Call the emit interface of eventHub through the context of Ability,
     *               : trigger event1, and pass in a parameter a when triggered
     *               : Call the exit interface of eventHub through the context of Ability,
     *               : trigger event1, and pass in two parameters a and b when triggered
     *               : Call the exit interface of eventHub through the context of Ability,
     *               : trigger event1, and pass in three parameters a, b, and c when triggered
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_5200', 3, function (done) {
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_5200';
      try {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
       // console.log("===================>2");
        let count = 0;
        let callback1 = function (a, b) {
          let result = `func1 is called,${a},${b}`;
          if ('func1 is called,undefined,undefined' === result) {
            count++;
          }
          if ('func1 is called,a' === result) {
            count++;
          }
          if ('func1 is called,a,b' === result) {
            count++;
          }
          if ('func1 is called,a,b' === result) {
            if (count === 3) {
              setTimeout(() => {
                done();
              }, Time_Long);
            }
          }
        }
        let delegator = abilityDelegatorRegistry.getAbilityDelegator();
        setTimeout(() => {
          delegator.startAbility({
            bundleName: "com.example.test",
            abilityName: "CodoneTestAbility"
          }).then(() => {
            setTimeout(() => {
              delegator.getCurrentTopAbility().then((ab) => {
                ab.context.eventHub.on("event1", callback1);
                setTimeout(() => {
                  ab.context.eventHub.emit("event1");
                  setTimeout(() => {
                    ab.context.eventHub.emit("event1", "a");
                    setTimeout(() => {
                      ab.context.eventHub.emit("event1", "a", "b");
                      setTimeout(() => {
                        ab.context.eventHub.emit("event1", "a", "b", "c");
                        setTimeout(() => {
                          ab.context.terminateSelf();
                        }, Time_Short);
                      }, Time_Short);
                    }, Time_Short);
                  }, Time_Short);
                }, Time_Short);
              })
            }, Time_Short);
          })
        }, Time_Short);
      }catch(error){
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        done();
      }
    });
    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_5300
     * @tc.name      : Test off unregistering a single callback
     * @tc.desc      : Call the on interface of eventHub through the context of Ability
     *               : and register the callback callback1 for event1
     *               : Call the on interface of eventHub through the context of Ability
     *               : and register the callback callback2 for event1
     *               : Call the off interface of eventHub through the context of Ability
     *               : to unregister event1's callback1
     *               : Call the exit interface of eventHub through the context of Ability,
     *               : trigger event1, and pass in parameters a and b when triggered
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_5300', 3, function (done) {
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_5300';
      try {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
       // console.log("===================>3");
        let callback1 = (a, b) => {
          let result = `func1 is called,${a},${b}`;
          if ('func1 is called,a,b' === result) {
            expect().assertFail();
          }
        }
        let callback2 = (a, b) => {
          let result = `func2 is called,${a},${b}`;
          if ('func2 is called,a,b' === result) {
            setTimeout(() => {
              done();
            }, Time_Long);
          }
        }
        let delegator = abilityDelegatorRegistry.getAbilityDelegator();
        setTimeout(() => {
          delegator.startAbility({
            bundleName: "com.example.test",
            abilityName: "CodoneTestAbility"
          }).then(() => {
            setTimeout(() => {
              delegator.getCurrentTopAbility().then((ab) => {
                ab.context.eventHub.on("event1", callback1);
                ab.context.eventHub.on("event1", callback2);
                setTimeout(() => {
                  ab.context.eventHub.off("event1", callback1);
                  setTimeout(() => {
                    ab.context.eventHub.emit("event1", "a", "b");
                    setTimeout(() => {
                      ab.context.terminateSelf();
                    }, Time_Short);
                  }, Time_Short);
                }, Time_Short);
              })
            }, Time_Short);
          })
        }, Time_Short);
      }catch(error){
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        done();
      }
    });
    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_5400
     * @tc.name      : Test off unregistering all callbacks for a certain event
     * @tc.desc      : Call the on interface of eventHub through the context of Ability
     *               : and register the callback callback1 for event1
     *               : Call the on interface of eventHub through the context of Ability
     *               : and register the callback callback2 for event1
     *               : Call the off interface of eventHub through the context of Ability,
     *               : unregister event1, and do not pass in the second parameter when triggered
     *               : Call the exit interface of eventHub through the context of Ability,
     *               : trigger event1, and pass in parameters a and b when triggered
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_5400', 3, function (done) {
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_5400';
      try {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
        //console.log("===================>4");
        let callback1 = (a, b) => {
          let result = `func1 is called,${a},${b}`;
          if ('func1 is called,a,b' === result) {
            expect().assertFail();
          }
        }
        let callback2 = (a, b) => {
          let result = `func2 is called,${a},${b}`;
          if ('func2 is called,a,b' === result) {
            expect().assertFail();
          }
        }
        let delegator = abilityDelegatorRegistry.getAbilityDelegator();
        setTimeout(() => {
          delegator.startAbility({
            bundleName: "com.example.test",
            abilityName: "CodoneTestAbility"
          }).then(() => {
            setTimeout(() => {
              delegator.getCurrentTopAbility().then((ab) => {
                ab.context.eventHub.on("event1", callback1);
                ab.context.eventHub.on("event1", callback2);
                setTimeout(() => {
                  ab.context.eventHub.off("event1", callback1);
                  ab.context.eventHub.off("event1", callback2);
                  setTimeout(() => {
                    ab.context.eventHub.emit("event1", "a", "b");
                    setTimeout(() => {
                      ab.context.terminateSelf();
                      setTimeout(() => {
                        done();
                      }, Time_Long);
                    }, Time_Short);
                  }, Time_Short);
                }, Time_Short);
              })
            }, Time_Short);
          })
        }, Time_Short);
      }catch(error){
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        done();
      }
    });
    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_5500
     * @tc.name      : Test on registering anonymous functions
     * @tc.desc      : Call the on interface of eventHub through the context of Ability,
     *               : register the anonymous function callback callback1 for event1
     *               : Call the exit interface of eventHub through the context of Ability,
     *               : trigger event1, and pass in parameters a and b when triggered
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_5500', 3, function (done) {
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_5500';
      try {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
        //console.log("===================>5");
        let callback1 = function (a, b) {
          let result = `func1 is called,${a},${b}`;
          if ('func1 is called,a,b' === result) {
            setTimeout(() => {
              done();
            }, Time_Long);
          }
        }
        let delegator = abilityDelegatorRegistry.getAbilityDelegator();
        setTimeout(() => {
          delegator.startAbility({
            bundleName: "com.example.test",
            abilityName: "CodoneTestAbility"
          }).then(() => {
            setTimeout(() => {
              delegator.getCurrentTopAbility().then((ab) => {
                ab.context.eventHub.on("event1", callback1);
                setTimeout(() => {
                  ab.context.eventHub.emit("event1", "a", "b");
                  setTimeout(() => {
                    ab.context.terminateSelf();
                  }, Time_Short);
                }, Time_Short);
              })
            }, Time_Short);
          })
        }, Time_Short);
      }catch(error){
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        done();
      }
    });
    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_5600
     * @tc.name      : Test the on registration member function
     * @tc.desc      : Call the on interface of eventHub through the context of Ability,
     *               : register the member function callback callback1 of event1
     *               : Call the exit interface of eventHub through the context of Ability,
     *               : trigger event1, and pass in parameters a and b when triggered
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_5600', 3, function (done) {
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_5600';
      try {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
       // console.log("===================>6");
        //定义变量，用于保存订阅者对象
        let subscriber;
        const subscriberInfo = {
          events: ["func1 is called,a,b"]
        };
        //订阅公共事件回调
        function SubscribeCallBack(err, data) {
          if (err) {
            expect().assertFail();
            done();
          } else {
            if (data.event === 'func1 is called,a,b') {
              setTimeout(() => {
                done();
              }, Time_Long);
            }
          }
        }
        //创建订阅者回调
        function CreateSubscribeCallBack(err, commonEventSubscriber) {
          if (err) {
            console.log("==============================>err:" + JSON.stringify(err))
          } else {
            subscriber = commonEventSubscriber;
            commonEventManager.subscribe(subscriber, SubscribeCallBack);
            let delegator = abilityDelegatorRegistry.getAbilityDelegator();
            setTimeout(() => {
              delegator.startAbility({
                bundleName: "com.example.test",
                abilityName: "CodoneTestAbility"
              }).then(() => {
                setTimeout(() => {
                  delegator.getCurrentTopAbility().then((ab) => {
                    ab.context.eventHub.on("event1", callback1);
                    setTimeout(() => {
                      ab.context.eventHub.emit("event1", "a", "b");
                      setTimeout(() => {
                        ab.context.terminateSelf();
                      }, Time_Short);
                    }, Time_Short);
                  })
                }, Time_Short);
              })
            }, Time_Short);
          }
        }
        //创建订阅者
        commonEventManager.createSubscriber(subscriberInfo, CreateSubscribeCallBack);
      }catch(error){
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        done();
      }
    });
    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_5800
     * @tc.name      : Test the on, off, and exit of a single event
     * @tc.desc      : Call the on interface of eventHub through the context of Ability
     *               : and register the callback callback1 for event1
     *               : Call the exit interface of eventHub through the context of Ability,
     *               : trigger event1, and pass in parameters a and b when triggered
     *               : Call the off interface of eventHub through the context of Ability
     *               : to unregister event1's callback1
     *               : Call the exit interface of eventHub through the context of Ability,
     *               : trigger event1, and pass in parameters a and b when triggered
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_5800', 3, function (done) {
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_5800';
      try {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
        //console.log("===================>7");
        let count = 0;
        let callback1 = (a, b) => {
          let result = `func1 is called,${a},${b}`;
          if ('func1 is called,a,b' === result) {
            count++;
          }
        }
        let delegator = abilityDelegatorRegistry.getAbilityDelegator();
        setTimeout(() => {
          delegator.startAbility({
            bundleName: "com.example.test",
            abilityName: "CodoneTestAbility"
          }).then(() => {
            setTimeout(() => {
              delegator.getCurrentTopAbility().then((ab) => {
                ab.context.eventHub.on("event1", callback1);
                setTimeout(() => {
                  setTimeout(() => {
                    ab.context.eventHub.emit("event1", "a", "b");
                    setTimeout(() => {
                      ab.context.eventHub.off("event1", callback1);
                      setTimeout(() => {
                        ab.context.eventHub.emit("event1", "a", "b");
                        setTimeout(() => {
                          ab.context.terminateSelf();
                          setTimeout(() => {
                            expect(count).assertEqual(1);
                            done();
                          }, Time_Long);
                        }, Time_Short);
                      }, Time_Short);
                    }, Time_Short);
                  }, Time_Short);
                }, Time_Short);
              })
            }, Time_Short);
          })
        }, Time_Short);
      }catch(error){
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        done();
      }
    });
    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_5900
     * @tc.name      : Test multiple context instance scenarios
     * @tc.desc      : Context1 calls the on interface of eventHub through the context of Ability,
     *               : registers the callback callback1 for event1
     *               : Context2 calls the on interface of eventHub through the context of Ability,
     *               : registers the callback callback2 for event1
     *               : Context2 calls the exit interface of eventHub through the context of Ability,
     *               : triggers event1, and passes in parameters a and b when triggered
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_5900', 3, function (done) {
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_5900';
      try {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
       // console.log("===================>8");
        let callback1 = (a, b) => {
          let result = `func1 is called,${a},${b}`;
          if ('func1 is called,a,b' === result) {
            expect().assertFail();
          }
        }
        let callback2 = (a, b) => {
          let result = `func2 is called,${a},${b}`;
          if ('func2 is called,a,b' === result) {
            setTimeout(() => {
              done();
            }, Time_Long);
          }
        }
        let delegator = abilityDelegatorRegistry.getAbilityDelegator();
        setTimeout(() => {
          delegator.startAbility({
            bundleName: "com.example.test",
            abilityName: "CodoneAbility2"
          }).then(() => {
            setTimeout(() => {
              delegator.getCurrentTopAbility().then((ab) => {
                ab.context.eventHub.on("event1", callback1);
                setTimeout(() => {
                  delegator.startAbility({
                    bundleName: "com.example.test",
                    abilityName: "CodoneTestAbility"
                  }).then(() => {
                    setTimeout(() => {
                      delegator.getCurrentTopAbility().then((ab2) => {
                        ab2.context.eventHub.on("event1", callback2);
                        setTimeout(() => {
                          ab2.context.eventHub.emit("event1", "a", "b");
                          setTimeout(() => {
                            ab2.context.terminateSelf();
                            setTimeout(() => {
                              ab.context.terminateSelf();
                            }, Time_Short);
                          }, Time_Short);
                        }, Time_Short);
                      })
                    }, Time_Short);
                  })
                }, Time_Short);
              })
            }, Time_Short);
          })
        }, Time_Short);
      }catch(error){
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        done();
      }
    });
    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_6000
     * @tc.name      : Test on, off, and emit for multiple events
     * @tc.desc      : Call the on interface of eventHub through the context of Ability
     *               : and register the callback callback1 for event1
     *               : Call the on interface of eventHub through the context of Ability
     *               : and register the callback callback2 for event2
     *               : Call the exit interface of eventHub through the context of Ability, trigger event1,
     *               : and pass in parameters a and b when triggered;
     *               : Call the exit interface of eventHub through the context of Ability,
     *               : trigger event2, and pass in parameters a and b when triggered
     *               : Call the off interface of eventHub through the context of Ability
     *               : to unregister event1's callback1
     *               : Call the exit interface of eventHub through the context of Ability, trigger event1,
     *               : and pass in parameters a and b when triggered;
     *               : Call the exit interface of eventHub through the context of Ability, trigger event2,
     *               : and pass in parameters a and b when triggered
     *               : Call the off interface of eventHub through the context of Ability
     *               : to unregister event2's callback2
     *               : Call the exit interface of eventHub through the context of Ability, trigger event1,
     *               : and pass in parameters a and b when triggered;
     *               : Call the exit interface of eventHub through the context of Ability, trigger event2,
     *               : and pass in parameters a and b when triggered
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_6000', 3, function (done) {
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_6000';
      try {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
        //console.log("===================>9");
        let countFunc1 = 0;
        let countFunc2 = 0;
        let callback1 = (a, b) => {
          let result = `func1 is called,${a},${b}`;
          if ('func1 is called,a,b' === result) {
            countFunc1++;
          }
        }
        let callback2 = (a, b) => {
          let result = `func2 is called,${a},${b}`;
          if ('func2 is called,a,b' === result) {
            countFunc2++;
          }
        }
        let delegator = abilityDelegatorRegistry.getAbilityDelegator();
        delegator.startAbility({
          bundleName: "com.example.test",
          abilityName: "CodoneAbility2"
        }).then(() => {
          setTimeout(() => {
            delegator.getCurrentTopAbility().then((ab) => {
              ab.context.eventHub.on("event1", callback1);
              setTimeout(() => {
                delegator.startAbility({
                  bundleName: "com.example.test",
                  abilityName: "CodoneTestAbility"
                }).then(() => {
                  setTimeout(() => {
                    delegator.getCurrentTopAbility().then((ab2) => {
                      ab2.context.eventHub.on("event1", callback1);
                      ab2.context.eventHub.on("event2", callback2);
                      setTimeout(() => {
                        ab2.context.eventHub.emit("event1", "a", "b");
                        ab2.context.eventHub.emit("event2", "a", "b");
                        setTimeout(() => {
                          expect(1).assertEqual(countFunc1);
                          expect(1).assertEqual(countFunc2);
                          ab2.context.eventHub.off("event1", callback1);
                          setTimeout(() => {
                            ab2.context.eventHub.emit("event1", "a", "b");
                            ab2.context.eventHub.emit("event2", "a", "b");
                            setTimeout(() => {
                              expect(1).assertEqual(countFunc1);
                              expect(2).assertEqual(countFunc2);
                              ab2.context.eventHub.off("event2", callback2);
                              setTimeout(() => {
                                ab2.context.eventHub.emit("event1", "a", "b");
                                ab2.context.eventHub.emit("event2", "a", "b");
                                setTimeout(() => {
                                  expect(1).assertEqual(countFunc1);
                                  expect(2).assertEqual(countFunc2);
                                  setTimeout(() => {
                                    ab2.context.terminateSelf();
                                    setTimeout(() => {
                                      ab.context.terminateSelf();
                                      setTimeout(() => {
                                        done();
                                      }, Time_Long);
                                    }, Time_Short);
                                  }, Time_Short);
                                }, Time_Short);
                              }, Time_Short);
                            }, Time_Short);
                          }, Time_Short);
                        }, Time_Short);
                      }, Time_Short);
                    })
                  }, Time_Short);
                })
              }, Time_Short);
            })
          }, Time_Short);
        })
      }catch(error){
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        done();
      }
    });
    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_6100
     * @tc.name      : Testing abnormal scenarios, incorrect parameter types
     * @tc.desc      : Call the on interface of eventHub through the context of Ability,
     *               : where event is not a string or callback is not a function.
     *               : Register the callback callback for event1, callback1
     *               : Call the exit interface of eventHub through the context of Ability,
     *               : trigger event1, and pass in parameters a and b when triggered
     *               : Call the off interface of eventHub through the context of Ability,
     *               : where event is not a string. Unregister event1's callback1
     *               : Call the exit interface of eventHub through the context of Ability,
     *               : trigger event1, and pass in parameters a and b when triggered
     *               : Call the on interface of eventHub through the context of Ability
     *               : and register the callback callback1 for event1
     *               : Call the exit interface of eventHub through the context of Ability,
     *               : if the event is not a string, trigger event1
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_6100', 3, function (done) {
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_6100';
      try {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
       // console.log("===================>10");
        let callback1 = function (a, b) {
          let result = `func1 is called,${a},${b}`;
          if ('func1 is called,a,b' === result) {
            expect().assertFail();
          }
        }
        let delegator = abilityDelegatorRegistry.getAbilityDelegator();
        setTimeout(() => {
          delegator.startAbility({
            bundleName: "com.example.test",
            abilityName: "CodoneTestAbility"
          }).then(() => {
            setTimeout(() => {
              delegator.getCurrentTopAbility().then((ab) => {
                console.log("===================>" + JSON.stringify(ab));
                // @ts-ignore
                ab.context.eventHub.on(123, callback1);
                setTimeout(() => {
                  ab.context.eventHub.emit("event1", "a", "b");
                  setTimeout(() => {
                    // @ts-ignore
                    ab.context.eventHub.off(123, callback1);
                    setTimeout(() => {
                      ab.context.eventHub.emit("event1", "a", "b");
                      setTimeout(() => {
                        ab.context.eventHub.on("event1", callback1);
                        setTimeout(() => {
                          // @ts-ignore
                          ab.context.eventHub.emit(123, "a", "b");
                          setTimeout(() => {
                            ab.context.terminateSelf();
                            setTimeout(() => {
                              done();
                            }, Time_Long);
                          }, Time_Short);
                        }, Time_Short);
                      }, Time_Short);
                    }, Time_Short);
                  }, Time_Short);
                }, Time_Short);
              })
            }, Time_Short);
          })
        }, Time_Short);
      }catch(error){
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        done();
      }
    });
    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_6200
     * @tc.name      : Test exception scenario, where the same callback is registered multiple times
     * @tc.desc      : Call the on interface of eventHub through the context of Ability
     *               : and register the callback callback1 for event1
     *               : Call the on interface of eventHub through the context of Ability
     *               : and register the callback callback1 for event1
     *               : Call the exit interface of eventHub through the context of Ability,
     *               : trigger event1, and pass in parameters a and b when triggered
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_6200', 3, function (done) {
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_6200';
      try {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
       // console.log("===================>11");
        let count = 0;
        let callback1 = function (a, b) {
          let result = `func1 is called,${a},${b}`;
          if ('func1 is called,a,b' === result) {
            count++;
            if (count === 2) {
              expect().assertFail();
            }
          }
        }
        let delegator = abilityDelegatorRegistry.getAbilityDelegator();
        setTimeout(() => {
          delegator.startAbility({
            bundleName: "com.example.test",
            abilityName: "CodoneTestAbility"
          }).then(() => {
            setTimeout(() => {
              delegator.getCurrentTopAbility().then((ab) => {
                ab.context.eventHub.on("event1", callback1);
                ab.context.eventHub.on("event1", callback1);
                setTimeout(() => {
                  ab.context.eventHub.emit("event1", "a", "b");
                  setTimeout(() => {
                    ab.context.terminateSelf();
                    setTimeout(() => {
                      done();
                    }, Time_Long);
                  }, Time_Short);
                }, Time_Short);
              })
            }, Time_Short);
          })
        }, Time_Short);
      }catch(error){
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        done();
      }
    });
    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_6300
     * @tc.name      : Test abnormal scenario, no parameters
     * @tc.desc      : Call the on interface of eventHub through the context of Ability,
     *               : without passing any parameters, and register the callback callback1 for event1
     *               : Call the exit interface of eventHub through the context of Ability,
     *               : trigger event1, and pass in parameters a and b when triggered
     *               : Call the off interface of eventHub through the context of Ability,
     *               : without passing any parameters, and unregister event1's callback1
     *               : Call the exit interface of eventHub through the context of Ability,
     *               : trigger event1, and pass in parameters a and b when triggered
     *               : Call the on interface of eventHub through the context of Ability
     *               : and register the callback callback1 for event1
     *               : Call the exit interface of eventHub through the context of Ability,
     *               : without passing any parameters, to trigger event1
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_6300', 3, function (done) {
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_AMS_Context_ContextMonitoring_6300';
      try {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
        // console.log("===================>12");
        let callback1 = function (a, b) {
          let result = `func1 is called,${a},${b}`;
          if ('func1 is called,a,b' === result) {
            expect().assertFail();
          }
        }
        let delegator = abilityDelegatorRegistry.getAbilityDelegator();
        setTimeout(() => {
          delegator.startAbility({
            bundleName: "com.example.test",
            abilityName: "CodoneTestAbility"
          }).then(() => {
            setTimeout(() => {
              delegator.getCurrentTopAbility().then((ab) => {
                // @ts-ignore
                ab.context.eventHub.on(callback1);
                setTimeout(() => {
                  ab.context.eventHub.emit("event1", "a", "b");
                  setTimeout(() => {
                    // @ts-ignore
                    ab.context.eventHub.off(callback1);
                    setTimeout(() => {
                      ab.context.eventHub.emit("event1", "a", "b");
                      setTimeout(() => {
                        ab.context.eventHub.on("event1", callback1);
                        setTimeout(() => {
                          ab.context.eventHub.emit("a", "b");
                          setTimeout(() => {
                            ab.context.terminateSelf();
                            setTimeout(() => {
                              done();
                            }, Time_Long);
                          }, Time_Short);
                        }, Time_Short);
                      }, Time_Short);
                    }, Time_Short);
                  }, Time_Short);
                }, Time_Short);
              })
            }, Time_Short);
          })
        }, Time_Short);
      }catch (error){
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        done();
      }
    });
  })
}