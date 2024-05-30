import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import { Driver, ON } from '@ohos.UiTest';
import commonEventManager from '@ohos.commonEventManager';

let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();

let subscriberInfo: commonEventManager.CommonEventSubscribeInfo = {
  events: ['GET_SUCCESS', 'GET_ERROR'],
};


function sleep(time: number): Promise<number> {
  return new Promise((resolve) => setTimeout(resolve, time));
}

export default function abilityTest() {

  describe('ActsAbilityTest', () => {

    beforeAll(async function (done) {
      await abilityDelegator.executeShellCommand('aa start -b com.example.uiextensionprovider -a EntryAbility')
        .then(result => {
        })
        .catch((err: BusinessError) => {
        })
      await sleep(500);
      let driver = await Driver.create();
      await driver.delayMs(500);
      let buttonFirst = await driver.findComponent(ON.text('允许'));
      await buttonFirst.click();
      await driver.delayMs(500);

      let buttonSecond = await driver.findComponent(ON.text('允许'));
      await buttonSecond.click();
      await driver.delayMs(500);
      done();
    }
    )

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_UIExtensionWithUri_0100
     * @tc.name      : Audio
     * @tc.desc      : ContextAudio
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it("SUB_Ability_AbilityRuntime_UIExtensionWithUri_0100", 3, async function (done) {
      console.info('SUB_Ability_AbilityRuntime_UIExtensionWithUri_0100');

      await abilityDelegator.executeShellCommand('aa start -b com.test.myapplication -a EntryAbility').then(result => {
      }).catch((err: BusinessError) => {
      })
      await sleep(500);
      let driver = await Driver.create();
      await driver.delayMs(500);
      let btnCreate = await driver.findComponent(ON.text('创建文件'));
      await btnCreate.click();
      await driver.delayMs(500);

      let btnSend = await driver.findComponent(ON.text('发送路径数据'));
      await btnSend.click();
      await driver.delayMs(500);

      let btnContextDocs = await driver.findComponent(ON.id('ContextAudio'));
      await btnContextDocs.click();
      await driver.delayMs(500);

      let index: number = -1;
      let Subscriber: commonEventManager.CommonEventSubscriber;
      let SubscribeCallBack = async (err: BusinessError, data: commonEventManager.CommonEventData) => {
        let result: string = data.parameters?.result;
        console.log('SUB_Ability_AbilityRuntime_UIExtensionWithUri_0100 result: ' + result);
        try {
          if (data.event == 'GET_SUCCESS') {
            if (index == 0) {
              expect(result).assertEqual('SUCCESS');
            } else if (index == 1) {
              expect(result).assertEqual('SUCCESS');
            }
          } else if (data.event == 'GET_ERROR') {
            if (index == 2) {
              expect(result).assertEqual('13900001');
            } else if (index == 3) {
              expect(result).assertEqual('13900002');
              commonEventManager.unsubscribe(Subscriber);
              abilityDelegator.getCurrentTopAbility(
                (err: BusinessError, ability2: UIAbility) => {
                  ability2.context.terminateSelf(() => {
                    done();
                  });
                }
              );
            }
          }
        } catch (error) {
        }
      }
      try {
        //创建订阅者
        try {
          commonEventManager.createSubscriber(subscriberInfo).then((commonEventSubscriber) => {
            try {
              Subscriber = commonEventSubscriber;
              commonEventManager.subscribe(commonEventSubscriber, SubscribeCallBack);
            } catch (err) {
            }
          }).catch((err: BusinessError) => {
          });
        } catch (err) {
        }
      }
      catch (error) {
      }

      index = 0;
      let btnDoc = await driver.findComponent(ON.text('访问Docs文件—读写'));
      await btnDoc.click();
      await driver.delayMs(500);

      index = 1;
      let btnAudio = await driver.findComponent(ON.text('访问Audio文件-读写'));
      await btnAudio.click();
      await driver.delayMs(500);

      index = 2;
      let btnPhotos = await driver.findComponent(ON.text('访问Photos文件-读写'));
      await btnPhotos.click();
      await driver.delayMs(500);

      index = 3;
      let btnBundle = await driver.findComponent(ON.text('访问Bundle文件-读写'));
      await btnBundle.click();
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_UIExtensionWithUri_0200
     * @tc.name      : Photo
     * @tc.desc      : ContextPhoto
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it("SUB_Ability_AbilityRuntime_UIExtensionWithUri_0200", 3, async function (done) {
      console.info('SUB_Ability_AbilityRuntime_UIExtensionWithUri_0200');

      await abilityDelegator.executeShellCommand('aa start -b com.test.myapplication -a EntryAbility').then(result => {
      }).catch((err: BusinessError) => {
      })
      await sleep(500);
      let driver = await Driver.create();
      await driver.delayMs(500);
      let btnCreate = await driver.findComponent(ON.text('创建文件'));
      await btnCreate.click();
      await driver.delayMs(500);

      let btnSend = await driver.findComponent(ON.text('发送路径数据'));
      await btnSend.click();
      await driver.delayMs(500);

      let btnContextDocs = await driver.findComponent(ON.id('ContextPhoto'));
      await btnContextDocs.click();
      await driver.delayMs(500);

      let index: number = -1;
      let Subscriber: commonEventManager.CommonEventSubscriber;
      let SubscribeCallBack = async (err: BusinessError, data: commonEventManager.CommonEventData) => {
        let result: string = data.parameters?.result;
        console.log('SUB_Ability_AbilityRuntime_UIExtensionWithUri_0200 result: ' + result);
        try {
          if (data.event == 'GET_SUCCESS') {
            if (index == 0) {
              expect(result).assertEqual('SUCCESS');
            } else if (index == 2) {
              expect(result).assertEqual('SUCCESS');
            }
          } else if (data.event == 'GET_ERROR') {
            if (index == 1) {
              expect(result).assertEqual('13900001');
            } else if (index == 3) {
              expect(result).assertEqual('13900002');
              commonEventManager.unsubscribe(Subscriber);
              abilityDelegator.getCurrentTopAbility(
                (err: BusinessError, ability2: UIAbility) => {
                  ability2.context.terminateSelf(() => {
                    done();
                  });
                }
              );
            }
          }
        } catch (error) {
        }
      }
      try {
        //创建订阅者
        try {
          commonEventManager.createSubscriber(subscriberInfo).then((commonEventSubscriber) => {
            try {
              Subscriber = commonEventSubscriber;
              commonEventManager.subscribe(commonEventSubscriber, SubscribeCallBack);
            } catch (err) {
            }
          }).catch((err: BusinessError) => {
          });
        } catch (err) {
        }
      }
      catch (error) {
      }

      index = 0;
      let btnDoc = await driver.findComponent(ON.text('访问Docs文件—读写'));
      await btnDoc.click();
      await driver.delayMs(500);

      index = 1;
      let btnAudio = await driver.findComponent(ON.text('访问Audio文件-读写'));
      await btnAudio.click();
      await driver.delayMs(500);

      index = 2;
      let btnPhotos = await driver.findComponent(ON.text('访问Photos文件-读写'));
      await btnPhotos.click();
      await driver.delayMs(500);

      index = 3;
      let btnBundle = await driver.findComponent(ON.text('访问Bundle文件-读写'));
      await btnBundle.click();
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_UIExtensionWithUri_1800
     * @tc.name      : Bundle
     * @tc.desc      : ContextBundle
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it("SUB_Ability_AbilityRuntime_UIExtensionWithUri_1800", 3, async function (done) {
      console.info('SUB_Ability_AbilityRuntime_UIExtensionWithUri_1800');

      await abilityDelegator.executeShellCommand('aa start -b com.test.myapplication -a EntryAbility').then(result => {
      }).catch((err: BusinessError) => {
      })
      await sleep(500);
      let driver = await Driver.create();
      await driver.delayMs(500);
      let btnCreate = await driver.findComponent(ON.text('创建文件'));
      await btnCreate.click();
      await driver.delayMs(500);

      let btnSend = await driver.findComponent(ON.text('发送路径数据'));
      await btnSend.click();
      await driver.delayMs(500);

      let btnContextDocs = await driver.findComponent(ON.id('ContextBundle'));
      await btnContextDocs.click();
      await driver.delayMs(500);

      let index: number = -1;
      let Subscriber: commonEventManager.CommonEventSubscriber;
      let SubscribeCallBack = async (err: BusinessError, data: commonEventManager.CommonEventData) => {
        let result: string = data.parameters?.result;
        console.log('SUB_Ability_AbilityRuntime_UIExtensionWithUri_1800 result: ' + result);
        try {
          if (data.event == 'GET_SUCCESS') {
            if (index == 0) {
              expect(result).assertEqual('SUCCESS');
            } else if (index == 3) {
              expect(result).assertEqual('SUCCESS');
              commonEventManager.unsubscribe(Subscriber);
              abilityDelegator.getCurrentTopAbility(
                (err: BusinessError, ability2: UIAbility) => {
                  ability2.context.terminateSelf(() => {
                    done();
                  });
                }
              );
            }
          } else if (data.event == 'GET_ERROR') {
            if (index == 1) {
              expect(result).assertEqual('13900001');
            } else if (index == 2) {
              expect(result).assertEqual('13900001');
            }
          }
        } catch (error) {
        }
      }
      try {
        //创建订阅者
        try {
          commonEventManager.createSubscriber(subscriberInfo).then((commonEventSubscriber) => {
            try {
              Subscriber = commonEventSubscriber;
              commonEventManager.subscribe(commonEventSubscriber, SubscribeCallBack);
            } catch (err) {
            }
          }).catch((err: BusinessError) => {
          });
        } catch (err) {
        }
      }
      catch (error) {
      }

      index = 0;
      let btnDoc = await driver.findComponent(ON.text('访问Docs文件—读写'));
      await btnDoc.click();
      await driver.delayMs(500);

      index = 1;
      let btnAudio = await driver.findComponent(ON.text('访问Audio文件-读写'));
      await btnAudio.click();
      await driver.delayMs(500);

      index = 2;
      let btnPhotos = await driver.findComponent(ON.text('访问Photos文件-读写'));
      await btnPhotos.click();
      await driver.delayMs(500);

      index = 3;
      let btnBundle = await driver.findComponent(ON.text('访问Bundle文件-读写'));
      await btnBundle.click();
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_UIExtensionWithUri_1900
     * @tc.name      : Docs
     * @tc.desc      : ContextDocs
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it("SUB_Ability_AbilityRuntime_UIExtensionWithUri_1900", 3, async function (done) {
      console.info('SUB_Ability_AbilityRuntime_UIExtensionWithUri_1900');

      await abilityDelegator.executeShellCommand('aa start -b com.test.myapplication -a EntryAbility').then(result => {
      }).catch((err: BusinessError) => {
      })
      await sleep(500);
      let driver = await Driver.create();
      await driver.delayMs(500);
      let btnCreate = await driver.findComponent(ON.text('创建文件'));
      await btnCreate.click();
      await driver.delayMs(500);

      let btnSend = await driver.findComponent(ON.text('发送路径数据'));
      await btnSend.click();
      await driver.delayMs(500);

      let btnContextDocs = await driver.findComponent(ON.id('ContextDocs'));
      await btnContextDocs.click();
      await driver.delayMs(500);

      let index: number = -1;
      let Subscriber: commonEventManager.CommonEventSubscriber;
      let SubscribeCallBack = async (err: BusinessError, data: commonEventManager.CommonEventData) => {
        let result: string = data.parameters?.result;
        console.log('SUB_Ability_AbilityRuntime_UIExtensionWithUri_1900 result: ' + result);
        try {
          if (data.event == 'GET_SUCCESS') {
            if (index == 0) {
              expect(result).assertEqual('SUCCESS');
            }
          } else if (data.event == 'GET_ERROR') {
            if (index == 1) {
              expect(result).assertEqual('13900001');
            } else if (index == 2) {
              expect(result).assertEqual('13900001');
            } else if (index == 3) {
              expect(result).assertEqual('13900002');
              commonEventManager.unsubscribe(Subscriber);
              abilityDelegator.getCurrentTopAbility(
                (err: BusinessError, ability2: UIAbility) => {
                  ability2.context.terminateSelf(() => {
                    done();
                  });
                }
              );
            }
          }
        } catch (error) {
        }
      }
      try {
        //创建订阅者
        try {
          commonEventManager.createSubscriber(subscriberInfo).then((commonEventSubscriber) => {
            try {
              Subscriber = commonEventSubscriber;
              commonEventManager.subscribe(commonEventSubscriber, SubscribeCallBack);
            } catch (err) {
            }
          }).catch((err: BusinessError) => {
          });
        } catch (err) {
        }
      }
      catch (error) {
      }

      index = 0;
      let btnDoc = await driver.findComponent(ON.text('访问Docs文件—读写'));
      await btnDoc.click();
      await driver.delayMs(500);

      index = 1;
      let btnAudio = await driver.findComponent(ON.text('访问Audio文件-读写'));
      await btnAudio.click();
      await driver.delayMs(500);

      index = 2;
      let btnPhotos = await driver.findComponent(ON.text('访问Photos文件-读写'));
      await btnPhotos.click();
      await driver.delayMs(500);

      index = 3;
      let btnBundle = await driver.findComponent(ON.text('访问Bundle文件-读写'));
      await btnBundle.click();
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_UIExtensionWithUri_2000
     * @tc.name      : BundleOnly
     * @tc.desc      : ContextBundleOnly
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it("SUB_Ability_AbilityRuntime_UIExtensionWithUri_2000", 3, async function (done) {
      console.info('SUB_Ability_AbilityRuntime_UIExtensionWithUri_2000');

      await abilityDelegator.executeShellCommand('aa start -b com.test.myapplication -a EntryAbility').then(result => {
      }).catch((err: BusinessError) => {
      })
      await sleep(500);
      let driver = await Driver.create();
      await driver.delayMs(500);
      let btnCreate = await driver.findComponent(ON.text('创建文件'));
      await btnCreate.click();
      await driver.delayMs(500);

      let btnSend = await driver.findComponent(ON.text('发送路径数据'));
      await btnSend.click();
      await driver.delayMs(500);

      let btnContextDocs = await driver.findComponent(ON.id('ContextBundleOnly'));
      await btnContextDocs.click();
      await driver.delayMs(500);

      let index: number = -1;
      let Subscriber: commonEventManager.CommonEventSubscriber;
      let SubscribeCallBack = async (err: BusinessError, data: commonEventManager.CommonEventData) => {
        let result: string = data.parameters?.result;
        console.log('SUB_Ability_AbilityRuntime_UIExtensionWithUri_2000 result: ' + result);
        try {
          if (data.event == 'GET_SUCCESS') {
            if (index == 0) {
              expect(result).assertEqual('SUCCESS');
            } else if (index == 4) {
              expect(result).assertEqual('SUCCESS');
              commonEventManager.unsubscribe(Subscriber);
              abilityDelegator.getCurrentTopAbility(
                (err: BusinessError, ability2: UIAbility) => {
                  ability2.context.terminateSelf(() => {
                    done();
                  });
                }
              );
            }
          } else if (data.event == 'GET_ERROR') {
            if (index == 1) {
              expect(result).assertEqual('13900001');
            } else if (index == 2) {
              expect(result).assertEqual('13900001');
            } else if (index == 3) {
              expect(result).assertEqual('13900012');
            }
          }
        } catch (error) {
        }
      }
      try {
        //创建订阅者
        try {
          commonEventManager.createSubscriber(subscriberInfo).then((commonEventSubscriber) => {
            try {
              Subscriber = commonEventSubscriber;
              commonEventManager.subscribe(commonEventSubscriber, SubscribeCallBack);
            } catch (err) {
            }
          }).catch((err: BusinessError) => {
          });
        } catch (err) {
        }
      }
      catch (error) {
      }

      index = 0;
      let btnDoc = await driver.findComponent(ON.text('访问Docs文件—读写'));
      await btnDoc.click();
      await driver.delayMs(500);

      index = 1;
      let btnAudio = await driver.findComponent(ON.text('访问Audio文件-读写'));
      await btnAudio.click();
      await driver.delayMs(500);

      index = 2;
      let btnPhotos = await driver.findComponent(ON.text('访问Photos文件-读写'));
      await btnPhotos.click();
      await driver.delayMs(500);

      index = 3;
      let btnBundle = await driver.findComponent(ON.text('访问Bundle文件-读写'));
      await btnBundle.click();
      await driver.delayMs(500);

      index = 4;
      let btnBundleOnly = await driver.findComponent(ON.text('访问Bundle文件-只读'));
      await btnBundleOnly.click();
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_UIExtensionWithUri_2100
     * @tc.name      : BundleRestart
     * @tc.desc      : ContextBundleOnly
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it("SUB_Ability_AbilityRuntime_UIExtensionWithUri_2100", 3, async function (done) {
      console.info('SUB_Ability_AbilityRuntime_UIExtensionWithUri_2100');

      await abilityDelegator.executeShellCommand('aa start -b com.test.myapplication -a EntryAbility').then(result => {
      }).catch((err: BusinessError) => {
      })
      await sleep(500);
      let driver = await Driver.create();
      await driver.delayMs(500);
      let btnCreate = await driver.findComponent(ON.text('创建文件'));
      await btnCreate.click();
      await driver.delayMs(500);

      let btnSend = await driver.findComponent(ON.text('发送路径数据'));
      await btnSend.click();
      await driver.delayMs(500);

      let btnContextDocs = await driver.findComponent(ON.id('ContextBundleOnly'));
      await btnContextDocs.click();
      await driver.delayMs(500);

      let index: number = -1;
      let Subscriber: commonEventManager.CommonEventSubscriber;
      let SubscribeCallBack = async (err: BusinessError, data: commonEventManager.CommonEventData) => {
        let result: string = data.parameters?.result;
        console.log('SUB_Ability_AbilityRuntime_UIExtensionWithUri_2100 result: ' + result);
        try {
          if (data.event == 'GET_SUCCESS') {
            if (index == 0) {
              expect(result).assertEqual('SUCCESS');
            } else if (index == 4) {
              expect(result).assertEqual('SUCCESS');
              abilityDelegator.getCurrentTopAbility(
                (err: BusinessError, ability2: UIAbility) => {
                  ability2.context.terminateSelf(() => {
                  });
                }
              );
              await sleep(200);

              await abilityDelegator.executeShellCommand('aa start -b com.test.myapplication -a EntryAbility')
                .then(result => {
                })
                .catch((err: BusinessError) => {
                })

              await sleep(200);

              let driver = await Driver.create();
              await driver.delayMs(500);

              index = 4;
              let btnBundleOnlyRestart = await driver.findComponent(ON.text('访问Bundle文件-只读'));
              await btnBundleOnlyRestart.click();

            }
          } else if (data.event == 'GET_ERROR') {
            if (index == 1) {
              expect(result).assertEqual('13900001');
            } else if (index == 2) {
              expect(result).assertEqual('13900001');
            } else if (index == 3) {
              expect(result).assertEqual('13900012');
            } else if (index == 4) {
              expect(result).assertEqual('13900002');
              commonEventManager.unsubscribe(Subscriber);
              abilityDelegator.getCurrentTopAbility(
                (err: BusinessError, ability2: UIAbility) => {
                  ability2.context.terminateSelf(() => {
                    done();
                  });
                }
              );
            }
          }
        } catch (error) {
        }
      }
      try {
        //创建订阅者
        try {
          commonEventManager.createSubscriber(subscriberInfo).then((commonEventSubscriber) => {
            try {
              Subscriber = commonEventSubscriber;
              commonEventManager.subscribe(commonEventSubscriber, SubscribeCallBack);
            } catch (err) {
            }
          }).catch((err: BusinessError) => {
          });
        } catch (err) {
        }
      }
      catch (error) {
      }

      index = 0;
      let btnDoc = await driver.findComponent(ON.text('访问Docs文件—读写'));
      await btnDoc.click();
      await driver.delayMs(500);

      index = 1;
      let btnAudio = await driver.findComponent(ON.text('访问Audio文件-读写'));
      await btnAudio.click();
      await driver.delayMs(500);

      index = 2;
      let btnPhotos = await driver.findComponent(ON.text('访问Photos文件-读写'));
      await btnPhotos.click();
      await driver.delayMs(500);

      index = 3;
      let btnBundle = await driver.findComponent(ON.text('访问Bundle文件-读写'));
      await btnBundle.click();
      await driver.delayMs(500);

      index = 4;
      let btnBundleOnly = await driver.findComponent(ON.text('访问Bundle文件-只读'));
      await btnBundleOnly.click();
    })


    //----------------------------

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_UIExtensionWithUri_2200
     * @tc.name      : Audio
     * @tc.desc      : SessionAudio
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it("SUB_Ability_AbilityRuntime_UIExtensionWithUri_2200", 3, async function (done) {
      console.info('SUB_Ability_AbilityRuntime_UIExtensionWithUri_2200');

      await abilityDelegator.executeShellCommand('aa start -b com.test.myapplication -a EntryAbility').then(result => {
      }).catch((err: BusinessError) => {
      })
      await sleep(500);
      let driver = await Driver.create();
      await driver.delayMs(500);
      let btnCreate = await driver.findComponent(ON.text('创建文件'));
      await btnCreate.click();
      await driver.delayMs(500);

      let btnSend = await driver.findComponent(ON.text('发送路径数据'));
      await btnSend.click();
      await driver.delayMs(500);

      let btnContextDocs = await driver.findComponent(ON.id('SessionAudio'));
      await btnContextDocs.click();
      await driver.delayMs(500);

      let index: number = -1;
      let Subscriber: commonEventManager.CommonEventSubscriber;
      let SubscribeCallBack = async (err: BusinessError, data: commonEventManager.CommonEventData) => {
        let result: string = data.parameters?.result;
        console.log('SUB_Ability_AbilityRuntime_UIExtensionWithUri_2200 result: ' + result);
        try {
          if (data.event == 'GET_SUCCESS') {
            if (index == 0) {
              expect(result).assertEqual('SUCCESS');
            } else if (index == 1) {
              expect(result).assertEqual('SUCCESS');
            }
          } else if (data.event == 'GET_ERROR') {
            if (index == 2) {
              expect(result).assertEqual('13900001');
            } else if (index == 3) {
              expect(result).assertEqual('13900002');
              commonEventManager.unsubscribe(Subscriber);
              abilityDelegator.getCurrentTopAbility(
                (err: BusinessError, ability2: UIAbility) => {
                  ability2.context.terminateSelf(() => {
                    done();
                  });
                }
              );
            }
          }
        } catch (error) {
        }
      }
      try {
        //创建订阅者
        try {
          commonEventManager.createSubscriber(subscriberInfo).then((commonEventSubscriber) => {
            try {
              Subscriber = commonEventSubscriber;
              commonEventManager.subscribe(commonEventSubscriber, SubscribeCallBack);
            } catch (err) {
            }
          }).catch((err: BusinessError) => {
          });
        } catch (err) {
        }
      }
      catch (error) {
      }

      index = 0;
      let btnDoc = await driver.findComponent(ON.text('访问Docs文件—读写'));
      await btnDoc.click();
      await driver.delayMs(500);

      index = 1;
      let btnAudio = await driver.findComponent(ON.text('访问Audio文件-读写'));
      await btnAudio.click();
      await driver.delayMs(500);

      index = 2;
      let btnPhotos = await driver.findComponent(ON.text('访问Photos文件-读写'));
      await btnPhotos.click();
      await driver.delayMs(500);

      index = 3;
      let btnBundle = await driver.findComponent(ON.text('访问Bundle文件-读写'));
      await btnBundle.click();
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_UIExtensionWithUri_2300
     * @tc.name      : Photo
     * @tc.desc      : SessionPhoto
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it("SUB_Ability_AbilityRuntime_UIExtensionWithUri_2300", 3, async function (done) {
      console.info('SUB_Ability_AbilityRuntime_UIExtensionWithUri_2300');

      await abilityDelegator.executeShellCommand('aa start -b com.test.myapplication -a EntryAbility').then(result => {
      }).catch((err: BusinessError) => {
      })
      await sleep(500);
      let driver = await Driver.create();
      await driver.delayMs(500);
      let btnCreate = await driver.findComponent(ON.text('创建文件'));
      await btnCreate.click();
      await driver.delayMs(500);

      let btnSend = await driver.findComponent(ON.text('发送路径数据'));
      await btnSend.click();
      await driver.delayMs(500);

      let btnContextDocs = await driver.findComponent(ON.id('SessionPhoto'));
      await btnContextDocs.click();
      await driver.delayMs(500);

      let index: number = -1;
      let Subscriber: commonEventManager.CommonEventSubscriber;
      let SubscribeCallBack = async (err: BusinessError, data: commonEventManager.CommonEventData) => {
        let result: string = data.parameters?.result;
        console.log('SUB_Ability_AbilityRuntime_UIExtensionWithUri_2300 result: ' + result);
        try {
          if (data.event == 'GET_SUCCESS') {
            if (index == 0) {
              expect(result).assertEqual('SUCCESS');
            } else if (index == 2) {
              expect(result).assertEqual('SUCCESS');
            }
          } else if (data.event == 'GET_ERROR') {
            if (index == 1) {
              expect(result).assertEqual('13900001');
            } else if (index == 3) {
              expect(result).assertEqual('13900002');
              commonEventManager.unsubscribe(Subscriber);
              abilityDelegator.getCurrentTopAbility(
                (err: BusinessError, ability2: UIAbility) => {
                  ability2.context.terminateSelf(() => {
                    done();
                  });
                }
              );
            }
          }
        } catch (error) {
        }
      }
      try {
        //创建订阅者
        try {
          commonEventManager.createSubscriber(subscriberInfo).then((commonEventSubscriber) => {
            try {
              Subscriber = commonEventSubscriber;
              commonEventManager.subscribe(commonEventSubscriber, SubscribeCallBack);
            } catch (err) {
            }
          }).catch((err: BusinessError) => {
          });
        } catch (err) {
        }
      }
      catch (error) {
      }

      index = 0;
      let btnDoc = await driver.findComponent(ON.text('访问Docs文件—读写'));
      await btnDoc.click();
      await driver.delayMs(500);

      index = 1;
      let btnAudio = await driver.findComponent(ON.text('访问Audio文件-读写'));
      await btnAudio.click();
      await driver.delayMs(500);

      index = 2;
      let btnPhotos = await driver.findComponent(ON.text('访问Photos文件-读写'));
      await btnPhotos.click();
      await driver.delayMs(500);

      index = 3;
      let btnBundle = await driver.findComponent(ON.text('访问Bundle文件-读写'));
      await btnBundle.click();
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_UIExtensionWithUri_2400

     * @tc.name      : Bundle
     * @tc.desc      : SessionBundle
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it("SUB_Ability_AbilityRuntime_UIExtensionWithUri_2400", 3, async function (done) {
      console.info('SUB_Ability_AbilityRuntime_UIExtensionWithUri_2400');

      await abilityDelegator.executeShellCommand('aa start -b com.test.myapplication -a EntryAbility').then(result => {
      }).catch((err: BusinessError) => {
      })
      await sleep(500);
      let driver = await Driver.create();
      await driver.delayMs(500);
      let btnCreate = await driver.findComponent(ON.text('创建文件'));
      await btnCreate.click();
      await driver.delayMs(500);

      let btnSend = await driver.findComponent(ON.text('发送路径数据'));
      await btnSend.click();
      await driver.delayMs(500);

      let btnContextDocs = await driver.findComponent(ON.id('SessionBundle'));
      await btnContextDocs.click();
      await driver.delayMs(500);

      let index: number = -1;
      let Subscriber: commonEventManager.CommonEventSubscriber;
      let SubscribeCallBack = async (err: BusinessError, data: commonEventManager.CommonEventData) => {
        let result: string = data.parameters?.result;
        console.log('SUB_Ability_AbilityRuntime_UIExtensionWithUri_2400 result: ' + result);
        try {
          if (data.event == 'GET_SUCCESS') {
            if (index == 0) {
              expect(result).assertEqual('SUCCESS');
            } else if (index == 3) {
              expect(result).assertEqual('SUCCESS');
              commonEventManager.unsubscribe(Subscriber);
              abilityDelegator.getCurrentTopAbility(
                (err: BusinessError, ability2: UIAbility) => {
                  ability2.context.terminateSelf(() => {
                    done();
                  });
                }
              );
            }
          } else if (data.event == 'GET_ERROR') {
            if (index == 1) {
              expect(result).assertEqual('13900001');
            } else if (index == 2) {
              expect(result).assertEqual('13900001');
            }
          }
        } catch (error) {
        }
      }
      try {
        //创建订阅者
        try {
          commonEventManager.createSubscriber(subscriberInfo).then((commonEventSubscriber) => {
            try {
              Subscriber = commonEventSubscriber;
              commonEventManager.subscribe(commonEventSubscriber, SubscribeCallBack);
            } catch (err) {
            }
          }).catch((err: BusinessError) => {
          });
        } catch (err) {
        }
      }
      catch (error) {
      }

      index = 0;
      let btnDoc = await driver.findComponent(ON.text('访问Docs文件—读写'));
      await btnDoc.click();
      await driver.delayMs(500);

      index = 1;
      let btnAudio = await driver.findComponent(ON.text('访问Audio文件-读写'));
      await btnAudio.click();
      await driver.delayMs(500);

      index = 2;
      let btnPhotos = await driver.findComponent(ON.text('访问Photos文件-读写'));
      await btnPhotos.click();
      await driver.delayMs(500);

      index = 3;
      let btnBundle = await driver.findComponent(ON.text('访问Bundle文件-读写'));
      await btnBundle.click();
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_UIExtensionWithUri_2500
     * @tc.name      : Docs
     * @tc.desc      : ContextDocs
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it("SUB_Ability_AbilityRuntime_UIExtensionWithUri_2500", 3, async function (done) {
      console.info('SUB_Ability_AbilityRuntime_UIExtensionWithUri_2500');

      await abilityDelegator.executeShellCommand('aa start -b com.test.myapplication -a EntryAbility').then(result => {
      }).catch((err: BusinessError) => {
      })
      await sleep(500);
      let driver = await Driver.create();
      await driver.delayMs(500);
      let btnCreate = await driver.findComponent(ON.text('创建文件'));
      await btnCreate.click();
      await driver.delayMs(500);

      let btnSend = await driver.findComponent(ON.text('发送路径数据'));
      await btnSend.click();
      await driver.delayMs(500);

      let btnContextDocs = await driver.findComponent(ON.id('ContextDocs'));
      await btnContextDocs.click();
      await driver.delayMs(500);

      let index: number = -1;
      let Subscriber: commonEventManager.CommonEventSubscriber;
      let SubscribeCallBack = async (err: BusinessError, data: commonEventManager.CommonEventData) => {
        let result: string = data.parameters?.result;
        console.log('SUB_Ability_AbilityRuntime_UIExtensionWithUri_2500 result: ' + result);
        try {
          if (data.event == 'GET_SUCCESS') {
            if (index == 0) {
              expect(result).assertEqual('SUCCESS');
            }
          } else if (data.event == 'GET_ERROR') {
            if (index == 1) {
              expect(result).assertEqual('13900001');
            } else if (index == 2) {
              expect(result).assertEqual('13900001');
            } else if (index == 3) {
              expect(result).assertEqual('13900002');
              commonEventManager.unsubscribe(Subscriber);
              abilityDelegator.getCurrentTopAbility(
                (err: BusinessError, ability2: UIAbility) => {
                  ability2.context.terminateSelf(() => {
                    done();
                  });
                }
              );
            }
          }
        } catch (error) {
        }
      }
      try {
        //创建订阅者
        try {
          commonEventManager.createSubscriber(subscriberInfo).then((commonEventSubscriber) => {
            try {
              Subscriber = commonEventSubscriber;
              commonEventManager.subscribe(commonEventSubscriber, SubscribeCallBack);
            } catch (err) {
            }
          }).catch((err: BusinessError) => {
          });
        } catch (err) {
        }
      }
      catch (error) {
      }

      index = 0;
      let btnDoc = await driver.findComponent(ON.text('访问Docs文件—读写'));
      await btnDoc.click();
      await driver.delayMs(500);

      index = 1;
      let btnAudio = await driver.findComponent(ON.text('访问Audio文件-读写'));
      await btnAudio.click();
      await driver.delayMs(500);

      index = 2;
      let btnPhotos = await driver.findComponent(ON.text('访问Photos文件-读写'));
      await btnPhotos.click();
      await driver.delayMs(500);

      index = 3;
      let btnBundle = await driver.findComponent(ON.text('访问Bundle文件-读写'));
      await btnBundle.click();
    })


  })
}