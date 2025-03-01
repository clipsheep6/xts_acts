/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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
import inputmethodengine from '@ohos.inputMethodEngine';
import display from '@ohos.display';
import windowManager from '@ohos.window';
import commoneventmanager from '@ohos.commonEventManager';
import prompt from '@ohos.prompt';
import inputMethodEngine from '@ohos.inputMethodEngine';

let inputMethodAbility = inputmethodengine.getInputMethodAbility();
const TAG = 'keyboardController';
const SOFT_KEYBOARD = 0;
const STATUS_BAR = 1;
const FLG_FIXED = 0;
const FLG_FLOATING = 1;

let panelInfo = {
  type: SOFT_KEYBOARD,
  flag: FLG_FLOATING
};

export class KeyboardController {
  mContext;
  storage: LocalStorage;
  WINDOW_TYPE_INPUT_METHOD_FLOAT = 2105;
  windowName = 'inputApp';

  private softKeyboardPanel: any = null;
  private windowHeight: number = 0;
  private windowWidth: number = 0;
  private nonBarPosition: number = 0;
  private keyboardController: inputMethodEngine.KeyboardController;
  private InputClient: inputMethodEngine.InputClient;
  private display_info = display.getDefaultDisplaySync();

  constructor(context) {
    this.storage = new LocalStorage();
    this.storage.setOrCreate('storageSimplePorp', 121);
    this.mContext = context;
    this.windowWidth = this.display_info.width;
    this.windowHeight = this.display_info.height * 0.45;
  }

  public onCreate(): void {
    let that = this; 
    let subscriber;    

    inputMethodAbility.createPanel(this.mContext, panelInfo, (err, panel) => {
      if (err !== undefined) {
        console.info(TAG + '====>Failed to create panel, err: ' + JSON.stringify(err));
        return;
      }
      this.softKeyboardPanel = panel;
      this.softKeyboardPanel.setUiContent('testability/pages/Second', async (err, data) => {        
        console.info(TAG + '====>Succeed in creating panel.' + JSON.stringify(panel));
      });
      try{
        let commonEventSubscribeInfo = {
          events: ['InputMethodWindManageTest']
        };
        
        commoneventmanager.createSubscriber(commonEventSubscribeInfo).then(function (data) {
          subscriber = data;
          commoneventmanager.subscribe(subscriber, subscriberCallback)
          console.info(TAG + '====>scene subscribe finish====');
        })
      }catch(err){
        console.info(TAG + '====>createSubscriber err:' + JSON.stringify(err.message));
      }
    });

    inputMethodAbility.on('inputStop', async() => {
      console.info(TAG + '====>on_inputStop callback')
      inputMethodAbility.off('inputStart');
      inputMethodAbility.off('inputStop',()=>{});
      inputMethodAbility.destroyPanel(this.softKeyboardPanel);
      await that.mContext.destroy();   
      await commoneventmanager.unsubscribe(subscriber, unSubscriberCallback);
    });

    inputMethodAbility.on('inputStart', async (keyboardController, InputClient) => {
      this.keyboardController = keyboardController;
      this.InputClient = InputClient
      console.info(TAG + '====>inputMethodAbility inputStart into');      
    })
    
    
    let subscriberCallback = (err, data) => {
      console.debug(TAG + '====>receive event err: ' + JSON.stringify(err));
      console.debug(TAG + '====>receive event data ' + JSON.stringify(data));
      switch (data.code) {
        case 10:
          console.debug(TAG + '====>Sub_Misc_inputMethod_Panel_createPanelCallback_0010 event:' + data.event);
          that.Sub_Misc_inputMethod_Panel_createPanelCallback_0010();
          break;
        case 20:
          console.debug(TAG + '====>Sub_Misc_inputMethod_Panel_createPanelPromise_0020 event:' + data.event);
          that.Sub_Misc_inputMethod_Panel_createPanelPromise_0020();
          break;
        case 30:
          console.debug(TAG + '====>Sub_Misc_inputMethod_Panel_destroyPanelCallback_0030 event:' + data.event);
          that.Sub_Misc_inputMethod_Panel_destroyPanelCallback_0030();
          break;
        case 40:
          console.debug(TAG + '====>Sub_Misc_inputMethod_Panel_destroyPanelPromise_0040 event:' + data.event);
          that.Sub_Misc_inputMethod_Panel_destroyPanelPromise_0040();
          break;
        case 50:
          console.debug(TAG + '====>Sub_Misc_inputMethod_Panel_setUiContentCallback_0050 event:' + data.event);
          that.Sub_Misc_inputMethod_Panel_setUiContentCallback_0050();
          break;
        case 60:
          console.debug(TAG + '====>Sub_Misc_inputMethod_Panel_setUiContentPromise_0060 event:' + data.event);
          that.Sub_Misc_inputMethod_Panel_setUiContentPromise_0060();
          break;
        case 70:
          console.debug(TAG + '====>Sub_Misc_inputMethod_Panel_setUiContentCallback_0070 event:' + data.event);
          that.Sub_Misc_inputMethod_Panel_setUiContentCallback_0070();
          break;
        case 80:
          console.debug(TAG + '====>Sub_Misc_inputMethod_Panel_setUiContentPromise_0080 event:' + data.event);
          that.Sub_Misc_inputMethod_Panel_setUiContentPromise_0080();
          break;
        case 90:
          console.debug(TAG + '====>Sub_Misc_inputMethod_Panel_resizeCallback_0090 event:' + data.event);
          that.Sub_Misc_inputMethod_Panel_resizeCallback_0090();
          break;
        case 100:
          console.debug(TAG + '====>Sub_Misc_inputMethod_Panel_resizePromise_0100 event:' + data.event);
          that.Sub_Misc_inputMethod_Panel_resizePromise_0100();
          break;
        case 110:
          console.debug(TAG + '====>Sub_Misc_inputMethod_Panel_moveToCallback_0110 event:' + data.event);
          that.Sub_Misc_inputMethod_Panel_moveToCallback_0110();
          break;
        case 120:
          console.debug(TAG + '====>Sub_Misc_inputMethod_Panel_moveToPromise_0120 event:' + data.event);
          that.Sub_Misc_inputMethod_Panel_moveToPromise_0120();
          break;
        case 130:
          console.debug(TAG + '====>Sub_Misc_inputMethod_Panel_showCallback_0130 event:' + data.event);
          that.Sub_Misc_inputMethod_Panel_showCallback_0130();
          break;
        case 140:
          console.debug(TAG + '====>Sub_Misc_inputMethod_Panel_showPromise_0140 event:' + data.event);
          that.Sub_Misc_inputMethod_Panel_showPromise_0140();
          break;
        case 150:
          console.debug(TAG + '====>Sub_Misc_inputMethod_Panel_hideCallback_0150 event:' + data.event);
          that.Sub_Misc_inputMethod_Panel_hideCallback_0150();
          break;
        case 160:
          console.debug(TAG + '====>Sub_Misc_inputMethod_Panel_hidePromise_0160 event:' + data.event);
          that.Sub_Misc_inputMethod_Panel_hidePromise_0160();
          break;
        case 170:
          console.debug(TAG + '====>Sub_Misc_inputMethod_Panel_onShow_0170 event:' + data.event);
          that.Sub_Misc_inputMethod_Panel_onShow_0170();
          break;
        case 180:
          console.debug(TAG + '====>Sub_Misc_inputMethod_Panel_onHide_0180 event:' + data.event);
          that.Sub_Misc_inputMethod_Panel_onHide_0180();
          break;
        case 190:
          console.debug(TAG + '====>Sub_Misc_inputMethod_Panel_offShow_0190 event:' + data.event);
          that.Sub_Misc_inputMethod_Panel_offShow_0190();
          break;
        case 200:
          console.debug(TAG + '====>Sub_Misc_inputMethod_Panel_offHide_0200 event:' + data.event);
          that.Sub_Misc_inputMethod_Panel_offHide_0200();
          break;
        case 210:
          console.debug(TAG + '====>Sub_Misc_inputMethod_Panel_changeFlag_0210 event:' + data.event);
          that.Sub_Misc_inputMethod_Panel_changeFlag_0210();
          break;
        case 211:
          console.debug(TAG + '====>Sub_Misc_inputMethod_Panel_changeFlag_0211 event:' + data.event);
          that.Sub_Misc_inputMethod_Panel_changeFlag_0211();
          break;
        case 212:
          console.debug(TAG + '====>Sub_InputMethod_IMF_SecurityKeyboard_0600 event:' + data.event);
          that.Sub_InputMethod_IMF_SecurityKeyboard_0600();
          break;
        case 213:
          console.debug(TAG + '====>Sub_InputMethod_IMF_SecurityKeyboard_0700 event:' + data.event);
          that.Sub_InputMethod_IMF_SecurityKeyboard_0700();
          break;
        case 214:
          console.debug(TAG + '====>Sub_InputMethod_IMF_SecurityKeyboard_0800 event:' + data.event);
          that.Sub_InputMethod_IMF_SecurityKeyboard_0800();
          break;
        case 215:
          console.debug(TAG + '====>Sub_InputMethod_IMF_getSecurityMode_0100 event:' + data.event);
          that.Sub_InputMethod_IMF_getSecurityMode_0100();
          break;
        case 216:
          console.debug(TAG + '====>SUB_InputMethod_IME_SplitScreen_0100 event:' + data.event);
          that.SUB_InputMethod_IME_SplitScreen_0100();
          break;
        case 217:
          console.debug(TAG + '====>Sub_InputMethod_IME_ScreenRotation_0100 event:' + data.event);
          that.Sub_InputMethod_IME_ScreenRotation_0100();
          break;
        case 218:
          console.debug(TAG + '====>Sub_InputMethod_IME_ScreenRotation_0200 event:' + data.event);
          that.Sub_InputMethod_IME_ScreenRotation_0200();
          break;
        
      }
    }

    let unSubscriberCallback = (err) =>  {
      console.info(TAG + '====>unSubscriberCallback start');
      if (err) {
        console.error(TAG + '====>unSubscriberCallback failed: ' + JSON.stringify(err));
      } else {
        console.info(TAG + '====>unSubscriberCallback finsh');
      }
    }  
  }  

  private initWindow(): void {
    display.getDefaultDisplay().then(dis => {
      let dWidth = dis.width;
      let dHeight = dis.height;
      let keyHeightRate = 0.47;
      let keyHeight = dHeight * keyHeightRate;
      this.windowWidth = dWidth;
      this.windowHeight = keyHeight;
      this.nonBarPosition = dHeight - keyHeight

      let config = {
        name: this.windowName,
        windowType: windowManager.WindowType.TYPE_INPUT_METHOD,
        ctx: this.mContext
      };
      windowManager.createWindow(config).then((win) => {
        win.resize(dWidth, keyHeight).then(() => {
          win.moveWindowTo(0, this.nonBarPosition).then(() => {
            win.setUIContent('testability/pages/Second').then(() => {
            });
          });
        });
      });
    });
  }

  private publishCallback(err): void {
    if (err) {
      console.error(TAG + '====>publish failed: ' + JSON.stringify(err));
    } else {
      console.log(TAG + '====>publish');
    }
  }


  private Sub_Misc_inputMethod_Panel_createPanelCallback_0010(): void {
    let commonEventPublishData;
    let panelInfo1 = {
      type: STATUS_BAR,
      flag: FLG_FLOATING
    };
    console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_createPanelCallback_0010 success');
    try {
      inputMethodAbility.createPanel(this.mContext, panelInfo1, async (err, panel) => {
        console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_createPanelCallback_0010 createPanel');
        if (err) {
          commonEventPublishData = {
            data: 'FAILED'
          };
          console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_createPanelCallback_0010 createPanel error: ' + JSON.stringify(err));
          commoneventmanager.publish('Sub_Misc_inputMethod_Panel_createPanelCallback_0010', commonEventPublishData, this.publishCallback);
        } else {
          commonEventPublishData = {
            data: 'SUCCESS'
          };
          console.info(TAG + '====>Sub_Misc_inputMethod_Panel_createPanelCallback_0010 Succeed in creating panel.' + JSON.stringify(panel));
        }
        await inputMethodAbility.destroyPanel(panel);
        commoneventmanager.publish('Sub_Misc_inputMethod_Panel_createPanelCallback_0010', commonEventPublishData, this.publishCallback);
      })
    } catch (error) {
      commonEventPublishData = {
        data: 'FAILED'
      };
      console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_createPanelCallback_0010 catch error: ' + JSON.stringify(error));
      commoneventmanager.publish('Sub_Misc_inputMethod_Panel_createPanelCallback_0010', commonEventPublishData, this.publishCallback);
    }
  }

  private Sub_Misc_inputMethod_Panel_createPanelPromise_0020(): void {
    let commonEventPublishData;
    let panelInfo1 = {
      type: STATUS_BAR,
      flag: FLG_FLOATING
    };
    console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_createPanelPromise_0020 success');
    try {
      inputMethodAbility.createPanel(this.mContext, panelInfo1).then(async (panel) => {
        commonEventPublishData = {
          data: 'SUCCESS'
        };
        console.info(TAG + '====>Sub_Misc_inputMethod_Panel_createPanelPromise_0020 Succeed in creating panel.' + JSON.stringify(panel));
        await inputMethodAbility.destroyPanel(panel);
        commoneventmanager.publish('Sub_Misc_inputMethod_Panel_createPanelPromise_0020', commonEventPublishData, this.publishCallback);
      }).catch(async (err) => {
        commonEventPublishData = {
          data: 'FAILED'
        };
        console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_createPanelPromise_0020 createPanel error: ' + JSON.stringify(err));
        commoneventmanager.publish('Sub_Misc_inputMethod_Panel_createPanelPromise_0020', commonEventPublishData, this.publishCallback);
      });
    } catch (error) {
      commonEventPublishData = {
        data: 'FAILED'
      };
      console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_createPanelPromise_0020 catch error: ' + JSON.stringify(error));
      commoneventmanager.publish('Sub_Misc_inputMethod_Panel_createPanelPromise_0020', commonEventPublishData, this.publishCallback);
    }
  }

  private async Sub_Misc_inputMethod_Panel_destroyPanelCallback_0030(): Promise<void> {
    let commonEventPublishData;
    let panelInfo1 = {
      type: STATUS_BAR,
      flag: FLG_FIXED
    };
    console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_destroyPanelCallback_0030 success');
    try {
      let panel = await inputMethodAbility.createPanel(this.mContext, panelInfo1);
      inputMethodAbility.destroyPanel(panel, async (err, panel) => {
        console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_destroyPanelCallback_0030 destroyPanel');
        if (err) {
          commonEventPublishData = {
            data: 'FAILED'
          };
          console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_destroyPanelCallback_0030 destroyPanel error: ' + JSON.stringify(err));
          commoneventmanager.publish('Sub_Misc_inputMethod_Panel_destroyPanelCallback_0030', commonEventPublishData, this.publishCallback);
        } else {
          commonEventPublishData = {
            data: 'SUCCESS'
          };
          console.info(TAG + '====>Sub_Misc_inputMethod_Panel_destroyPanelCallback_0030 Succeed in destroying panel.' + JSON.stringify(panel));
        }
        commoneventmanager.publish('Sub_Misc_inputMethod_Panel_destroyPanelCallback_0030', commonEventPublishData, this.publishCallback);
      });
    } catch (error) {
      commonEventPublishData = {
        data: 'FAILED'
      };
      console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_destroyPanelCallback_0030 catch error: ' + JSON.stringify(error));
      commoneventmanager.publish('Sub_Misc_inputMethod_Panel_destroyPanelCallback_0030', commonEventPublishData, this.publishCallback);
    }
  }

  private async Sub_Misc_inputMethod_Panel_destroyPanelPromise_0040(): Promise<void> {
    let commonEventPublishData;
    let panelInfo1 = {
      type: STATUS_BAR,
      flag: FLG_FIXED
    };
    console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_destroyPanelPromise_0040 success');
    try {
      let panel = await inputMethodAbility.createPanel(this.mContext, panelInfo1);
      inputMethodAbility.destroyPanel(panel).then(async () => {
        commonEventPublishData = {
          data: 'SUCCESS'
        };
        console.info(TAG + '====>Sub_Misc_inputMethod_Panel_destroyPanelPromise_0040 Succeed in destroyPanel panel.' + JSON.stringify(panel));
        commoneventmanager.publish('Sub_Misc_inputMethod_Panel_destroyPanelPromise_0040', commonEventPublishData, this.publishCallback);
      }).catch(async (err) => {
        commonEventPublishData = {
          data: 'FAILED'
        };
        console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_destroyPanelPromise_0040 destroyPanel error: ' + JSON.stringify(err));
        commoneventmanager.publish('Sub_Misc_inputMethod_Panel_destroyPanelPromise_0040', commonEventPublishData, this.publishCallback);
      });
    } catch (error) {
      commonEventPublishData = {
        data: 'FAILED'
      };
      console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_destroyPanelPromise_0040 catch error: ' + JSON.stringify(error));
      commoneventmanager.publish('Sub_Misc_inputMethod_Panel_destroyPanelPromise_0040', commonEventPublishData, this.publishCallback);
    }
  }

  private Sub_Misc_inputMethod_Panel_setUiContentCallback_0050(): void {
    let commonEventPublishData;
    console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_setUiContentCallback_0050 success');
    try {
      if (this.softKeyboardPanel !== null) {
        this.softKeyboardPanel.setUiContent('testability/pages/Second', async (err, data) => {
          console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_setUiContentCallback_0050 setUiContent');
          if (err) {
            commonEventPublishData = {
              data: 'FAILED'
            };
            console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_setUiContentCallback_0050 setUiContent error: ' + JSON.stringify(err));
            commoneventmanager.publish('Sub_Misc_inputMethod_Panel_setUiContentCallback_0050', commonEventPublishData, this.publishCallback);
          } else {
            commonEventPublishData = {
              data: 'SUCCESS'
            };
            console.info(TAG + '====>Sub_Misc_inputMethod_Panel_setUiContentCallback_0050 Succeed setUiContent: ' + JSON.stringify(data));
          }
          commoneventmanager.publish('Sub_Misc_inputMethod_Panel_setUiContentCallback_0050', commonEventPublishData, this.publishCallback);
        });
      } else {
        commonEventPublishData = {
          data: 'FAILED'
        };
        console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_setUiContentCallback_0050 this.softKeyboardPanel is null');
        commoneventmanager.publish('Sub_Misc_inputMethod_Panel_setUiContentCallback_0050', commonEventPublishData, this.publishCallback);
      }
    } catch (error) {
      commonEventPublishData = {
        data: 'FAILED'
      };
      console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_setUiContentCallback_0050 catch error: ' + JSON.stringify(error));
      commoneventmanager.publish('Sub_Misc_inputMethod_Panel_setUiContentCallback_0050', commonEventPublishData, this.publishCallback);
    }
  }

  private Sub_Misc_inputMethod_Panel_setUiContentPromise_0060(): void {
    let commonEventPublishData;
    console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_setUiContentPromise_0060 success');
    try {
      if (this.softKeyboardPanel !== null) {
        this.softKeyboardPanel.setUiContent('testability/pages/Second').then(async (data) => {
          commonEventPublishData = {
            data: 'SUCCESS'
          };
          console.info(TAG + '====>Sub_Misc_inputMethod_Panel_setUiContentPromise_0060 Succeed in setUiContent.' + JSON.stringify(data));
          commoneventmanager.publish('Sub_Misc_inputMethod_Panel_setUiContentPromise_0060', commonEventPublishData, this.publishCallback);
        }).catch(async (err) => {
          commonEventPublishData = {
            data: 'FAILED'
          };
          console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_setUiContentPromise_0060 setUiContent error: ' + JSON.stringify(err));
          commoneventmanager.publish('Sub_Misc_inputMethod_Panel_setUiContentPromise_0060', commonEventPublishData, this.publishCallback);
        });
      } else {
        commonEventPublishData = {
          data: 'FAILED'
        };
        console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_setUiContentPromise_0060 this.softKeyboardPanel is null');
        commoneventmanager.publish('Sub_Misc_inputMethod_Panel_setUiContentPromise_0060', commonEventPublishData, this.publishCallback);
      }
    } catch (error) {
      commonEventPublishData = {
        data: 'FAILED'
      };
      console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_setUiContentPromise_0060 catch error: ' + JSON.stringify(error));
      commoneventmanager.publish('Sub_Misc_inputMethod_Panel_setUiContentPromise_0060', commonEventPublishData, this.publishCallback);
    }
  }

  private Sub_Misc_inputMethod_Panel_setUiContentCallback_0070(): void {
    let commonEventPublishData;
    console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_setUiContentCallback_0070 success');
    try {
      if (this.softKeyboardPanel !== null) {
        this.softKeyboardPanel.setUiContent('testability/pages/Second', this.storage, async (err, data) => {
          console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_setUiContentCallback_0070 setUiContent');
          if (err) {
            commonEventPublishData = {
              data: 'FAILED'
            };
            console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_setUiContentCallback_0070 setUiContent error: ' + JSON.stringify(err));
            commoneventmanager.publish('Sub_Misc_inputMethod_Panel_setUiContentCallback_0070', commonEventPublishData, this.publishCallback);
          } else {
            commonEventPublishData = {
              data: 'SUCCESS'
            };
            console.info(TAG + 'Sub_Misc_inputMethod_Panel_setUiContentCallback_0070 Succeed setUiContent: ' + JSON.stringify(data));
          }
          commoneventmanager.publish('Sub_Misc_inputMethod_Panel_setUiContentCallback_0070', commonEventPublishData, this.publishCallback);
        })
      } else {
        commonEventPublishData = {
          data: 'FAILED'
        };
        console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_setUiContentCallback_0070 this.softKeyboardPanel is null');
        commoneventmanager.publish('Sub_Misc_inputMethod_Panel_setUiContentCallback_0070', commonEventPublishData, this.publishCallback);
      }
    } catch (error) {
      commonEventPublishData = {
        data: 'FAILED'
      };
      console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_setUiContentCallback_0070 catch error: ' + JSON.stringify(error));
      commoneventmanager.publish('Sub_Misc_inputMethod_Panel_setUiContentCallback_0070', commonEventPublishData, this.publishCallback);
    }
  }

  private Sub_Misc_inputMethod_Panel_setUiContentPromise_0080(): void {
    let commonEventPublishData;
    console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_setUiContentPromise_0080 success');
    try {
      if (this.softKeyboardPanel !== null) {
        this.softKeyboardPanel.setUiContent('testability/pages/Second', this.storage).then(async (data) => {
          commonEventPublishData = {
            data: 'SUCCESS'
          };
          console.info(TAG + '====>Sub_Misc_inputMethod_Panel_setUiContentPromise_0080 Succeed in setUiContent: ' + JSON.stringify(data));
          commoneventmanager.publish('Sub_Misc_inputMethod_Panel_setUiContentPromise_0080', commonEventPublishData, this.publishCallback);
        }).catch(async (err) => {
          commonEventPublishData = {
            data: 'FAILED'
          };
          console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_setUiContentPromise_0080 setUiContent error: ' + JSON.stringify(err));
          commoneventmanager.publish('Sub_Misc_inputMethod_Panel_setUiContentPromise_0080', commonEventPublishData, this.publishCallback);
        });
      } else {
        commonEventPublishData = {
          data: 'FAILED'
        };
        console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_setUiContentPromise_0080 this.softKeyboardPanel is null');
        commoneventmanager.publish('Sub_Misc_inputMethod_Panel_setUiContentPromise_0080', commonEventPublishData, this.publishCallback);
      }
    } catch (error) {
      commonEventPublishData = {
        data: 'FAILED'
      };
      console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_setUiContentPromise_0080 catch error: ' + JSON.stringify(error));
      commoneventmanager.publish('Sub_Misc_inputMethod_Panel_setUiContentPromise_0080', commonEventPublishData, this.publishCallback);
    }
  }

  private Sub_Misc_inputMethod_Panel_resizeCallback_0090(): void {
    let commonEventPublishData;
    console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_resizeCallback_0090 success');
    try {
      if (this.softKeyboardPanel !== null) {
        this.softKeyboardPanel.resize(this.windowWidth, this.windowHeight, async (err, data) => {
          console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_resizeCallback_0090 resize');
          if (err) {
            commonEventPublishData = {
              data: 'FAILED'
            };
            console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_resizeCallback_0090 resize error: ' + JSON.stringify(err));
            commoneventmanager.publish('Sub_Misc_inputMethod_Panel_resizeCallback_0090', commonEventPublishData, this.publishCallback);
          } else {
            commonEventPublishData = {
              data: 'SUCCESS'
            };
            console.info(TAG + '====>Sub_Misc_inputMethod_Panel_resizeCallback_0090 Succeeded in changing the panel size: ' + JSON.stringify(data));
          }
          commoneventmanager.publish('Sub_Misc_inputMethod_Panel_resizeCallback_0090', commonEventPublishData, this.publishCallback);
        })
      } else {
        commonEventPublishData = {
          data: 'FAILED'
        };
        console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_resizeCallback_0090 this.softKeyboardPanel is null');
        commoneventmanager.publish('Sub_Misc_inputMethod_Panel_resizeCallback_0090', commonEventPublishData, this.publishCallback);
      }
    } catch (error) {
      commonEventPublishData = {
        data: 'FAILED'
      };
      console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_resizeCallback_0090 catch error: ' + JSON.stringify(error));
      commoneventmanager.publish('Sub_Misc_inputMethod_Panel_resizeCallback_0090', commonEventPublishData, this.publishCallback);
    }
  }

  private Sub_Misc_inputMethod_Panel_resizePromise_0100(): void {
    let commonEventPublishData;
    console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_resizePromise_0100 success');
    try {
      if (this.softKeyboardPanel !== null) {
        this.softKeyboardPanel.resize(this.windowWidth, this.windowHeight).then(async (data) => {
          commonEventPublishData = {
            data: 'SUCCESS'
          };
          console.info(TAG + '====>Sub_Misc_inputMethod_Panel_resizePromise_0100 Succeed in changing the panel size: ' + JSON.stringify(data));
          commoneventmanager.publish('Sub_Misc_inputMethod_Panel_resizePromise_0100', commonEventPublishData, this.publishCallback);
        }).catch(async (err) => {
          commonEventPublishData = {
            data: 'FAILED'
          };
          console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_resizePromise_0100 resize error: ' + JSON.stringify(err));
          commoneventmanager.publish('Sub_Misc_inputMethod_Panel_resizePromise_0100', commonEventPublishData, this.publishCallback);
        });
      } else {
        commonEventPublishData = {
          data: 'FAILED'
        };
        console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_resizePromise_0100 this.softKeyboardPanel is null');
        commoneventmanager.publish('Sub_Misc_inputMethod_Panel_resizePromise_0100', commonEventPublishData, this.publishCallback);
      }
    } catch (error) {
      commonEventPublishData = {
        data: 'FAILED'
      };
      console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_resizePromise_0100 catch error: ' + JSON.stringify(error));
      commoneventmanager.publish('Sub_Misc_inputMethod_Panel_resizePromise_0100', commonEventPublishData, this.publishCallback);
    }
  }

  private Sub_Misc_inputMethod_Panel_moveToCallback_0110(): void {
    let commonEventPublishData;
    console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_moveToCallback_0110 success');
    try {
      if (this.softKeyboardPanel !== null) {
        this.softKeyboardPanel.moveTo(100, 100, async (err, data) => {
          console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_moveToCallback_0110 moveTo');
          if (err) {
            commonEventPublishData = {
              data: 'FAILED'
            };
            console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_moveToCallback_0110 moveTo error: ' + JSON.stringify(err));
            commoneventmanager.publish('Sub_Misc_inputMethod_Panel_moveToCallback_0110', commonEventPublishData, this.publishCallback);
          } else {
            commonEventPublishData = {
              data: 'SUCCESS'
            };
            console.info(TAG + '====>Sub_Misc_inputMethod_Panel_moveToCallback_0110 Succeed in moving the panel: ' + JSON.stringify(data));
          }
          commoneventmanager.publish('Sub_Misc_inputMethod_Panel_moveToCallback_0110', commonEventPublishData, this.publishCallback);
        });
      } else {
        commonEventPublishData = {
          data: 'FAILED'
        };
        console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_moveToCallback_0110 this.softKeyboardPanel is null');
        commoneventmanager.publish('Sub_Misc_inputMethod_Panel_moveToCallback_0110', commonEventPublishData, this.publishCallback);
      }
    } catch (error) {
      commonEventPublishData = {
        data: 'FAILED'
      };
      console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_moveToCallback_0110 catch error: ' + JSON.stringify(error));
      commoneventmanager.publish('Sub_Misc_inputMethod_Panel_moveToCallback_0110', commonEventPublishData, this.publishCallback);
    }
  }

  private Sub_Misc_inputMethod_Panel_moveToPromise_0120(): void {
    let commonEventPublishData;
    console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_moveToPromise_0120 success');
    try {
      if (this.softKeyboardPanel !== null) {
        this.softKeyboardPanel.moveTo(100, 100).then(async (data) => {
          commonEventPublishData = {
            data: 'SUCCESS'
          };
          console.info(TAG + '====>Sub_Misc_inputMethod_Panel_moveToPromise_0120 Succeed in moving the panel: ' + JSON.stringify(data));
          commoneventmanager.publish('Sub_Misc_inputMethod_Panel_moveToPromise_0120', commonEventPublishData, this.publishCallback);
        }).catch(async (err) => {
          commonEventPublishData = {
            data: 'FAILED'
          };
          console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_moveToPromise_0120 moveTo error: ' + JSON.stringify(err));
          commoneventmanager.publish('Sub_Misc_inputMethod_Panel_moveToPromise_0120', commonEventPublishData, this.publishCallback);
        });
      } else {
        commonEventPublishData = {
          data: 'FAILED'
        };
        console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_moveToPromise_0120 this.softKeyboardPanel is null');
        commoneventmanager.publish('Sub_Misc_inputMethod_Panel_moveToPromise_0120', commonEventPublishData, this.publishCallback);
      }
    } catch (error) {
      commonEventPublishData = {
        data: 'FAILED'
      };
      console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_moveToPromise_0120 catch error: ' + JSON.stringify(error));
      commoneventmanager.publish('Sub_Misc_inputMethod_Panel_moveToPromise_0120', commonEventPublishData, this.publishCallback);
    }
  }

  private Sub_Misc_inputMethod_Panel_showCallback_0130(): void {
    let commonEventPublishData;
    console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_showCallback_0130 success');
    try {
      if (this.softKeyboardPanel !== null) {
        this.softKeyboardPanel.show(async (err, data) => {
          console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_showCallback_0130 show');
          if (err) {
            commonEventPublishData = {
              data: 'FAILED'
            };
            console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_showCallback_0130 show error: ' + JSON.stringify(err));
            commoneventmanager.publish('Sub_Misc_inputMethod_Panel_showCallback_0130', commonEventPublishData, this.publishCallback);
          } else {
            commonEventPublishData = {
              data: 'SUCCESS'
            };
            console.info(TAG + '====>Sub_Misc_inputMethod_Panel_showCallback_0130 Succeed in showing the panel: ' + JSON.stringify(data));
          }
          commoneventmanager.publish('Sub_Misc_inputMethod_Panel_showCallback_0130', commonEventPublishData, this.publishCallback);
        });
      } else {
        commonEventPublishData = {
          data: 'FAILED'
        };
        console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_showCallback_0130 this.softKeyboardPanel is null');
        commoneventmanager.publish('Sub_Misc_inputMethod_Panel_showCallback_0130', commonEventPublishData, this.publishCallback);
      }
    } catch (error) {
      commonEventPublishData = {
        data: 'FAILED'
      };
      console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_showCallback_0130 catch error: ' + JSON.stringify(error));
      commoneventmanager.publish('Sub_Misc_inputMethod_Panel_showCallback_0130', commonEventPublishData, this.publishCallback);
    }
  }

  private Sub_Misc_inputMethod_Panel_showPromise_0140(): void {
    let commonEventPublishData;
    console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_showPromise_0140 success');
    try {
      if (this.softKeyboardPanel !== null) {
        this.softKeyboardPanel.show().then(async (data) => {
          commonEventPublishData = {
            data: 'SUCCESS'
          };
          console.info(TAG + '====>Sub_Misc_inputMethod_Panel_showPromise_0140 Succeed in showing the panel: ' + JSON.stringify(data));
          commoneventmanager.publish('Sub_Misc_inputMethod_Panel_showPromise_0140', commonEventPublishData, this.publishCallback);
        }).catch(async (err) => {
          commonEventPublishData = {
            data: 'FAILED'
          };
          console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_showPromise_0140 show error: ' + JSON.stringify(err));
          commoneventmanager.publish('Sub_Misc_inputMethod_Panel_showPromise_0140', commonEventPublishData, this.publishCallback);
        });
      } else {
        commonEventPublishData = {
          data: 'FAILED'
        };
        console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_showPromise_0140 this.softKeyboardPanel is null');
        commoneventmanager.publish('Sub_Misc_inputMethod_Panel_showPromise_0140', commonEventPublishData, this.publishCallback);
      }
    } catch (error) {
      commonEventPublishData = {
        data: 'FAILED'
      };
      console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_showPromise_0140 catch error: ' + JSON.stringify(error));
      commoneventmanager.publish('Sub_Misc_inputMethod_Panel_showPromise_0140', commonEventPublishData, this.publishCallback);
    }
  }

  private Sub_Misc_inputMethod_Panel_hideCallback_0150(): void {
    let commonEventPublishData;
    console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_hideCallback_0150 success');
    try {
      if (this.softKeyboardPanel !== null) {
        this.softKeyboardPanel.hide(async (err, data) => {
          console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_hideCallback_0150 hide');
          if (err) {
            commonEventPublishData = {
              data: 'FAILED'
            };
            console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_hideCallback_0150 hide error: ' + JSON.stringify(err));
            commoneventmanager.publish('Sub_Misc_inputMethod_Panel_hideCallback_0150', commonEventPublishData, this.publishCallback);
          } else {
            commonEventPublishData = {
              data: 'SUCCESS'
            };
            console.info(TAG + '====>Sub_Misc_inputMethod_Panel_hideCallback_0150 Succeed in hiding the panel: ' + JSON.stringify(data));
          }
          commoneventmanager.publish('Sub_Misc_inputMethod_Panel_hideCallback_0150', commonEventPublishData, this.publishCallback);
        });
      } else {
        commonEventPublishData = {
          data: 'FAILED'
        };
        console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_hideCallback_0150 this.softKeyboardPanel is null');
        commoneventmanager.publish('Sub_Misc_inputMethod_Panel_hideCallback_0150', commonEventPublishData, this.publishCallback);
      }
    } catch (error) {
      commonEventPublishData = {
        data: 'FAILED'
      };
      console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_hideCallback_0150 catch error: ' + JSON.stringify(error));
      commoneventmanager.publish('Sub_Misc_inputMethod_Panel_hideCallback_0150', commonEventPublishData, this.publishCallback);
    }
  }

  private Sub_Misc_inputMethod_Panel_hidePromise_0160(): void {
    let commonEventPublishData;
    console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_hidePromise_0160 success');
    try {
      if (this.softKeyboardPanel !== null) {
        this.softKeyboardPanel.hide().then(async (data) => {
          commonEventPublishData = {
            data: 'SUCCESS'
          };
          console.info(TAG + '====>Sub_Misc_inputMethod_Panel_hidePromise_0160 Succeed in hiding the panel: ' + JSON.stringify(data));
          commoneventmanager.publish('Sub_Misc_inputMethod_Panel_hidePromise_0160', commonEventPublishData, this.publishCallback);
        }).catch(async (err) => {
          commonEventPublishData = {
            data: 'FAILED'
          };
          console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_hidePromise_0160 hide error: ' + JSON.stringify(err));
          commoneventmanager.publish('Sub_Misc_inputMethod_Panel_hidePromise_0160', commonEventPublishData, this.publishCallback);
        });
      } else {
        commonEventPublishData = {
          data: 'FAILED'
        };
        console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_hidePromise_0160 this.softKeyboardPanel is null');
        commoneventmanager.publish('Sub_Misc_inputMethod_Panel_hidePromise_0160', commonEventPublishData, this.publishCallback);
      }
    } catch (error) {
      commonEventPublishData = {
        data: 'FAILED'
      };
      console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_hidePromise_0160 catch error: ' + JSON.stringify(error));
      commoneventmanager.publish('Sub_Misc_inputMethod_Panel_hidePromise_0160', commonEventPublishData, this.publishCallback);
    }
  }

  private async Sub_Misc_inputMethod_Panel_onShow_0170(): Promise<void> {
    let commonEventPublishData;
    console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_onShow_0170 success');
    try {
      if (this.softKeyboardPanel !== null) {
        this.softKeyboardPanel.on('show', async () => {
          commonEventPublishData = {
            data: 'SUCCESS'
          };
          this.softKeyboardPanel.off('show');
          console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_onShow_0170 onShow error: ');
          console.info(TAG + '====>Sub_Misc_inputMethod_Panel_onShow_0170 Succeed onShow: ');
          commoneventmanager.publish('Sub_Misc_inputMethod_Panel_onShow_0170', commonEventPublishData, this.publishCallback);
        });
        await this.softKeyboardPanel.show();
      } else {
        commonEventPublishData = {
          data: 'FAILED'
        };
        console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_onShow_0170 this.softKeyboardPanel is null');
        commoneventmanager.publish('ub_Misc_inputMethod_Panel_onShow_0170', commonEventPublishData, this.publishCallback);
      }
    } catch (error) {
      commonEventPublishData = {
        data: 'FAILED'
      };
      console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_onShow_0170 catch error: ' + JSON.stringify(error));
      commoneventmanager.publish('Sub_Misc_inputMethod_Panel_onShow_0170', commonEventPublishData, this.publishCallback);
    }
  }

  private async Sub_Misc_inputMethod_Panel_onHide_0180(): Promise<void> {
    let commonEventPublishData;
    console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_onHide_0180 success');
    try {
      if (this.softKeyboardPanel !== null) {
        this.softKeyboardPanel.on('hide', async () => {
          commonEventPublishData = {
            data: 'SUCCESS'
          };
          console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_onHide_0180 onHide');
          this.softKeyboardPanel.off('hide');
          console.info(TAG + '====>Sub_Misc_inputMethod_Panel_onHide_0180 Succeed onHide:');
          commoneventmanager.publish('Sub_Misc_inputMethod_Panel_onHide_0180', commonEventPublishData, this.publishCallback);
        });
        await this.softKeyboardPanel.hide();
      } else {
        commonEventPublishData = {
          data: 'FAILED'
        };
        console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_onHide_0180 this.softKeyboardPanel is null');
        commoneventmanager.publish('Sub_Misc_inputMethod_Panel_onHide_0180', commonEventPublishData, this.publishCallback);
      }
    } catch (error) {
      commonEventPublishData = {
        data: 'FAILED'
      };
      console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_onHide_0180 catch error: ' + JSON.stringify(error));
      commoneventmanager.publish('Sub_Misc_inputMethod_Panel_onHide_0180', commonEventPublishData, this.publishCallback);
    }
  }

  private Sub_Misc_inputMethod_Panel_offShow_0190(): void {
    let commonEventPublishData = {
      data: 'FAILED'
    };
    let count = 0;
    let timeCount = 0;
    console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_offShow_0190 success');
    try {
      if (this.softKeyboardPanel !== null) {
        this.softKeyboardPanel.on('show', async (err, data) => {
          console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_offShow_0190 offShow if success: ' + JSON.stringify(err));
          this.softKeyboardPanel.off('show');
          count += 1;
          console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_offShow_0190 off Show count: ' + count);
        });
        let t1 = setInterval(async () => {
          await this.softKeyboardPanel.show();
          await this.softKeyboardPanel.hide();
          timeCount += 1;
          console.info(TAG + '====>this.softKeyboardPanel.show setInterval timeCount: ' + timeCount);
          if (timeCount === 2) {
            clearInterval(t1);
          }
        }, 100);

        let t2 = setTimeout(() => {
          console.info(TAG + '====>setTimeout count: ' + count);
          if (count === 1) {
            commonEventPublishData = {
              data: 'SUCCESS'
            };
          }
          commoneventmanager.publish('Sub_Misc_inputMethod_Panel_offShow_0190', commonEventPublishData, this.publishCallback);
          clearTimeout(t2);
        }, 500);

      } else {
        commonEventPublishData = {
          data: 'FAILED'
        };
        console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_offShow_0190 this.softKeyboardPanel is null');
        commoneventmanager.publish('Sub_Misc_inputMethod_Panel_offShow_0190', commonEventPublishData, this.publishCallback);
      }
    } catch (error) {
      commonEventPublishData = {
        data: 'FAILED'
      };
      console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_offShow_0190 catch error: ' + JSON.stringify(error));
      commoneventmanager.publish('Sub_Misc_inputMethod_Panel_offShow_0190', commonEventPublishData, this.publishCallback);
    }
  }

  private Sub_Misc_inputMethod_Panel_offHide_0200(): void {
    let commonEventPublishData = {
      data: 'FAILED'
    };
    let count = 0;
    let timeCount = 0;
    console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_offHide_0200 success');
    try {
      if (this.softKeyboardPanel !== null) {
        this.softKeyboardPanel.on('hide', async (err, data) => {
          console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_offHide_0200 offHide if success: ' + JSON.stringify(err));
          this.softKeyboardPanel.off('hide');
          count += 1;
          console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_offHide_0200 off hide count: ' + count);
        });

        let t1 = setInterval(async () => {
          ;
          await this.softKeyboardPanel.show();
          await this.softKeyboardPanel.hide();
          timeCount += 1;
          console.info(TAG + '====>this.softKeyboardPanel.hide setInterval timeCount: ' + timeCount);
          if (timeCount === 2) {
            clearInterval(t1);
          }
        }, 300);

        let t2 = setTimeout(() => {
          console.info(TAG + '====>setTimeout count: ' + count);
          if (count === 1) {
            commonEventPublishData = {
              data: 'SUCCESS'
            };
          }
          commoneventmanager.publish('Sub_Misc_inputMethod_Panel_offHide_0200', commonEventPublishData, this.publishCallback);
          clearTimeout(t2);
        }, 1000);

      } else {
        commonEventPublishData = {
          data: 'FAILED'
        };
        console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_offHide_0200 this.softKeyboardPanel is null');
        commoneventmanager.publish('Sub_Misc_inputMethod_Panel_offHide_0200', commonEventPublishData, this.publishCallback);
      }
    } catch (error) {
      commonEventPublishData = {
        data: 'FAILED'
      };
      console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_offHide_0200 catch error: ' + JSON.stringify(error));
      commoneventmanager.publish('Sub_Misc_inputMethod_Panel_offHide_0200', commonEventPublishData, this.publishCallback);
    }
  }

  private Sub_Misc_inputMethod_Panel_changeFlag_0210(): void {
    let commonEventPublishData = {
      data: 'FAILED'
    };
    console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_changeFlag_0210 success');
    try {
      if (this.softKeyboardPanel !== null) {
        try {
          this.softKeyboardPanel.changeFlag(1);
          commonEventPublishData = {
            data: 'SUCCESS'
          };
          commoneventmanager.publish('Sub_Misc_inputMethod_Panel_changeFlag_0210', commonEventPublishData, this.publishCallback);
        } catch (err) {
          console.info(TAG + '====>Sub_Misc_inputMethod_Panel_changeFlag_0210 throw_error: ' + err);
        }

      } else {
        commonEventPublishData = {
          data: 'FAILED'
        };
        console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_changeFlag_0210 this.softKeyboardPanel is null');
        commoneventmanager.publish('Sub_Misc_inputMethod_Panel_changeFlag_0210', commonEventPublishData, this.publishCallback);
      }
    } catch (error) {
      commonEventPublishData = {
        data: 'FAILED'
      };
      console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_changeFlag_0210 catch error: ' + JSON.stringify(error));
      commoneventmanager.publish('Sub_Misc_inputMethod_Panel_changeFlag_0210', commonEventPublishData, this.publishCallback);
    }
  }

  private Sub_Misc_inputMethod_Panel_changeFlag_0211(): void {
    let commonEventPublishData = {
      data: 'FAILED'
    };
    console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_changeFlag_0211 success');
    try {
      if (this.softKeyboardPanel !== null) {
        try {
          let fla_fixed = inputmethodengine.PanelFlag.FLG_FIXED;
          let fla_floating = inputmethodengine.PanelFlag.FLG_FLOATING;
          this.softKeyboardPanel.changeFlag(fla_fixed);
          console.info(TAG + '====>Sub_Misc_inputMethod_Panel_changeFlag_0211 switch to fla_fixed');
          this.softKeyboardPanel.changeFlag(fla_floating);
          console.info(TAG + '====>Sub_Misc_inputMethod_Panel_changeFlag_0211 switch to fla_floating');
          commonEventPublishData = {
            data: 'SUCCESS'
          };
        } catch (err) {
          console.info(TAG + '====>Sub_Misc_inputMethod_Panel_changeFlag_0211 throw_error: ' + err);
        }
      } else {
        console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_changeFlag_0211 this.softKeyboardPanel is null');
      }
      commoneventmanager.publish('Sub_Misc_inputMethod_Panel_changeFlag_0211', commonEventPublishData, this.publishCallback);
    } catch (error) {
      console.info(TAG + '====>receive Sub_Misc_inputMethod_Panel_changeFlag_0211 catch error: ' + JSON.stringify(error));
      commoneventmanager.publish('Sub_Misc_inputMethod_Panel_changeFlag_0211', commonEventPublishData, this.publishCallback);
    }
  }

  private Sub_InputMethod_IMF_SecurityKeyboard_0600(): void {
    let commonEventPublishData = {
      data: 'FAILED'
    };
    console.info(TAG + '====>Sub_InputMethod_IMF_SecurityKeyboard_0600 success');
    try {
      if (this.softKeyboardPanel !== null) {
        try {
          let isPrivacyMode: boolean = true;
          this.softKeyboardPanel.setPrivacyMode(isPrivacyMode);
          console.info(TAG + '====>Sub_InputMethod_IMF_SecurityKeyboard_0600 success switch to PrivacyMode');
          commonEventPublishData = {
            data: 'SUCCESS'
          };
        } catch (err) {
          console.info(TAG + '====>Sub_InputMethod_IMF_SecurityKeyboard_0600 Failed to set privacy mode' + err);
          commonEventPublishData = {
            data: 'FAILED'
          };
        }
      } else {
        console.info(TAG + '====>Sub_InputMethod_IMF_SecurityKeyboard_0600 this.softKeyboardPanel is null');
      }
      commoneventmanager.publish('Sub_InputMethod_IMF_SecurityKeyboard_0600', commonEventPublishData, this.publishCallback);
    } catch (error) {
      console.info(TAG + '====>Sub_InputMethod_IMF_SecurityKeyboard_0600 catch error: ' + JSON.stringify(error));
      commoneventmanager.publish('Sub_InputMethod_IMF_SecurityKeyboard_0600', commonEventPublishData, this.publishCallback);
    }
  }

  private Sub_InputMethod_IMF_SecurityKeyboard_0700(): void {
    let commonEventPublishData = {
      data: 'FAILED'
    };
    console.info(TAG + '====>Sub_InputMethod_IMF_SecurityKeyboard_0700 success');
    try {
      if (this.softKeyboardPanel !== null) {
        try {
          let isPrivacyMode: boolean = false;
          this.softKeyboardPanel.setPrivacyMode(isPrivacyMode);
          console.info(TAG + '====>Sub_InputMethod_IMF_SecurityKeyboard_0700 success switch to PrivacyMode');
          commonEventPublishData = {
            data: 'SUCCESS'
          };
        } catch (err) {
          console.info(TAG + '====>Sub_InputMethod_IMF_SecurityKeyboard_0700 Failed to set privacy mode' + err);
          commonEventPublishData = {
            data: 'FAILED'
          };
        }
      } else {
        console.info(TAG + '====>Sub_InputMethod_IMF_SecurityKeyboard_0700 this.softKeyboardPanel is null');
      }
      commoneventmanager.publish('Sub_InputMethod_IMF_SecurityKeyboard_0700', commonEventPublishData, this.publishCallback);
    } catch (error) {
      console.info(TAG + '====>Sub_InputMethod_IMF_SecurityKeyboard_0700 catch error: ' + JSON.stringify(error));
      commoneventmanager.publish('Sub_InputMethod_IMF_SecurityKeyboard_0700', commonEventPublishData, this.publishCallback);
    }
  }

  private Sub_InputMethod_IMF_SecurityKeyboard_0800(): void {
    let commonEventPublishData = {
      data: 'FAILED'
    };
    console.info(TAG + '====>Sub_InputMethod_IMF_SecurityKeyboard_0800 success');
    try {
      if (this.softKeyboardPanel !== null) {
        try {
          let isPrivacyMode: boolean = undefined;
          this.softKeyboardPanel.setPrivacyMode(isPrivacyMode);
          console.info(TAG + '====>Sub_InputMethod_IMF_SecurityKeyboard_0800 success switch to PrivacyMode');
        } catch (err) {
          console.info(TAG + '====>Sub_InputMethod_IMF_SecurityKeyboard_0800 Failed to set privacy mode catch: ' + err);
          if (err.code === 401) {
            console.info(TAG + '====>Sub_InputMethod_IMF_SecurityKeyboard_0800 Failed to set privacy mode002: ' + err);
            commonEventPublishData = {
              data: 'SUCCESS'
            };
          }
        }
      } else {
        console.info(TAG + '====>Sub_InputMethod_IMF_SecurityKeyboard_0800 this.softKeyboardPanel is null');
      }
      commoneventmanager.publish('Sub_InputMethod_IMF_SecurityKeyboard_0800', commonEventPublishData, this.publishCallback);
    } catch (error) {
      console.info(TAG + '====>Sub_InputMethod_IMF_SecurityKeyboard_0800 catch error: ' + JSON.stringify(error));
      commoneventmanager.publish('Sub_InputMethod_IMF_SecurityKeyboard_0800', commonEventPublishData, this.publishCallback);
    }
  }

  private Sub_InputMethod_IMF_getSecurityMode_0100(): void {
    let commonEventPublishData = {
      data: 'FAILED'
    };
    console.info(TAG + '====>receive Sub_InputMethod_IMF_getSecurityMode_0100 success');
    try {
      let mode1: inputmethodengine.SecurityMode = inputMethodAbility.getSecurityMode();
      if (mode1 === inputmethodengine.SecurityMode.BASIC || mode1 === inputmethodengine.SecurityMode.FULL) {
        console.info(TAG + '====>getSecurityMode, securityMode is : ${mode1}');
        commonEventPublishData = {
          data: 'SUCCESS'
        };
        commoneventmanager.publish('Sub_InputMethod_IMF_getSecurityMode_0100', commonEventPublishData, this.publishCallback);
      } else {
        commonEventPublishData = {
          data: 'FAILED'
        };
        console.info(TAG + '====>Failed to getSecurityMode: ${JSON.stringify(err)}');
      }
    } catch (error) {
      commonEventPublishData = {
        data: 'FAILED'
      };
      console.info(TAG + '====>receive Sub_InputMethod_IMF_getSecurityMode_0100 catch error: ' + JSON.stringify(error));
      commoneventmanager.publish('Sub_InputMethod_IMF_getSecurityMode_0100', commonEventPublishData, this.publishCallback);
    }
  }

  private async SUB_InputMethod_IME_SplitScreen_0100(): Promise<void> {
    let commonEventPublishData = {
      data: 'FAILED'
    };
    console.info(TAG + '====>SUB_InputMethod_IME_SplitScreen_0100 start');
    try {
      if (this.softKeyboardPanel !== null) {
        console.info(TAG + '====>SUB_InputMethod_IME_SplitScreen_0100 this.softKeyboardPanel:' + this.softKeyboardPanel);
        let t = setTimeout(async () => {
          clearTimeout(t);
          try {
            let WindowInfo = await this.InputClient.getCallingWindowInfo();
            console.info(TAG + '====>SUB_InputMethod_IME_SplitScreen_0100 getCallingWindowInfo WindowInfo:' + JSON.stringify(WindowInfo));
            console.info(TAG + '====>SUB_InputMethod_IME_SplitScreen_0100 getCallingWindowInfo  rect: ' + JSON.stringify(WindowInfo.rect));
            console.info(TAG + '====>SUB_InputMethod_IME_SplitScreen_0100 getCallingWindowInfo  status: ' + JSON.stringify(WindowInfo.status));
            if (typeof (WindowInfo) === 'object' && typeof (WindowInfo.rect) === 'object' && typeof (WindowInfo.status) === 'number') {
              commonEventPublishData = {
                data: "SUCCESS"
              }
            }
            console.info(TAG + '====>SUB_InputMethod_IME_SplitScreen_0100 getCallingWindowInfo WindowInfo:  success');
          } catch (err) {
            console.info(TAG + '====>SUB_InputMethod_IME_SplitScreen_0100 getCallingWindowInf0 err: ' + JSON.stringify(err.message));
            console.info(TAG + '====>SUB_InputMethod_IME_SplitScreen_0100 getCallingWindowInf0 err: ' + JSON.stringify(err.code));
            console.info(TAG + '====>SUB_InputMethod_IME_SplitScreen_0100 getCallingWindowInfO err: ' + err);
          }
          commoneventmanager.publish("SUB_InputMethod_IME_SplitScreen_0100", commonEventPublishData, this.publishCallback);

        }, 500);

      } else {
        console.info(TAG + '====>SUB_InputMethod_IME_SplitScreen_0100 getCallingWindowInfo softKeyboardPanel is null ');
      }

    } catch (error) {
      console.info(TAG + '====>SUB_InputMethod_IME_SplitScreen_0100 catch error: ' + JSON.stringify(error.message));
      console.info(TAG + '====>SUB_InputMethod_IME_SplitScreen_0100 catch error: ' + JSON.stringify(error.code))
      commoneventmanager.publish('SUB_InputMethod_IME_SplitScreen_0100', commonEventPublishData, this.publishCallback);
    }
  }

  private async Sub_InputMethod_IME_ScreenRotation_0100() {
    console.info(TAG + '====>receive Sub_InputMethod_IME_ScreenRotation_0100 data');
    let commonEventPublishData = {
        data: "FAILED"
    };
    try{
        let keyboardRect: inputMethodEngine.PanelRect = {
            landscapeRect: { left: 100, top: 100, width: this.display_info.width, height: this.display_info.height*0.4},
            portraitRect: { left: 100, top: 100, width: this.display_info.height*0.4, height: this.display_info.width}
        }
        this.softKeyboardPanel.adjustPanelRect(inputMethodEngine.PanelFlag.FLG_FIXED, keyboardRect);
        commonEventPublishData = {
          data: "SUCCESS"
        }
        console.info(TAG + '====>Sub_InputMethod_IME_ScreenRotation_0100 startAbility success' );
    } catch (err) {
        console.info(TAG + '====>Sub_InputMethod_IME_ScreenRotation_0100 err: ' + JSON.stringify(err));
    }
    commoneventmanager.publish("Sub_InputMethod_IME_ScreenRotation_0100", commonEventPublishData, this.publishCallback);
  }

  private async Sub_InputMethod_IME_ScreenRotation_0200() {
    console.info(TAG + '====>receive Sub_InputMethod_IME_ScreenRotation_0200 data');
    let commonEventPublishData = {
        data: "FAILED"
    };
    try{
        let keyboardRect: inputMethodEngine.PanelRect = {
            landscapeRect: { left: 100, top: 100, width: this.display_info.width, height: this.display_info.height*0.4},
            portraitRect: { left: 100, top: 100, width: this.display_info.height*0.4, height: this.display_info.width}
        }
        this.softKeyboardPanel.adjustPanelRect(inputMethodEngine.PanelFlag.FLG_FLOATING, keyboardRect);
        commonEventPublishData = {
          data: "SUCCESS"
        }
        console.info(TAG + '====>Sub_InputMethod_IME_ScreenRotation_0200 startAbility success' );
    } catch (err) {
        console.info(TAG + '====>Sub_InputMethod_IME_ScreenRotation_0200 err: ' + JSON.stringify(err));
    }
    commoneventmanager.publish("Sub_InputMethod_IME_ScreenRotation_0200", commonEventPublishData, this.publishCallback);
  }  
}