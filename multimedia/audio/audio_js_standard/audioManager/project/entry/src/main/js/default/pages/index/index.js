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

import file from '@system.file'
import app from '@system.app'

import {Core, ExpectExtend, ReportExtend} from 'deccjsunit/index';
import audio from '@ohos.multimedia.audio';

console.log('AudioFrameworkTest: Create AudioManger Object HTML');
const audioManagerHTML = audio.getAudioManager();
var deviceRoleValue = null;
var deviceTypeValue = null;

function sleep (ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
}

function displayDeviceProp(value, index, array) {
    console.info(`AudioFrameworkTest: device role: ${value.deviceRole}`);
    deviceRoleValue = value.deviceRole;
    console.info(`AudioFrameworkTest: device type: ${value.deviceType}`);
    deviceTypeValue = value.deviceType;

}

export default {
    data: {
        title: ""
    },
    async getkv(){
        audioManagerHTML.getVolume(3).then(function (data) {
            console.info('AudioFrameworkTest: Media getVolume Promise: ' + data);
        });
        audioManagerHTML.getVolume(2).then(function (data) {
            console.info('AudioFrameworkTest: Ringtone getVolume Promise: ' + data);
        });
        audioManagerHTML.getRingerMode().then(function (value){
            if(value==2){
                console.info('AudioFrameworkTest: RingerMode RINGER_MODE_NORMAL: ' +value);
            }
            else if(value==0){
                console.info('AudioFrameworkTest: RingerMode RINGER_MODE_SILENT: ' +value);
            }
            else if(value==1){
                console.info('AudioFrameworkTest: RingerMode RINGER_MODE_VIBRATE: ' +value);
            }
            else {
                console.info('AudioFrameworkTest: RingerMode UNKNOWN: FAIL :' +value);
            }
        });

        audioManagerHTML.getVolume(audio.AudioVolumeType.MEDIA).then(function (data) {
            console.info('AudioFrameworkTest: Media getVolume Promise: ENAME: ' + data);
        });
        audioManagerHTML.getVolume(audio.AudioVolumeType.RINGTONE).then(function (data) {
            console.info('AudioFrameworkTest: Ringtone getVolume Promise: ENAME: ' + data);
        });
    },

    async setvolmedia1(){
        audioManagerHTML.setVolume(audio.AudioVolumeType.MEDIA,1).then(function (data) {
            console.info('AudioFrameworkTest: Media setVolume promise: successful');

            audioManagerHTML.getVolume(audio.AudioVolumeType.MEDIA).then(function (data) {
                if(data == 1){
                    console.info('AudioFrameworkTest: Media getVolume Promise: PASS :' + data);
                }
                else{
                    console.info('AudioFrameworkTest: Media getVolume Promise: FAIL :' + data);
                }

                });
            });

    },

    async setvolmedia2(){
        audioManagerHTML.setVolume(audio.AudioVolumeType.MEDIA,7, (err, value) => {
            if (err) {
                console.error(`AudioFrameworkTest: failed to set volume: Callback:  ${err.message}`);
                return;
            }
            console.info(`AudioFrameworkTest: callback :  Media setVolume successful `);
            audioManagerHTML.getVolume(audio.AudioVolumeType.MEDIA, (err, value) => {
                if (err) {
                    console.error(`AudioFrameworkTest: callback : Media: failed to get volume ${err.message}`);
                    return;
                }
                if(value == 7){
                    console.info('AudioFrameworkTest: callback : Media getVolume: PASS :' + value);
                }
                else{
                    console.info('AudioFrameworkTest: callback : Media getVolume: FAIL :' + value);
                }
                
                });            
            // audioManagerHTML.getVolume(audio.AudioVolumeType.MEDIA, (err, value) => {
            //     if (err) {
            //         console.error(`AudioFrameworkTest: callback : Media: parseFloat: failed to get volume ${err.message}`);
            //         return;
            //     }
            //     var num1 = parseFloat(value).toFixed(1);
            //     if(num1 == 0.7){
            //         console.info('AudioFrameworkTest: Media getVolume Promise: parseFloat: PASS :' + num1);
            //     }
            //     else{
            //         console.info('AudioFrameworkTest: Media getVolume Promise: parseFloat: FAIL :' + num1);
            //     }
            // }); 
        });

    },
    async setvolmedia12(){
        audioManagerHTML.setVolume(audio.AudioVolumeType.MEDIA,12.8).then(function (data) {
            console.info('AudioFrameworkTest: Media setVolume promise: successful');

            audioManagerHTML.getVolume(audio.AudioVolumeType.MEDIA).then(function (data) {
                if(data == 12){
                    console.info('AudioFrameworkTest: Media getVolume Promise: PASS :' + data);
                }
                else{
                    console.info('AudioFrameworkTest: Media getVolume Promise: FAIL :' + data);
                }

                });
            });

    },

    async setvolmedia100(){
        audioManagerHTML.setVolume(audio.AudioVolumeType.MEDIA,100, (err, value) => {
            if (err) {
                console.error(`AudioFrameworkTest: failed to set volume: Callback: VOL LEVEL 100: ${err.message}`);
                return;
            }
            console.info(`AudioFrameworkTest: callback : VOL LEVEL 100: Media setVolume successful `);
            audioManagerHTML.getVolume(audio.AudioVolumeType.MEDIA, (err, value) => {
                if (err) {
                    console.error(`AudioFrameworkTest: callback : Media: VOL LEVEL 100: failed to get volume ${err.message}`);
                    return;
                }
                if(value == 100){
                    console.info('AudioFrameworkTest: callback : Media getVolume: VOL LEVEL 100: PASS :' + value);
                }
                else{
                    console.info('AudioFrameworkTest: callback : Media getVolume: VOL LEVEL 100: FAIL :' + value);
                }
                
                });            
        });

    },
    async setmaxvolm(){
        audioManagerHTML.setVolume(audio.AudioVolumeType.MEDIA,15, (err, value) => {
            if (err) {
                console.error(`AudioFrameworkTest: failed to set volume: Callback: Media: VOL LEVEL 1: ${err.message}`);
                return;
            }
            console.info(`AudioFrameworkTest: callback :  Setting MAX Volume: Media setVolume successful `);
            audioManagerHTML.getVolume(audio.AudioVolumeType.MEDIA, (err, value) => {
                if (err) {
                    console.error(`AudioFrameworkTest: callback : Media: Setting MAX Volume: failed to get volume ${err.message}`);
                    return;
                }
                if(value == 15){
                    console.info('AudioFrameworkTest: callback : Media getVolume:  Setting MAX Volume: PASS :' + value);
                }
                else{
                    console.info('AudioFrameworkTest: callback : Media getVolume:  Setting MAX Volume: FAIL :' + value);
                }
            });            
        });
    },
    async setmaxvolr(){
        audioManagerHTML.setVolume(audio.AudioVolumeType.RINGTONE,15, (err, value) => {
            if (err) {
                console.error(`AudioFrameworkTest: failed to set volume: Callback: Ringtone:  Setting MAX Volume: ${err.message}`);
                return;
            }
            console.info(`AudioFrameworkTest: callback :  Setting MAX Volume: Ringtone setVolume successful `);
            audioManagerHTML.getVolume(audio.AudioVolumeType.RINGTONE, (err, value) => {
                if (err) {
                    console.error(`AudioFrameworkTest: callback : Ringtone:  Setting MAX Volume: failed to get volume ${err.message}`);
                    return;
                }
                if(value == 15){
                    console.info('AudioFrameworkTest: callback : Ringtone getVolume:  Setting MAX Volume: PASS :' + value);
                }
                else{
                    console.info('AudioFrameworkTest: callback : Ringtone getVolume:  Setting MAX Volume: FAIL :' + value);
                }
            });            
        });
    },
    async setminvolm(){
        audioManagerHTML.setVolume(audio.AudioVolumeType.MEDIA,0, (err, value) => {
            if (err) {
                console.error(`AudioFrameworkTest: failed to set volume: Callback: Media:  Setting MIN Volume: ${err.message}`);
                return;
            }
            console.info(`AudioFrameworkTest: callback : Setting MIN Volume: Media setVolume successful `);
            audioManagerHTML.getVolume(audio.AudioVolumeType.MEDIA, (err, value) => {
                if (err) {
                    console.error(`AudioFrameworkTest: callback : Media: Setting MIN Volume: failed to get volume ${err.message}`);
                    return;
                }
                if(value == 0){
                    console.info('AudioFrameworkTest: callback : Media getVolume: Setting MIN Volume: PASS :' + value);
                }
                else{
                    console.info('AudioFrameworkTest: callback : Media getVolume: Setting MIN Volume: FAIL :' + value);
                }
            });            
        });
    },
    async setminvolr(){
        audioManagerHTML.setVolume(audio.AudioVolumeType.RINGTONE,0, (err, value) => {
            if (err) {
                console.error(`AudioFrameworkTest: failed to set volume: Callback: Ringtone: Setting MIN Volume: ${err.message}`);
                return;
            }
            console.info(`AudioFrameworkTest: callback : Setting MIN Volume: Ringtone setVolume successful `);
            audioManagerHTML.getVolume(audio.AudioVolumeType.RINGTONE, (err, value) => {
                if (err) {
                    console.error(`AudioFrameworkTest: callback : Ringtone: Setting MIN Volume: failed to get volume ${err.message}`);
                    return;
                }
                if(value == 0){
                    console.info('AudioFrameworkTest: callback : Ringtone getVolume: Setting MIN Volume: PASS :' + value);
                }
                else{
                    console.info('AudioFrameworkTest: callback : Ringtone getVolume: Setting MIN Volume: FAIL :' + value);
                }
            });            
        });
    },
    
    async setvolring1 () {
        audioManagerHTML.setVolume(audio.AudioVolumeType.RINGTONE,2).then(function (data) {
            console.info('AudioFrameworkTest: Ringtone setVolume promise: successful');

            audioManagerHTML.getVolume(audio.AudioVolumeType.RINGTONE).then(function (data) {
                if(data == 2){
                    console.info('AudioFrameworkTest: Ringtone getVolume Promise: PASS :' + data);
                }
                else{
                    console.info('AudioFrameworkTest: Ringtone getVolume Promise: FAIL :' + data);
                }
                
                });
                        
            // audioManagerHTML.getVolume(audio.AudioVolumeType.RINGTONE).then(function (data) {
            //     var num1 = parseFloat(data).toFixed(1);
            //     if(num1 == 2){
            //         console.info('AudioFrameworkTest: Ringtone getVolume Promise: parseFloat: PASS :' + num1);
            //     }
            //     else{
            //         console.info('AudioFrameworkTest: Ringtone getVolume Promise: parseFloat: FAIL :' + num1);
            //     }
            // });    
        });
    },

    async maxvol(){
        audioManagerHTML.getMaxVolume(audio.AudioVolumeType.MEDIA).then(function (data) {
            if (data==15){
                console.info('AudioFrameworkTest: Media getMaxVolume promise : PASS:' + data);
            }
            else{
                console.info('AudioFrameworkTest: Media getMaxVolume promise : FAIL: ' + data);
            }
 
        });

        audioManagerHTML.getMaxVolume(audio.AudioVolumeType.RINGTONE).then(function (data) {
            if (data==15){
                console.info('AudioFrameworkTest: Ringtone getMaxVolume promise : PASS:' + data);
            }
            else{
                console.info('AudioFrameworkTest: Ringtone getMaxVolume promise : FAIL: ' + data);
            }

        });

        audioManagerHTML.getMaxVolume(audio.AudioVolumeType.MEDIA, (err, value) => {
            if (err) {
                console.error(`AudioFrameworkTest: callback : Media: failed to get MAXvolume ${err.message}`);
                return;
            }
            else if (value==15){
                console.info('AudioFrameworkTest: callback : Media:  getMaxVolume : PASS:' + value);
            }
            else{
                console.info('AudioFrameworkTest: callback : Media:  getMaxVolume : FAIL: ' + value);
            }
        });

        audioManagerHTML.getMaxVolume(audio.AudioVolumeType.RINGTONE, (err, value) => {
            if (err) {
                console.error(`AudioFrameworkTest: callback : Ringtone: failed to get MAXvolume ${err.message}`);
                return;
            }
            else if (value==15){
                console.info('AudioFrameworkTest: callback : Ringtone:  getMaxVolume : PASS:' + value);
            }
            else{
                console.info('AudioFrameworkTest: callback : Ringtone:  getMaxVolume : FAIL: ' + value);
            }
        });
        

    },

    async minvol(){
        audioManagerHTML.getMinVolume(audio.AudioVolumeType.MEDIA).then(function (data) {
            if (data==0){
                console.info('AudioFrameworkTest: Media getMinVolume promise : PASS:' + data);
            }
            else{
                console.info('AudioFrameworkTest: Media getMinVolume promise : FAIL: ' + data);
            }
 
        });

        audioManagerHTML.getMinVolume(audio.AudioVolumeType.RINGTONE).then(function (data) {
            if (data==0){
                console.info('AudioFrameworkTest: Ringtone getMinVolume promise : PASS:' + data);
            }
            else{
                console.info('AudioFrameworkTest: Ringtone getMinVolume promise : FAIL: ' + data);
            }
        });

        audioManagerHTML.getMinVolume(audio.AudioVolumeType.MEDIA, (err, value) => {
            if (err) {
                console.error(`AudioFrameworkTest: callback : Medoia: failed to get MINvolume ${err.message}`);
                return;
            }
            else if (value==0){
                console.info('AudioFrameworkTest: callback : Media:  getMinVolume : PASS:' + value);
            }
            else{
                console.info('AudioFrameworkTest: callback : Media:  getMinVolume : FAIL: ' + value);
            }
        });

        audioManagerHTML.getMinVolume(audio.AudioVolumeType.RINGTONE, (err, value) => {
            if (err) {
                console.error(`AudioFrameworkTest: callback : Ringtone: failed to get MINvolume ${err.message}`);
                return;
            }
            else if (value==0){
                console.info('AudioFrameworkTest: callback : Ringtone:  getMinVolume : PASS:' + value);
            }
            else{
                console.info('AudioFrameworkTest: callback : Ringtone:  getMinVolume : FAIL: ' + value);
            }
            
        });

    },
    async setvolring2 () {

        audioManagerHTML.setVolume(audio.AudioVolumeType.RINGTONE,8, (err, value) => {
            if (err) {
                console.error(`AudioFrameworkTest: callback : Ringtone: failed to set volume: ${err.message}`);
                return;
            }
            console.info(`AudioFrameworkTest: callback : Ringtone setVolume successful `);
            audioManagerHTML.getVolume(audio.AudioVolumeType.RINGTONE, (err, value) => {
                if (err) {
                    console.error(`AudioFrameworkTest: callback : Ringtone: failed to get volume ${err.message}`);
                    return;
                }
                if(value == 8){
                    console.info('AudioFrameworkTest: callback : Ringtone getVolume: PASS :' + value);
                }
                else{
                    console.info('AudioFrameworkTest: callback : Ringtone getVolume: FAIL :' + value);
                }
                });
        });

        
    },
    async setvolring9 () {

        audioManagerHTML.setVolume(audio.AudioVolumeType.RINGTONE,9.2, (err, value) => {
            if (err) {
                console.error(`AudioFrameworkTest: callback : Ringtone: failed to set volume: ${err.message}`);
                return;
            }
            console.info(`AudioFrameworkTest: callback : Ringtone setVolume successful `);
            audioManagerHTML.getVolume(audio.AudioVolumeType.RINGTONE, (err, value) => {
                if (err) {
                    console.error(`AudioFrameworkTest: callback : Ringtone: failed to get volume ${err.message}`);
                    return;
                }
                if(value == 9){
                    console.info('AudioFrameworkTest: callback : Ringtone getVolume: PASS :' + value);
                }
                else{
                    console.info('AudioFrameworkTest: callback : Ringtone getVolume: FAIL :' + value);
                }
                });
        });

        
    },
    async issetstreammutep () {
       audioManagerHTML.isMute(3).then(function (data) {
            console.log('AudioFrameworkTest: Promise: Is Stream Mute Media: '+data);
        });
        audioManagerHTML.isMute(2).then(function (data) {
            console.log('AudioFrameworkTest: Promise: Is Stream Mute Ringtone: '+data);
        });
    },
    async issetstreammutecb () {
        audioManagerHTML.isMute(audio.AudioVolumeType.MEDIA, (err, data) => {
            if (err) {
                console.error(`AudioFrameworkTest: Callback : Media : failed to get Mute Status ${err.message}`);
                return;
            }   
            else{
                console.log('AudioFrameworkTest: Callback : Is Stream Mute Media:'+data);
            }
        });
        audioManagerHTML.isMute(audio.AudioVolumeType.RINGTONE, (err, data) => {
        if (err) {
            console.error(`AudioFrameworkTest: Callback : RINGTONE : failed to get Mute Status ${err.message}`);
            return;
        }   
        else{
            console.log('AudioFrameworkTest: Callback : Is Stream Mute RINGTONE:'+data);
        }
        });
    },
    async setstreammutemp () {
       audioManagerHTML.mute(audio.AudioVolumeType.MEDIA,true).then(function (data) {
           console.log('AudioFrameworkTest: Set Stream Mute: Media: Promise: TRUE');
           audioManagerHTML.isMute(3).then(function (data) {
               if(data==true){
                    console.log('AudioFrameworkTest: Promise: Is Stream Mute Media: TRUE: PASS:'+data);
               }
               else{
                    console.log('AudioFrameworkTest: Promise: Is Stream Mute Media: TRUE: FAIL: '+data);
               }
            });
       });
    },

    async setstreammuterp () {

       audioManagerHTML.mute(audio.AudioVolumeType.RINGTONE,true).then(function (data) {
            console.log('AudioFrameworkTest: Set Stream Mute: Ringtone: Promise: TRUE');
            audioManagerHTML.isMute(2).then(function (data) {
                if(data==true){
                    console.log('AudioFrameworkTest: Promise: Is Stream Mute Ringtone: TRUE: PASS: '+data);
                }
                else{
                    console.log('AudioFrameworkTest: Promise: Is Stream Mute Ringtone: TRUE: FAIL: '+data);
                }
            });
        });
        
   },

   async setstreaunmmutemp () {
        audioManagerHTML.mute(audio.AudioVolumeType.MEDIA,false).then(function (data) {
            console.log('AudioFrameworkTest: Set Stream Mute: Media: Promise: FALSE');
            audioManagerHTML.isMute(3).then(function (data) {
                if(data==false){
                    console.log('AudioFrameworkTest: Promise: Is Stream Mute Media: FALSE: PASS: '+data);
                }
                else{
                    console.log('AudioFrameworkTest: Promise: Is Stream Mute Media: FALSE: FAIL: '+data);
                }
            });
        });
        
    },

    async setstreaunmmuterp (){

        audioManagerHTML.mute(audio.AudioVolumeType.RINGTONE,false).then(function (data) {
            console.log('AudioFrameworkTest: Set Stream Mute: Ringtone: FALSE');
            audioManagerHTML.isMute(2).then(function (data) {
                if(data==false){
                    console.log('AudioFrameworkTest: Promise: Is Stream Mute Ringtone: FALSE: PASS: '+data);
                }
                else{
                    console.log('AudioFrameworkTest: Promise: Is Stream Mute Ringtone: FALSE: FAIL: '+data);
                }
            });
        });  
   
    },

    async setstreammutemc () {
        audioManagerHTML.mute(audio.AudioVolumeType.MEDIA,true, (err, data) => {
            if (err) {
                console.error(`AudioFrameworkTest: Callback : TRUE: Media : failed to Set Mute Status ${err.message}`);
                return;
            }
             console.log('AudioFrameworkTest: Set Stream Mute: Media: Callback : TRUE');
             audioManagerHTML.isMute(audio.AudioVolumeType.MEDIA, (err, data) => {
                 if (err) {
                     console.error(`AudioFrameworkTest: Callback : TRUE: Media : failed to get Mute Status ${err.message}`);
                     return;
                 }
                 if(data==true){
                     console.log('AudioFrameworkTest: Callback : Is Stream Mute Media: TRUE: PASS: '+data);
             }
             else{
                     console.log('AudioFrameworkTest: Callback : Is Stream Mute Media: TRUE: FAIL: '+data);
             }
             });
         });
    },
 
     async setstreammuterc () {
 
         audioManagerHTML.mute(audio.AudioVolumeType.RINGTONE,true, (err, data) => {
            if (err) {
                console.error(`AudioFrameworkTest: Callback : TRUE: Ringtone : failed to set Mute Status ${err.message}`);
                return;
            }
             console.log('AudioFrameworkTest: Set Stream Mute: Ringtone: Callback : TRUE');
             audioManagerHTML.isMute(audio.AudioVolumeType.RINGTONE, (err, data) => {
                 if (err) {
                     console.error(`AudioFrameworkTest: Callback : TRUE: Ringtone : failed to get Mute Status ${err.message}`);
                     return;
                 }
                 if(data==true){
                     console.log('AudioFrameworkTest: Callback : Is Stream Mute Ringtone: TRUE: PASS: '+data);
 
                }
                else{
                     console.log('AudioFrameworkTest: Callback : Is Stream Mute Ringtone: TRUE: FAIL: '+data);
 
                }
             });
         });
        
    },
 
    async setstreaunmmutemc () {

         audioManagerHTML.mute(audio.AudioVolumeType.MEDIA,false, (err, data) => {
            if (err) {
                console.error(`AudioFrameworkTest: Callback : FALSE: Media : failed to set Mute Status ${err.message}`);
                return;
            }
             console.log('AudioFrameworkTest: Set Stream Mute: Media: Callback : FALSE');
             audioManagerHTML.isMute(audio.AudioVolumeType.MEDIA, (err, data) => {
                 if (err) {
                     console.error(`AudioFrameworkTest: Callback : FALSE: Media : failed to get Mute Status ${err.message}`);
                     return;
                 }
                 else if(data==false){
                     console.log('AudioFrameworkTest: Callback : Is Stream Mute Media: FALSE: PASS: '+data);
 
                 }
                 else{
                         console.log('AudioFrameworkTest: Callback : Is Stream Mute Media: FALSE: FAIL: '+data);
 
                 }
             });
         });
 
     },
 
     async setstreaunmmuterc (){
 
         audioManagerHTML.mute(audio.AudioVolumeType.RINGTONE,false, (err, data) => {
            if (err) {
                console.error(`AudioFrameworkTest: Callback : FALSE: Ringtone : failed to set Mute Status ${err.message}`);
                return;
            }
             console.log('AudioFrameworkTest: Set Stream Mute: Ringtone: Callback : FALSE');
             audioManagerHTML.isMute(audio.AudioVolumeType.RINGTONE, (err, data) => {
                 if (err) {
                     console.error(`AudioFrameworkTest: Callback : FALSE: Ringtone : failed to get Mute Status ${err.message}`);
                     return;
                 }
                 else if(data==fasle){
                     console.log('AudioFrameworkTest: Callback : Is Stream Mute Ringtone: FALSE: PASS: '+data);
 
                 }
                 else{
                     console.log('AudioFrameworkTest: Callback : Is Stream Mute Ringtone: FALSE: FAIL: '+data);
 
                 }
             });
         });     
    
     },

    async isstreamact(){
        audioManagerHTML.isActive(audio.AudioVolumeType.MEDIA).then(function (data) {

            console.log('AudioFrameworkTest: Promise : isActive Media: Test Case');
                    
            console.log('AudioFrameworkTest: Promise : isActive Media:'+data);

        });

        await sleep(10);

        audioManagerHTML.isActive(audio.AudioVolumeType.RINGTONE).then(function (data) {

            console.log('AudioFrameworkTest: Promise : isActive Ringtone: Test Case');
                    
            console.log('AudioFrameworkTest: Promise : isActive Ringtone:'+data);

        });

        await sleep(10);

        audioManagerHTML.isActive(audio.AudioVolumeType.MEDIA, (err, data) => {

            console.log('AudioFrameworkTest: Callback : isActive Media: Test Case');

            if (err) {
                console.error(`AudioFrameworkTest: Callback : Media : isActive: failed  ${err.message}`);
                return;
            }
            
            console.log('AudioFrameworkTest: Callback : isActive Media:'+data);

        });

        await sleep(10);

        audioManagerHTML.isActive(audio.AudioVolumeType.RINGTONE, (err, data) => {

            console.log('AudioFrameworkTest: Callback : isActive Ringtone: Test Case');

            if (err) {
                console.error(`AudioFrameworkTest: Callback : Ringtone : isActive: failed  ${err.message}`);
                return;
            }
            
            console.log('AudioFrameworkTest: Callback : isActive Ringtone:'+data);

        });

    },
    async deviceapic(){
        console.info('AudioFrameworkTest: GetDevice Test: Callback: OUTPUT_DEVICES_FLAG: INPUT_DEVICES_FLAG: ALL_DEVICES_FLAG ');

        deviceRoleValue = null;
        deviceTypeValue = null;
        audioManagerHTML.getDevices(audio.DeviceFlag.OUTPUT_DEVICES_FLAG, (err, value) => {

            console.info('AudioFrameworkTest: Callback: getDevices OUTPUT_DEVICES_FLAG');

            if (err) {
                console.error(`AudioFrameworkTest: Callback: OUTPUT_DEVICES_FLAG: failed to get devices ${err.message}`);
                return;
            }

            console.info('AudioFrameworkTest: Callback: getDevices OUTPUT_DEVICES_FLAG');
            value.forEach(displayDeviceProp);

            if (deviceTypeValue != null && deviceRoleValue != null){
                console.info('AudioFrameworkTest: Callback: getDevices : OUTPUT_DEVICES_FLAG :  PASS');
            }
            else{
                console.info('AudioFrameworkTest: Callback: getDevices : OUTPUT_DEVICES_FLAG :  FAIL');
            }
        });

        await sleep(10);

        deviceRoleValue = null;
        deviceTypeValue = null;
        audioManagerHTML.getDevices(audio.DeviceFlag.INPUT_DEVICES_FLAG, (err, value) => {

            console.info('AudioFrameworkTest: Callback: getDevices INPUT_DEVICES_FLAG');

            if (err) {
                console.error(`AudioFrameworkTest: Callback: INPUT_DEVICES_FLAG: failed to get devices ${err.message}`);
                return;
            }

            console.info('AudioFrameworkTest: Callback: getDevices INPUT_DEVICES_FLAG');
            value.forEach(displayDeviceProp);

            if (deviceTypeValue != null && deviceRoleValue != null){
                console.info('AudioFrameworkTest: Callback: getDevices : INPUT_DEVICES_FLAG:  PASS');
            }
            else{
                console.info('AudioFrameworkTest: Callback: getDevices : INPUT_DEVICES_FLAG:  FAIL');
            }
        });

        await sleep(10);

        deviceRoleValue = null;
        deviceTypeValue = null;
        audioManagerHTML.getDevices(audio.DeviceFlag.ALL_DEVICES_FLAG, (err, value) => {

            console.info('AudioFrameworkTest: Callback: getDevices ALL_DEVICES_FLAG');

            if (err) {
                console.error(`AudioFrameworkTest: Callback: ALL_DEVICES_FLAG: failed to get devices ${err.message}`);
                return;
            }

            console.info('AudioFrameworkTest: Callback: getDevices ALL_DEVICES_FLAG');
            value.forEach(displayDeviceProp);

            if (deviceTypeValue != null && deviceRoleValue != null){
                console.info('AudioFrameworkTest: Callback: getDevices : ALL_DEVICES_FLAG:  PASS');
            }
            else{
                console.info('AudioFrameworkTest: Callback: getDevices : ALL_DEVICES_FLAG:  FAIL');
            }
        });
    },

    async deviceapip(){
        console.info('AudioFrameworkTest: GetDevice Test: Promise : OUTPUT_DEVICES_FLAG: INPUT_DEVICES_FLAG: ALL_DEVICES_FLAG ');

        deviceRoleValue = null;
        deviceTypeValue = null;
        audioManagerHTML.getDevices(audio.DeviceFlag.OUTPUT_DEVICES_FLAG).then(function (value) {

            console.info('AudioFrameworkTest: Promise: getDevices OUTPUT_DEVICES_FLAG');

            console.info('AudioFrameworkTest: Promise: getDevices OUTPUT_DEVICES_FLAG');
            value.forEach(displayDeviceProp);

            if (deviceTypeValue != null && deviceRoleValue != null){
                console.info('AudioFrameworkTest: Promise: getDevices : OUTPUT_DEVICES_FLAG :  PASS');
            }
            else{
                console.info('AudioFrameworkTest: Promise: getDevices : OUTPUT_DEVICES_FLAG :  FAIL');
            }
        });

        await sleep(10);

        deviceRoleValue = null;
        deviceTypeValue = null;
        audioManagerHTML.getDevices(audio.DeviceFlag.INPUT_DEVICES_FLAG).then(function (value) {

            console.info('AudioFrameworkTest: Promise: getDevices INPUT_DEVICES_FLAG');

            console.info('AudioFrameworkTest: Promise: getDevices INPUT_DEVICES_FLAG');
            value.forEach(displayDeviceProp);

            if (deviceTypeValue != null && deviceRoleValue != null){
                console.info('AudioFrameworkTest: Promise: getDevices : INPUT_DEVICES_FLAG :  PASS');
            }
            else{
                console.info('AudioFrameworkTest: Promise: getDevices : INPUT_DEVICES_FLAG :  FAIL');
            }
        });

        await sleep(10);

        deviceRoleValue = null;
        deviceTypeValue = null;
        audioManagerHTML.getDevices(audio.DeviceFlag.ALL_DEVICES_FLAG).then(function (value) {

            console.info('AudioFrameworkTest: Promise: getDevices ALL_DEVICES_FLAG');

            console.info('AudioFrameworkTest: Promise: getDevices ALL_DEVICES_FLAG');
            value.forEach(displayDeviceProp);

            if (deviceTypeValue != null && deviceRoleValue != null){
                console.info('AudioFrameworkTest: Promise: getDevices : ALL_DEVICES_FLAG :  PASS');
            }
            else{
                console.info('AudioFrameworkTest: Promise: getDevices : ALL_DEVICES_FLAG :  FAIL');
            }
        });
    },

    async ringermodep(){
        
        console.info('AudioFrameworkTest: Ringer Mode Test: Promise : setRingerMode : getRingerMode');
        audioManagerHTML.getRingerMode().then(function (value){
            if(value==audio.AudioRingMode.RINGER_MODE_NORMAL){
                audioManagerHTML.setRingerMode(audio.AudioRingMode.RINGER_MODE_SILENT).then(function (value){
                    console.info('AudioFrameworkTest: Promise: setRingerMode RINGER_MODE_SILENT');
                    audioManagerHTML.getRingerMode().then(function (value){
                        if(value==0){
                            console.info('AudioFrameworkTest: Promise: setRingerMode RINGER_MODE_SILENT: PASS :' +value);
                        }
                        else{
                            console.info('AudioFrameworkTest: Promise: setRingerMode RINGER_MODE_SILENT: FAIL :' +value);
                        }
                    });
                });
                return;
            }
                
            else if(value==audio.AudioRingMode.RINGER_MODE_SILENT){
                audioManagerHTML.setRingerMode(audio.AudioRingMode.RINGER_MODE_VIBRATE).then(function (value){
                    console.info('AudioFrameworkTest: Promise: setRingerMode RINGER_MODE_VIBRATE');
                    audioManagerHTML.getRingerMode().then(function (value){
                        if(value==1){
                            console.info('AudioFrameworkTest: Promise: setRingerMode RINGER_MODE_VIBRATE: PASS :' +value);
                        }
                        else{
                            console.info('AudioFrameworkTest: Promise: setRingerMode RINGER_MODE_VIBRATE: FAIL :' +value);
                        }
                    });

                });
                return;
            }
            else if(value==audio.AudioRingMode.RINGER_MODE_VIBRATE){
                audioManagerHTML.setRingerMode(audio.AudioRingMode.RINGER_MODE_NORMAL).then(function (value) {
                    console.info('AudioFrameworkTest: Promise: setRingerMode RINGER_MODE_NORMAL');
                    audioManagerHTML.getRingerMode().then(function (value){
                        if(value==2){
                            console.info('AudioFrameworkTest: Promise: setRingerMode RINGER_MODE_NORMAL: PASS :' +value);
                        }
                        else{
                            console.info('AudioFrameworkTest: Promise: setRingerMode RINGER_MODE_NORMAL: FAIL :' +value);
                        }
                    });

                });
                return;
            }
            else{
                console.info('AudioFrameworkTest: Promise: setRingerMode : FAIL :' +value);
            }
        });
    },


async ringermodec(){
        console.info('AudioFrameworkTest: Ringer Mode Test: Callback : setRingerMode​ : getRingerMode​');
        audioManagerHTML.getRingerMode().then(function (value){
        if(value==audio.AudioRingMode.RINGER_MODE_VIBRATE){
            audioManagerHTML.setRingerMode(audio.AudioRingMode.RINGER_MODE_NORMAL, (err, value) => {

                console.info('AudioFrameworkTest: Callback : setRingerMode RINGER_MODE_NORMAL');

                if (err) {
                    console.error(`AudioFrameworkTest: Callback : setRingerMode RINGER_MODE_NORMAL: Error: ${err.message}`);
                    return;
                }        
                
                audioManagerHTML.getRingerMode((err, value) => {
                    if (err) {
                        console.error(`AudioFrameworkTest: Callback : setRingerMode RINGER_MODE_NORMAL: Error: ${err.message}`);
                        return;
                    }

                    if(value==2){
                        console.info('AudioFrameworkTest: Callback: setRingerMode​ RINGER_MODE_NORMAL: PASS :' +value);
                    }
                    else{
                        console.info('AudioFrameworkTest: Callback: setRingerMode​ RINGER_MODE_NORMAL: FAIL :' +value);
                    }
                });
            });
        }
        else if(value==audio.AudioRingMode.RINGER_MODE_NORMAL){
            audioManagerHTML.setRingerMode(audio.AudioRingMode.RINGER_MODE_SILENT, (err, value) => {

                console.info('AudioFrameworkTest: Callback : setRingerMode RINGER_MODE_SILENT');

                if (err) {
                    console.error(`AudioFrameworkTest: Callback : setRingerMode RINGER_MODE_SILENT: Error: ${err.message}`);
                    return;
                }        
                
                audioManagerHTML.getRingerMode((err, value) => {
                    if (err) {
                        console.error(`AudioFrameworkTest: Callback : setRingerMode RINGER_MODE_SILENT: Error: ${err.message}`);
                        return;
                    }

                    if(value==0){
                        console.info('AudioFrameworkTest: Callback: setRingerMode​ RINGER_MODE_SILENT: PASS :' +value);
                    }
                    else{
                        console.info('AudioFrameworkTest: Callback: setRingerMode​ RINGER_MODE_SILENT: FAIL :' +value);
                    }
                });
            });
        }
        else if(value==audio.AudioRingMode.RINGER_MODE_SILENT){
            audioManagerHTML.setRingerMode(audio.AudioRingMode.RINGER_MODE_VIBRATE, (err, value) => {

                console.info('AudioFrameworkTest: Callback : setRingerMode RINGER_MODE_VIBRATE');

                if (err) {
                    console.error(`AudioFrameworkTest: Callback : setRingerMode RINGER_MODE_VIBRATE: Error: ${err.message}`);
                    return;
                }        
                
                audioManagerHTML.getRingerMode((err, value) => {
                    if (err) {
                        console.error(`AudioFrameworkTest: Callback : setRingerMode RINGER_MODE_VIBRATE: Error: ${err.message}`);
                        return;
                    }

                    if(value==1){
                        console.info('AudioFrameworkTest: Callback: setRingerMode RINGER_MODE_VIBRATE: PASS :' +value);
                    }
                    else{
                        console.info('AudioFrameworkTest: Callback: setRingerMode RINGER_MODE_VIBRATE: FAIL :' +value);
                    }
                });
            });
        }
            else{
                console.info('AudioFrameworkTest: Promise: setRingerMode : FAIL :' +value);
            }
        });
    },

    async audiparm(){
        
        console.info('AudioFrameworkTest: Audio Parameter Test: Promise : setAudioParameter : getAudioParameter');

        audioManagerHTML.setAudioParameter('Bits per sample', '8 bit').then(function (value) {
            console.info('AudioFrameworkTest: Audio Parameter Test: Promise : setAudioParameter');
            audioManagerHTML.getAudioParameter('Bits per sample').then(function (value){
                if(value=='8 bit'){
                    console.info('AudioFrameworkTest: Promise: getAudioParameter: Bits per sample : PASS :' +value);
                }
                else{
                    console.info('AudioFrameworkTest: Promise: getAudioParameter : Bits per sample : FAIL :' +value);
                }
            });

        });

        await sleep(10);

        console.info('AudioFrameworkTest: Audio Parameter Test: Callback : setAudioParameter : getAudioParameter');

        audioManagerHTML.setAudioParameter('Sample Rate', '44100', (err, value) => {

            console.info('AudioFrameworkTest: Audio Parameter Test: Callback : setAudioParameter');

            if (err) {
                console.error(`AudioFrameworkTest: Callback : setAudioParameter: Sample Rate : Error: ${err.message}`);
                return;
            }        
            
            audioManagerHTML.getAudioParameter('Sample Rate', (err, value) => {
                if (err) {
                    console.error(`AudioFrameworkTest: Callback : getAudioParameter: Sample Rate: Error: ${err.message}`);
                    return;
                }

                if(value=='44100'){
                    console.info('AudioFrameworkTest: Callback: getAudioParameter: Sample Rate: PASS :' +value);
                }
                else{
                    console.info('AudioFrameworkTest: Callback: getAudioParameter: Sample Rate: FAIL :' +value);
                }
            });
        });

        await sleep(10);

        console.info('AudioFrameworkTest: Audio Parameter Test: Promise : getAudioParameter: Interchange Promise & Callback');

        audioManagerHTML.getAudioParameter('Sample Rate').then(function (value){
            if(value=='44100'){
                console.info('AudioFrameworkTest: Promise: getAudioParameter: Sample Rate : PASS :' +value);
            }
            else{
                console.info('AudioFrameworkTest: Promise: getAudioParameter : Sample Rate : FAIL :' +value);
            }
        });

        audioManagerHTML.getAudioParameter('Bits per sample', (err, value) => {
            if (err) {
                console.error(`AudioFrameworkTest: Callback : getAudioParameter: Bits per sample: Error: ${err.message}`);
                return;
            }

            if(value=='8 bit'){
                console.info('AudioFrameworkTest: Callback: getAudioParameter: Bits per sample: PASS :' +value);
            }
            else{
                console.info('AudioFrameworkTest: Callback: getAudioParameter: Bits per sample: FAIL :' +value);
            }
        });
    },

    async enspeak(){

        audioManagerHTML.setDeviceActive(audio.DeviceType.SPEAKER,true).then(function (value) {
            console.info('AudioFrameworkTest: Device Test: Promise : setDeviceActive : SPEAKER: Active');
            audioManagerHTML.isDeviceActive(audio.DeviceType.SPEAKER).then(function (value){
                if(value==true){
                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : SPEAKER: Active : PASS :' +value);
                }
                else{
                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : SPEAKER: Active : FAIL :' +value);
                }
            });

        });
    },

    async disspeak(){

        audioManagerHTML.setDeviceActive(audio.DeviceType.SPEAKER,false).then(function (value) {
            console.info('AudioFrameworkTest: Device Test: Promise : setDeviceActive : SPEAKER: Deactivate');
            audioManagerHTML.isDeviceActive(DeviceType.SPEAKER).then(function (value){
                if(value==false){
                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : SPEAKER: Deactivate : PASS :' +value);
                }
                else{
                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : SPEAKER: Deactivate : FAIL :' +value);
                }
            });

        });

    },

    async enbt(){
        audioManagerHTML.setDeviceActive(audio.DeviceType.BLUETOOTH_A2DP,true, (err, value) => {
            if (err) {
                console.error(`AudioFrameworkTest: Device Test: Callback : setDeviceActive : BLUETOOTH_A2DP: Active: Error: ${err.message}`);
                return;
            }
            console.info('AudioFrameworkTest: Device Test: Callback : setDeviceActive : BLUETOOTH_A2DP: Active');
            audioManagerHTML.isDeviceActive(audio.DeviceType.BLUETOOTH_A2DP,(err, value) => {
                if (err) {
                    console.error(`AudioFrameworkTest: Device Test: Callback : isDeviceActive : BLUETOOTH_A2DP: Active: Error: ${err.message}`);
                    return;
                }
                if(value==true){
                    console.info('AudioFrameworkTest: Device Test: Callback : isDeviceActive : BLUETOOTH_A2DP: Active : PASS :' +value);
                }
                else{
                    console.info('AudioFrameworkTest: Device Test: Callback : isDeviceActive : BLUETOOTH_A2DP: Active : FAIL :' +value);
                }
            });

        });

    },

    async disbt(){
        audioManagerHTML.setDeviceActive(audio.DeviceType.BLUETOOTH_A2DP,false, (err, value) => {
            if (err) {
                console.error(`AudioFrameworkTest:  Device Test: Callback : setDeviceActive : BLUETOOTH_A2DP: Deactivate: Error: ${err.message}`);
                return;
            }
            console.info('AudioFrameworkTest:  Device Test: Callback : setDeviceActive : BLUETOOTH_A2DP: Deactivate');
            audioManagerHTML.isDeviceActive(audio.DeviceType.BLUETOOTH_A2DP,(err, value) => {
                if (err) {
                    console.error(`AudioFrameworkTest:  Device Test: Callback : isDeviceActive : BLUETOOTH_A2DP: Deactivate: Error: ${err.message}`);
                    return;
                }
                if(value==false){
                    console.info('AudioFrameworkTest:  Device Test: Callback : isDeviceActive : BLUETOOTH_A2DP: Deactivate : PASS :' +value);
                }
                else{
                    console.info('AudioFrameworkTest:  Device Test: Callback : isDeviceActive : BLUETOOTH_A2DP: Deactivate : FAIL :' +value);
                }
            });

        });

    },
    async enmic(){
        audioManagerHTML.setDeviceActive(audio.DeviceType.MIC,true).then(function (value) {
            console.info('AudioFrameworkTest: Device Test: Promise : setDeviceActive : MIC: Active');
            audioManagerHTML.isDeviceActive(audio.DeviceType.MIC).then(function (value){
                if(value==true){
                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : MIC: Active : PASS :' +value);
                }
                else{
                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : MIC: Active : FAIL :' +value);
                }
            });
        });
    },
    async dismic(){
        audioManagerHTML.setDeviceActive(audio.DeviceType.MIC,false, (err, value) => {
            if (err) {
                console.error(`AudioFrameworkTest:  Device Test: Callback : setDeviceActive : MIC: Deactivate: Error: ${err.message}`);
                return;
            }
            console.info('AudioFrameworkTest:  Device Test: Callback : setDeviceActive : MIC: Deactivate');
            audioManagerHTML.isDeviceActive(audio.DeviceType.MIC,(err, value) => {
                if (err) {
                    console.error(`AudioFrameworkTest:  Device Test: Callback : isDeviceActive : MIC: Deactivate: Error: ${err.message}`);
                    return;
                }
                else if(value==false){
                    console.info('AudioFrameworkTest: Device Test: Callback : isDeviceActive : MIC: Deactivate : PASS :' +value);
                }
                else{
                    console.info('AudioFrameworkTest: Device Test: Callback : isDeviceActive : MIC: Deactivate : FAIL :' +value);
                }
            });
        });
    },
//    async endevp(){
//
//        console.info('AudioFrameworkTest: Device Test: Promise : setDeviceActive : Active');
//
//        audioManagerHTML.setDeviceActive(0,true).then(function (value) {
//            console.info('AudioFrameworkTest: Device Test: Promise : setDeviceActive : INVALID: Active');
//            audioManagerHTML.isDeviceActive(0).then(function (value){
//                if(value==true){
//                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : INVALID: Active : PASS :' +value);
//                }
//                else{
//                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : INVALID: Active : FAIL :' +value);
//                }
//            });
//
//        });
//
//        await sleep(10);
//
//        // audioManagerHTML.setDeviceActive(1,true).then(function (value) {
//        //     console.info('AudioFrameworkTest: Device Test: Promise : setDeviceActive : SPEAKER: Active');
//        //     audioManagerHTML.isDeviceActive(1).then(function (value){
//        //         if(value==true){
//        //             console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : SPEAKER: Active : PASS :' +value);
//        //         }
//        //         else{
//        //             console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : SPEAKER: Active : FAIL :' +value);
//        //         }
//        //     });
//
//        // });
//
//        await sleep(10);
//
//        audioManagerHTML.setDeviceActive(2,true).then(function (value) {
//            console.info('AudioFrameworkTest: Device Test: Promise : setDeviceActive : WIRED_HEADSET: Active');
//            audioManagerHTML.isDeviceActive(2).then(function (value){
//                if(value==true){
//                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : WIRED_HEADSET: Active : PASS :' +value);
//                }
//                else{
//                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : WIRED_HEADSET: Active : FAIL :' +value);
//                }
//            });
//
//        });
//
//        await sleep(10);
//
//        audioManagerHTML.setDeviceActive(3,true).then(function (value) {
//            console.info('AudioFrameworkTest: Device Test: Promise : setDeviceActive : BLUETOOTH_SCO: Active');
//            audioManagerHTML.isDeviceActive(3).then(function (value){
//                if(value==true){
//                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : BLUETOOTH_SCO: Active : PASS :' +value);
//                }
//                else{
//                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : BLUETOOTH_SCO: Active : FAIL :' +value);
//                }
//            });
//
//        });
//
//        await sleep(10);
//
//        audioManagerHTML.setDeviceActive(4,true).then(function (value) {
//            console.info('AudioFrameworkTest: Device Test: Promise : setDeviceActive : BLUETOOTH_A2DP: Active');
//            audioManagerHTML.isDeviceActive(4).then(function (value){
//                if(value==true){
//                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : BLUETOOTH_A2DP: Active : PASS :' +value);
//                }
//                else{
//                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : BLUETOOTH_A2DP: Active : FAIL :' +value);
//                }
//            });
//
//        });
//
//        await sleep(10);
//
//        audioManagerHTML.setDeviceActive(5,true).then(function (value) {
//            console.info('AudioFrameworkTest: Device Test: Promise : setDeviceActive : MIC: Active');
//            audioManagerHTML.isDeviceActive(5).then(function (value){
//                if(value==true){
//                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : MIC: Active : PASS :' +value);
//                }
//                else{
//                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : MIC: Active : FAIL :' +value);
//                }
//            });
//
//        });
//    },
//
//    async endevc(){
//
//        console.info('AudioFrameworkTest: Device Test: Callback : setDeviceActive : Active');
//
//        audioManagerHTML.setDeviceActive(0,true, (err, value) => {
//            if (err) {
//                console.error(`AudioFrameworkTest: Device Test: Callback : setDeviceActive : INVALID: Active: Error: ${err.message}`);
//                return;
//            }
//            console.info('AudioFrameworkTest: Device Test: Callback : setDeviceActive : INVALID: Active');
//            audioManagerHTML.isDeviceActive(0,(err, value) => {
//                if (err) {
//                    console.error(`AudioFrameworkTest: Device Test: Callback : isDeviceActive : INVALID: Active: Error: ${err.message}`);
//                    return;
//                }
//                if(value==true){
//                    console.info('AudioFrameworkTest: Device Test: Callback : isDeviceActive : INVALID: Active : PASS :' +value);
//                }
//                else{
//                    console.info('AudioFrameworkTest: Device Test: Callback : isDeviceActive : INVALID: Active : FAIL :' +value);
//                }
//            });
//
//        });
//
//        await sleep(10);
//
//        audioManagerHTML.setDeviceActive(1,true, (err, value) => {
//            if (err) {
//                console.error(`AudioFrameworkTest: Device Test: Callback : setDeviceActive : SPEAKER: Active: Error: ${err.message}`);
//                return;
//            }
//            console.info('AudioFrameworkTest: Device Test: Callback : setDeviceActive : SPEAKER: Active');
//            audioManagerHTML.isDeviceActive(1,(err, value) => {
//                if (err) {
//                    console.error(`AudioFrameworkTest: Device Test: Callback : isDeviceActive : SPEAKER: Active: Error: ${err.message}`);
//                    return;
//                }
//                if(value==true){
//                    console.info('AudioFrameworkTest: Device Test: Callback : isDeviceActive : SPEAKER: Active : PASS :' +value);
//                }
//                else{
//                    console.info('AudioFrameworkTest: Device Test: Callback : isDeviceActive : SPEAKER: Active : FAIL :' +value);
//                }
//            });
//
//        });
//
//        await sleep(10);
//
//        audioManagerHTML.setDeviceActive(2,true, (err, value) => {
//            if (err) {
//                console.error(`AudioFrameworkTest: Device Test: Callback : setDeviceActive : WIRED_HEADSET: Active: Error: ${err.message}`);
//                return;
//            }
//            console.info('AudioFrameworkTest: Device Test: Callback : setDeviceActive : WIRED_HEADSET: Active');
//            audioManagerHTML.isDeviceActive(2,(err, value) => {
//                if (err) {
//                    console.error(`AudioFrameworkTest: Device Test: Callback : isDeviceActive : WIRED_HEADSET: Active: Error: ${err.message}`);
//                    return;
//                }
//                if(value==true){
//                    console.info('AudioFrameworkTest: Device Test: Callback : isDeviceActive : WIRED_HEADSET: Active : PASS :' +value);
//                }
//                else{
//                    console.info('AudioFrameworkTest: Device Test: Callback : isDeviceActive : WIRED_HEADSET: Active : FAIL :' +value);
//                }
//            });
//
//        });
//
//        await sleep(10);
//
//        audioManagerHTML.setDeviceActive(3,true, (err, value) => {
//            if (err) {
//                console.error(`AudioFrameworkTest: Device Test: Callback : setDeviceActive : MIBLUETOOTH_SCOC: Active: Error: ${err.message}`);
//                return;
//            }
//            console.info('AudioFrameworkTest: Enable Device Test: Callback : setDeviceActive : BLUETOOTH_SCO: Active');
//            audioManagerHTML.isDeviceActive(3,(err, value) => {
//                if (err) {
//                    console.error(`AudioFrameworkTest: Device Test: Callback : isDeviceActive : BLUETOOTH_SCO: Active: Error: ${err.message}`);
//                    return;
//                }
//                if(value==true){
//                    console.info('AudioFrameworkTest: Device Test: Callback : isDeviceActive : BLUETOOTH_SCO: Active : PASS :' +value);
//                }
//                else{
//                    console.info('AudioFrameworkTest: Device Test: Callback : isDeviceActive : BLUETOOTH_SCO: Active : FAIL :' +value);
//                }
//            });
//
//        });
//
//        await sleep(10);
//
//        // audioManagerHTML.setDeviceActive(4,true, (err, value) => {
//        //     if (err) {
//        //         console.error(`AudioFrameworkTest: Device Test: Callback : setDeviceActive : BLUETOOTH_A2DP: Active: Error: ${err.message}`);
//        //         return;
//        //     }
//        //     console.info('AudioFrameworkTest: Device Test: Callback : setDeviceActive : BLUETOOTH_A2DP: Active');
//        //     audioManagerHTML.isDeviceActive(4,(err, value) => {
//        //         if (err) {
//        //             console.error(`AudioFrameworkTest: Device Test: Callback : isDeviceActive : BLUETOOTH_A2DP: Active: Error: ${err.message}`);
//        //             return;
//        //         }
//        //         if(value==true){
//        //             console.info('AudioFrameworkTest: Device Test: Callback : isDeviceActive : BLUETOOTH_A2DP: Active : PASS :' +value);
//        //         }
//        //         else{
//        //             console.info('AudioFrameworkTest: Device Test: Callback : isDeviceActive : BLUETOOTH_A2DP: Active : FAIL :' +value);
//        //         }
//        //     });
//
//        // });
//
//        // await sleep(10);
//
//        audioManagerHTML.setDeviceActive(5,true, (err, value) => {
//            if (err) {
//                console.error(`AudioFrameworkTest: Device Test: Callback : setDeviceActive : MIC: Active: Error: ${err.message}`);
//                return;
//            }
//            console.info('AudioFrameworkTest: Device Test: Callback : setDeviceActive : MIC: Active');
//            audioManagerHTML.isDeviceActive(5,(err, value) => {
//                if (err) {
//                    console.error(`AudioFrameworkTest: Device Test: Callback : isDeviceActive : MIC: Active: Error: ${err.message}`);
//                    return;
//                }
//                if(value==true){
//                    console.info('AudioFrameworkTest: Device Test: Callback : isDeviceActive : MIC: Active : PASS :' +value);
//                }
//                else{
//                    console.info('AudioFrameworkTest: Device Test: Callback : isDeviceActive : MIC: Active : FAIL :' +value);
//                }
//            });
//
//        });
//    },
//
//    async disdevp(){
//
//        console.info('AudioFrameworkTest: Deactivate Device Test: Promise : setDeviceActive : Deactivate');
//
//        audioManagerHTML.setDeviceActive(0,false).then(function (value) {
//            console.info('AudioFrameworkTest: Device Test: Promise : setDeviceActive : INVALID: Deactivate');
//            audioManagerHTML.isDeviceActive(0).then(function (value){
//                if(value==false){
//                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : INVALID: Deactivate : PASS :' +value);
//                }
//                else{
//                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : INVALID: Deactivate : FAIL :' +value);
//                }
//            });
//
//        });
//
//        await sleep(10);
//
//        // audioManagerHTML.setDeviceActive(1,false).then(function (value) {
//        //     console.info('AudioFrameworkTest: Device Test: Promise : setDeviceActive : SPEAKER: Deactivate');
//        //     audioManagerHTML.isDeviceActive(1).then(function (value){
//        //         if(value==false){
//        //             console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : SPEAKER: Deactivate : PASS :' +value);
//        //         }
//        //         else{
//        //             console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : SPEAKER: Deactivate : FAIL :' +value);
//        //         }
//        //     });
//
//        // });
//
//        // await sleep(10);
//
//        audioManagerHTML.setDeviceActive(2,false).then(function (value) {
//            console.info('AudioFrameworkTest: Device Test: Promise : setDeviceActive : WIRED_HEADSET: Deactivate');
//            audioManagerHTML.isDeviceActive(2).then(function (value){
//                if(value==false){
//                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : WIRED_HEADSET: Deactivate : PASS :' +value);
//                }
//                else{
//                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : WIRED_HEADSET: Deactivate : FAIL :' +value);
//                }
//            });
//
//        });
//
//        await sleep(10);
//
//        audioManagerHTML.setDeviceActive(3,false).then(function (value) {
//            console.info('AudioFrameworkTest: Device Test: Promise : setDeviceActive : BLUETOOTH_SCO: Deactivate');
//            audioManagerHTML.isDeviceActive(3).then(function (value){
//                if(value==false){
//                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : BLUETOOTH_SCO: Deactivate : PASS :' +value);
//                }
//                else{
//                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : BLUETOOTH_SCO: Deactivate : FAIL :' +value);
//                }
//            });
//
//        });
//
//        await sleep(10);
//
//        audioManagerHTML.setDeviceActive(4,false).then(function (value) {
//            console.info('AudioFrameworkTest: Device Test: Promise : setDeviceActive : BLUETOOTH_A2DP: Deactivate');
//            audioManagerHTML.isDeviceActive(4).then(function (value){
//                if(value==false){
//                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : BLUETOOTH_A2DP: Deactivate : PASS :' +value);
//                }
//                else{
//                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : BLUETOOTH_A2DP: Deactivate : FAIL :' +value);
//                }
//            });
//
//        });
//
//        await sleep(10);
//
//        audioManagerHTML.setDeviceActive(5,false).then(function (value) {
//            console.info('AudioFrameworkTest: Device Test: Promise : setDeviceActive : MIC: Deactivate');
//            audioManagerHTML.isDeviceActive(5).then(function (value){
//                if(value==false){
//                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : MIC: Deactivate : PASS :' +value);
//                }
//                else{
//                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : MIC: Deactivate : FAIL :' +value);
//                }
//            });
//
//        });
//    },
//
//    async disdevc(){
//
//        console.info('AudioFrameworkTest: Deactivate Device Test: Callback : setDeviceActive : Deactivate');
//
//        audioManagerHTML.setDeviceActive(0,false, (err, value) => {
//            if (err) {
//                console.error(`AudioFrameworkTest: Device Test: Callback : setDeviceActive : INVALID: Deactivate: Error: ${err.message}`);
//                return;
//            }
//            console.info('AudioFrameworkTest:  Device Test: Callback : setDeviceActive : INVALID: Deactivate');
//            audioManagerHTML.isDeviceActive(0,(err, value) => {
//                if (err) {
//                    console.error(`AudioFrameworkTest:  Device Test: Callback : isDeviceActive : INVALID: Deactivate: Error: ${err.message}`);
//                    return;
//                }
//                if(value==false){
//                    console.info('AudioFrameworkTest:  Device Test: Callback : isDeviceActive : INVALID: Deactivate : PASS :' +value);
//                }
//                else{
//                    console.info('AudioFrameworkTest:  Device Test: Callback : isDeviceActive : INVALID: Deactivate : FAIL :' +value);
//                }
//            });
//
//        });
//
//        await sleep(10);
//
//        audioManagerHTML.setDeviceActive(1,false, (err, value) => {
//            if (err) {
//                console.error(`AudioFrameworkTest:  Device Test: Callback : setDeviceActive : SPEAKER: Deactivate: Error: ${err.message}`);
//                return;
//            }
//            console.info('AudioFrameworkTest:  Device Test: Callback : setDeviceActive : SPEAKER: Deactivate');
//            audioManagerHTML.isDeviceActive(1,(err, value) => {
//                if (err) {
//                    console.error(`AudioFrameworkTest:  Device Test: Callback : isDeviceActive : SPEAKER: Deactivate: Error: ${err.message}`);
//                    return;
//                }
//                if(value==false){
//                    console.info('AudioFrameworkTest:  Device Test: Callback : isDeviceActive : SPEAKER: Deactivate : PASS :' +value);
//                }
//                else{
//                    console.info('AudioFrameworkTest:  Device Test: Callback : isDeviceActive : SPEAKER: Deactivate : FAIL :' +value);
//                }
//            });
//
//        });
//
//        await sleep(10);
//
//        audioManagerHTML.setDeviceActive(2,false, (err, value) => {
//            if (err) {
//                console.error(`AudioFrameworkTest:  Device Test: Callback : setDeviceActive : WIRED_HEADSET: Deactivate: Error: ${err.message}`);
//                return;
//            }
//            console.info('AudioFrameworkTest:  Device Test: Callback : setDeviceActive : WIRED_HEADSET: Deactivate');
//            audioManagerHTML.isDeviceActive(2,(err, value) => {
//                if (err) {
//                    console.error(`AudioFrameworkTest:  Device Test: Callback : isDeviceActive : WIRED_HEADSET: Deactivate: Error: ${err.message}`);
//                    return;
//                }
//                if(value==false){
//                    console.info('AudioFrameworkTest:  Device Test: Callback : isDeviceActive : WIRED_HEADSET: Deactivate : PASS :' +value);
//                }
//                else{
//                    console.info('AudioFrameworkTest:  Device Test: Callback : isDeviceActive : WIRED_HEADSET: Deactivate : FAIL :' +value);
//                }
//            });
//
//        });
//
//        await sleep(10);
//
//        audioManagerHTML.setDeviceActive(3,false, (err, value) => {
//            if (err) {
//                console.error(`AudioFrameworkTest:  Device Test: Callback : setDeviceActive : MIBLUETOOTH_SCOC: Deactivate: Error: ${err.message}`);
//                return;
//            }
//            console.info('AudioFrameworkTest:  Device Test: Callback : setDeviceActive : BLUETOOTH_SCO: Deactivate');
//            audioManagerHTML.isDeviceActive(3,(err, value) => {
//                if (err) {
//                    console.error(`AudioFrameworkTest:  Device Test: Callback : isDeviceActive : BLUETOOTH_SCO: Deactivate: Error: ${err.message}`);
//                    return;
//                }
//                if(value==false){
//                    console.info('AudioFrameworkTest:  Device Test: Callback : isDeviceActive : BLUETOOTH_SCO: Deactivate : PASS :' +value);
//                }
//                else{
//                    console.info('AudioFrameworkTest:  Device Test: Callback : isDeviceActive : BLUETOOTH_SCO: Deactivate : FAIL :' +value);
//                }
//            });
//
//        });
//
//        await sleep(10);
//
//        // audioManagerHTML.setDeviceActive(4,false, (err, value) => {
//        //     if (err) {
//        //         console.error(`AudioFrameworkTest:  Device Test: Callback : setDeviceActive : BLUETOOTH_A2DP: Deactivate: Error: ${err.message}`);
//        //         return;
//        //     }
//        //     console.info('AudioFrameworkTest:  Device Test: Callback : setDeviceActive : BLUETOOTH_A2DP: Deactivate');
//        //     audioManagerHTML.isDeviceActive(4,(err, value) => {
//        //         if (err) {
//        //             console.error(`AudioFrameworkTest:  Device Test: Callback : isDeviceActive : BLUETOOTH_A2DP: Deactivate: Error: ${err.message}`);
//        //             return;
//        //         }
//        //         if(value==false){
//        //             console.info('AudioFrameworkTest:  Device Test: Callback : isDeviceActive : BLUETOOTH_A2DP: Deactivate : PASS :' +value);
//        //         }
//        //         else{
//        //             console.info('AudioFrameworkTest:  Device Test: Callback : isDeviceActive : BLUETOOTH_A2DP: Deactivate : FAIL :' +value);
//        //         }
//        //     });
//
//        // });
//
//        // await sleep(10);
//
//        audioManagerHTML.setDeviceActive(5,false, (err, value) => {
//            if (err) {
//                console.error(`AudioFrameworkTest:  Device Test: Callback : setDeviceActive : MIC: Deactivate: Error: ${err.message}`);
//                return;
//            }
//            console.info('AudioFrameworkTest:  Device Test: Callback : setDeviceActive : MIC: Deactivate');
//            audioManagerHTML.isDeviceActive(5,(err, value) => {
//                if (err) {
//                    console.error(`AudioFrameworkTest:  Device Test: Callback : isDeviceActive : MIC: Deactivate: Error: ${err.message}`);
//                    return;
//                }
//                if(value==false){
//                    console.info('AudioFrameworkTest: Device Test: Callback : isDeviceActive : MIC: Deactivate : PASS :' +value);
//                }
//                else{
//                    console.info('AudioFrameworkTest: Device Test: Callback : isDeviceActive : MIC: Deactivate : FAIL :' +value);
//                }
//            });
//
//        });
//    },

    async micmutep () {

        audioManagerHTML.setMicrophoneMute(true).then(function (data) {
            console.log('AudioFrameworkTest: setMicrophoneMute: Promise: TRUE');
            audioManagerHTML.isMicrophoneMute().then(function (data) {
                if(data==true){
                        console.log('AudioFrameworkTest: Promise: isMicrophoneMute: TRUE: PASS:'+data);

                }
                else{
                        console.log('AudioFrameworkTest: Promise: isMicrophoneMute: TRUE: FAIL: '+data);

                }
                });
        });
    },
    async micmutecb () {
        audioManagerHTML.setMicrophoneMute(true, (err, data) => {
            console.log('AudioFrameworkTest: setMicrophoneMute: Callback : TRUE');
            audioManagerHTML.isMicrophoneMute((err, data) => {
                if (err) {
                    console.error(`AudioFrameworkTest: Callback : TRUE: isMicrophoneMute : Error ${err.message}`);
                    return;
                }
                else if(data==true){
                    console.log('AudioFrameworkTest: Callback : isMicrophoneMute: TRUE: PASS: '+data);
                }
                else{
                    console.log('AudioFrameworkTest: Callback : isMicrophoneMute: TRUE: FAIL: '+data);
                }
            });
        });
    },
   async micunmutep () {
        audioManagerHTML.setMicrophoneMute(false).then(function (data) {
            console.log('AudioFrameworkTest: setMicrophoneMute: Promise: FALSE');
            audioManagerHTML.isMicrophoneMute().then(function (data) {
                if(data==false){
                    console.log('AudioFrameworkTest: Promise: isMicrophoneMute: FALSE: PASS:'+data);

                }
                else{
                    console.log('AudioFrameworkTest: Promise: isMicrophoneMute: FALSE: FAIL: '+data);

                }
                });
        });
        
    },
    async micunmutecb () {
        audioManagerHTML.setMicrophoneMute(false, (err, data) => {
            console.log('AudioFrameworkTest: setMicrophoneMute: Callback : FALSE');
            audioManagerHTML.isMicrophoneMute((err, data) => {
                if (err) {
                    console.error(`AudioFrameworkTest: Callback : FALSE: isMicrophoneMute : Error ${err.message}`);
                    return;
                }
                else if(data==false){
                    console.log('AudioFrameworkTest: Callback : isMicrophoneMute: FALSE: PASS: '+data);
                }
                else{
                    console.log('AudioFrameworkTest: Callback : isMicrophoneMute: FALSE: FAIL: '+data);
                }
            });
        });
        
        },

    jstestsuite() {
            console.info('onShow finish')
            const core = Core.getInstance()
            const expectExtend = new ExpectExtend({
                'id': 'extend'
            })
            const reportExtend = new ReportExtend(file)
            core.addService('expect', expectExtend)
            core.addService('report', reportExtend)
            core.init()


            const configService = core.getDefaultService('config')
            configService.setConfig(this)

            require('../../../test/List.test')
            core.execute()
        },

    onInit () {
        this.title = this.$t ('strings.world');
    }

}
