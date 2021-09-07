//import featureAbility from '@ohos.ability.featureability'
//import abilityManager from'@ohos.app.abilitymanager'
//import bundle from '@ohos.bundle'
//import commonEvent from '@ohos.commonevent'
//var Subscriberdata;
//var SubscriberdataFirst;
//var SubscriberdataSecond;
//var SubscriberdataThird;
//var result = new Map();
//export default {
//    onCreate() {
//        console.info('======AceApplication onCreate');
//
//    },
//    data: {
//        todolist: [{
//                       title: 'BMS类接口',
//                       date: '测试名称：permissionChange_0100',
//                       depict:'接口描述：main window of this ability has window focus.',
//                       index:0,
//                   },
////                   {
////                       title: 'BMS类接口',
////                       date: '测试名称：permissionChange_0200',
////                       depict:'接口描述：get the context of this ability.',
////                       index:1,
////                   },
////                   {
////                       title: 'ACE类接口',
////                       date: '接口名称：terminateAbility',
////                       depict:'接口描述：Destroys the current ability.',
////                       index:2,
////                   },
////                   {
////                       title: 'ACE类接口',
////                       date: '接口名称：getWant',
////                       depict:'接口描述：Obtain the want sended from the source ability.',
////                       index:3,
////                   },
////                   {
////                       title: 'ACE类接口',
////                       date: '接口名称：startAbility',
////                       depict:'接口描述：Starts a new ability.',
////                       index:4,
////                   },
////                   {
////                        title: 'ACE类接口',
////                        date: '接口名称：startAbilityForResult',
////                        depict:'接口描述：onAbilityResult will be called after this new ability is terminated',
////                        index:5,
////                   },
////                    {
////                        title: 'ACE类接口',
////                        date: '接口名称：finishWithResult',
////                        depict:'接口描述：Sets the result code and data to be returned by this Feature ability to the caller.',
////                        index:6,
////                    },
////                    {
////                        title: 'AMS类接口',
////                        date: '接口名称：getAllRunningProcesses',
////                        depict:'接口描述：Obtains information about application processes that are running on the device.',
////                        index:7,
////                    },
////                    {
////                        title: 'AMS类接口',
////                        date: '接口名称：queryRunningAbilityMissionInfos',
////                        depict:'接口描述：Queries information about the running Ability Mission.',
////                        index:8,
////                    },
////                    {
////                        title: 'AMS类接口',
////                        date: '接口名称：queryRecentAbilityMissionInfos',
////                        depict:'接口描述：information about the recent Ability Mission.',
////                        index:9,
////                    },
////                    {
////                        title: 'AMS类接口',
////                        date: '接口名称：removeMission',
////                        depict:'接口描述：Remove the mission associated with the given mission ID.',
////                        index:10,
////                    },
////                    {
////                        title: 'AMS类接口',
////                        date: '接口名称：removeMissions',
////                        depict:'接口描述：Remove the missions associated with the given array of the mission ID.',
////                        index:11,
////                    },
////                    {
////                        title: 'AMS类接口',
////                        date: '接口名称：clearMissions',
////                        depict:'接口描述：Removes all the recent missions',
////                        index:12,
////                    },
////                    {
////                        title: 'AMS类接口',
////                        date: '接口名称：moveMissionToTop',
////                        depict:'接口描述：Ask that the mission associated with a given mission ID be moved to the front of the stack.',
////                        index:13,
////                    },
////                    {
////                        title: 'AMS类接口',
////                        date: '接口名称：killProcessesByBundleName',
////                        depict:'接口描述：Kills all background processes associated with a specified bundle.',
////                        index:14,
////                    },
////                    {
////                        title: 'BMS类接口',
////                        date: '接口名称：getBundleInfo',
////                        depict:'接口描述：Obtains BundleInfo based on a given bundle name.',
////                        index:15,
////                    },
////                    {
////                        title: 'BMS类接口',
////                        date: '接口名称：getBundleInstaller',
////                        depict:'接口描述：Obtains Bundle installer to install or uninstall hap.',
////                        index:16,
////                    },
////                    {
////                        title: 'BMS类接口',
////                        date: '接口名称：getApplicationInfo',
////                        depict:'接口描述：Obtains the ApplicationInfo based on a given application name.',
////                        index:17,
////                    },
////                    {
////                        title: 'BMS类接口',
////                        date: '接口名称：queryAbilityByWant',
////                        depict:'接口描述：Query the AbilityInfo by the given Want.',
////                        index:18,
////                    },
////                    {
////                        title: 'BMS类接口',
////                        date: '接口名称：getBundleInfos',
////                        depict:'接口描述：Obtains BundleInfo of all bundles available in the system.',
////                        index:19,
////                    },
////                    {
////                        title: 'BMS类接口',
////                        date: '接口名称：getApplicationInfos',
////                        depict:'接口描述：Obtains information about all installed applications.',
////                        index:20,
////                    },
////                    {
////                        title: 'BMS类接口',
////                        date: '接口名称：getBundleArchiveInfo',
////                        depict:'接口描述：Obtains information about a bundle contained in a HAP.',
////                        index:21,
////                    },
////                    {
////                        title: 'BMS类接口',
////                        date: '接口名称：getPermissionDef',
////                        depict:'接口描述：Obtains detailed information about a specified permission.',
////                        index:22,
////                    },
////                    {
////                        title: 'CES类接口',
////                        date: '接口名称：publish',
////                        depict:'接口描述：Publishes an ordered, sticky, or standard common event.',
////                        index:23,
////                    },
////                    {
////                        title: 'CES类接口',
////                        date: '接口名称：createSubscriber',
////                        depict:'接口描述：create the CommonEventSubscriber for the SubscriberInfo.',
////                        index:24,
////                    },
////                    {
////                        title: 'CES类接口',
////                        date: '接口名称：subscribe',
////                        depict:'接口描述：subscribe an ordered, sticky, or standard common event.',
////                        index:25,
////                    },
////                    {
////                        title: 'CES类接口',
////                        date: '接口名称：unsubscribe',
////                        depict:'接口描述：unsubscribe an ordered, sticky, or standard common event.',
////                        index:26,
////                    },
////            {
////                title: 'CES类接口',
////                date: '接口名称：subscribe者1',
////                depict:'接口描述：有序事件测试',
////                index:27,
////            },
////            {
////                title: 'CES类接口',
////                date: '接口名称：subscribe者2',
////                depict:'接口描述：有序事件测试',
////                index:28,
////            },
////            {
////                title: 'CES类接口',
////                date: '接口名称：subscribe者3',
////                depict:'接口描述：有序事件测试',
////                index:29,
////            },
////            {
////                title: 'CES类接口',
////                date: '接口名称：publish',
////                depict:'接口描述：发布事件',
////                index:30,
////            },
////            {
////                title: 'BMS类接口',
////                date: '接口名称：requestPermissionsFromUser',
////                depict:'接口描述：权限弹窗',
////                index:31,
////            },
//        ],
//    },
////    async onRecivePermission1(err, data) {
////        console.info('======permission changed 0100=======');
////        console.info("permission changed err code"+ err.code);
////        console.info("permission changed uid"+data);
////        result.set(data, 0)
////    },
////    onRecivePermission2(err, data) {
////        console.info('======permission changed 0200=======');
////        console.info("permission changed err code"+ err.code);
////        console.info("permission changed uid"+data);
////        result.set(data, 0)
////    },
////    checkPermissionChange(result, uids)
////    {
////        console.info("=====check permission change=====");
////        for(let i=0;i<uids.length;i++)
////        {
////            console.info("=======whether has uid========="+result.has(uids[i]));
////        }
////    },
////    onVerifyPermission(err , data)
////    {
////       console.info("verifypermission err code"+err.code);
////       console.info("verifypermission data "+ data);
////    },
////    async Onclick(index)
////    {
////        console.info('==============test first item============index=' + index);
////        switch(index)
////        {
////            case 0:
////                console.info('=====================StartShortcut_0100==================');
////                var dataInfo = await bundle.StartShortcut('id',"bundleName");
////                bundle.on('anyPermissionChange', this.onRecivePermission1);
////                var context = await featureAbility.getContext();
////                context.requestPermissionsFromUser(["ohos.permission.READ_CALENDAR"], 580).then(async data=>{
////                    await context.verifyPermission("ohos.permission.READ_CALENDAR",0,dataInfo.uid,this.onVerifyPermission);
////                    await bundle.off('anyPermissionChange',this.onRecivePermission2);
////                });
////                this.checkPermissionChange(result, [dataInfo.uid]);
////                result.clear();
//                break;
////            case 1:
////                console.info('=====================permissionChange_0200==================');
////                var dataInfo = await bundle.getBundleInfo('com.example.bmsjstest4',1);
////                bundle.on('permissionChange', this.onRecivePermission2);
////                var context = await featureAbility.getContext();
////                context.requestPermissionsFromUser(["ohos.permission.CAMERA"], 580).then(async data=>{
////                    await context.verifyPermission("ohos.permission.CAMERA",0,dataInfo.uid,this.thisonVerifyPermission);
////                    await bundle.off('permissionChange',this.onRecivePermission2);
////                });
////                this.checkPermissionChange(result, [dataInfo.uid]);
////                result.clear();
////                break;
////            case 2 :
////                console.info('==============test 3rd item============');
////                featureAbility.terminateAbility().then(data =>
////                console.log("terminateAbility promise::then : " + data)
////                ).catch(error =>
////                console.log("terminateAbility promise::catch : " + error)
////                );
////
////                featureAbility.terminateAbility((err, data) => {
////                    console.log("terminateAbility asyncCallback code: " + err.code + " data: " + data)
////                });
////                break;
////            case 3 :
////                console.info('==============test 4th item============');
////                featureAbility.getWant((err, data) => {
////                    console.log("getWant asyncCallback code: " + err.code + " data: " + data.bundleName)
////                });
////
////                featureAbility.getWant().then(data =>
////                console.log("getWant promise::then : " + data)
////                ).catch(error =>
////                console.log("getWant promise::catch : " + error)
////                );
////                break;
////            case 4 :
////                console.info('==============test 5th item============');
////                featureAbility.startAbility({
////                want:
////                {
////                    bundleName: "com.ohos.settings",
////                    abilityName: "com.ohos.settings.MainAbility"
////                }
////                } , (err, data) => {
////                    console.log("startAbility asyncCallback code: " + err.code + " data: " + data)
////                });
////
////                featureAbility.startAbility({
////                    want:
////                    {
////                        bundleName: "com.ohos.settings",
////                        abilityName: "com.ohos.settings.MainAbility"
////                    }
////                }).then(data =>
////                console.log("getWant promise::then : " + data)
////                ).catch(error =>
////                console.log("getWant promise::catch : " + error)
////                );
////                break;
////            case 5 :
////                console.info('==============test 6th item============');
////                featureAbility.startAbilityForResult({
////                    want:
////                    {
////                        action: "action.system.samples",
////                        entities: ["entity.system.samples"],
////                        type: "MIMETYPE",
////                        options:{
////                        // indicates the grant to perform read operations on the URI
////                            authReadUriPermission: true,
////                        // indicates the grant to perform write operations on the URI
////                            authWriteUriPermission: true,
////                        // support forward intent result to origin ability
////                            abilityForwardResult: true,
////                        // used for marking the ability start-up is triggered by continuation
////                            abilityContinuation: true,
////                        // specifies whether a component does not belong to ohos
////                            notOhosComponent: true,
////                        // specifies whether an ability is started
////                            abilityFormEnabled: true,
////                        // indicates the grant for possible persisting on the URI.
////                            authPersistableUriPermission: true,
////                        // indicates the grant for possible persisting on the URI.
////                            authPrefixUriPermission: true,
////                        // support distributed scheduling system start up multiple devices
////                            abilitySliceMultiDevice: true,
////                        // indicates that an ability using the service template is started regardless of whether the
////                        // host application has been started.
////                            startForegroundAbility: true,
////                        // install the specified ability if it's not installed.
////                            installOnDemand: true,
////                        // return result to origin ability slice
////                            abilitySliceForwardResult: true,
////                        // install the specified ability with background mode if it's not installed.
////                            installWithBackgroundMode: true
////                        },
////                        deviceId: "deviceId",
////                        bundleName: "ohos.samples.ecg",
////                        abilityName: "ohos.samples.ecg.MainAbility",
////                        uri:""
////                    },
////                    requestCode: 2,
////                },
////                    (err, data) => {
////                        console.log('featureAbilityTest startAbilityForResult asyncCallback err : ' + err + " data: " + data)
////                    },
////                );
////                break;
////            case 6 :
////                console.info('==============test 7th item============');
////                break;
////            case 7 :
////                console.info('==============test 8th item============');
////                var info = abilityManager.getAllRunningProcesses().then(
////                    data => {
////                        for (var i = 0; i < data.length; i++) {
////                            console.info('getAllRunningProcesses promise pid ：' + data[i].pid + ' processName:' +
////                            data[i].processName);
////                        }
////                    }
////                ).catch(error =>
////		            console.log("getAllRunningProcesses promise::catch : " + error));
////
////                var result = abilityManager.getAllRunningProcesses(data => {
////                    for (var i = 0; i < data.length; i++) {
////                        console.info('getAllRunningProcesses callback pid ：' + data[i].pid + ' processName:' + data[i].processName + ' appProcessState:' + data[i].appProcessState);
////                    }
////                })
////                break;
////            case 8 :
////                console.info('==============test 9th item============');
////                await abilityManager.queryRunningAbilityMissionInfos(10).then(data => {
////                    console.info('========9th======data.length============'+ data.length);
////                    console.info('========9th======data============'+ JSON.stringify(data));
////                }).catch(error => {
////                        console.log("queryRunningAbilityMissionInfos promise::catch : " + error);
////                });
////
//////                var result = abilityManager.queryRunningAbilityMissionInfos(data => {
//////                    for (var i = 0; i < data.length; i++) {
//////                        console.info('queryRunningAbilityMissionInfos promise id ：' + data[i].id + ' runingState:' +
//////                        data[i].runingState + ' size:' +data[i].size + ' baseAbility.deviceId:' +
//////                        data[i].baseAbility.deviceId + ' baseAbility.bundleName:' + data[i].baseAbility.bundleName +'baseAbility.abilityName:' +
//////                        data[i].baseAbility.abilityName + ' topAbility.deviceId:' + data[i].topAbility.deviceId + ' topAbility.bundleName:' +
//////                        data[i].topAbility.bundleName +'topAbility.abilityName:' + data[i].topAbility.abilityName + ' missionDescription.label:' +
//////                        data[i].missionDescription.label + ' missionDescription.iconPath:' + data[i].missionDescription.iconPath +  ' baseWant.type:' +
//////                        data[i].baseWant.type + 'baseWant.flags:' + data[i].baseWant.flags + 'baseWant.action:' +
//////                        data[i].baseWant.action + 'baseWant.elementName.deviceId:' + data[i].baseWant.elementName.deviceId + 'baseWant.elementName.bundleName:' +
//////                        data[i].baseWant.elementName.bundleName + 'baseWant.elementName.abilityName' +data[i].baseWant.elementName.abilityName);
//////                        for(var j = 0; j <data[i].baseWant.entities.length; j++){
//////                            console.info('queryRunningAbilityMissionInfos promise baseWant.entities：' + data[i].baseWant.entities[j] );
//////                        }
//////                    }
//////                });
////                break;
////            case 9 :
////                        console.info('==============test 10th item============');
////                        var result = abilityManager.queryRecentAbilityMissionInfos(10,1).then(data => {
////                            console.info('===========10th===data.length============'+ data.length);
////                            console.info('======queryRecentAbilityMissionInfos==10th=======data============'+ JSON.stringify(data));
////                }).catch(error =>
////		                console.log("queryRecentAbilityMissionInfos promise::catch : " + error));
////
//////                        var result = abilityManager.queryRecentAbilityMissionInfos( data => {
//////                            for (var i = 0; i < data.length; i++) {
//////                                console.info('queryRecentAbilityMissionInfos promise id ：' + data[i].id + ' runingState:' + data[i].runingState + ' size:'
//////                                +data[i].size + 'baseAbility.deviceId:' + data[i].baseAbility.deviceId + ' baseAbility.bundleName:'
//////                                + data[i].baseAbility.bundleName +'baseAbility.abilityName:' + data[i].baseAbility.abilityName + 'topAbility.deviceId:'
//////                                + data[i].topAbility.deviceId + ' topAbility.bundleName:' + data[i].topAbility.bundleName +'topAbility.abilityName:'
//////                                + data[i].topAbility.abilityName + ' missionDescription.label:' + data[i].missionDescription.label + 'missionDescription.iconPath:'
//////                                + data[i].missionDescription.iconPath +  ' baseWant.type:' + data[i].baseWant.type + 'baseWant.flags:'
//////                                + data[i].baseWant.flags + 'baseWant.action:' + data[i].baseWant.action + 'baseWant.elementName.deviceId:'
//////                                + data[i].baseWant.elementName.deviceId + 'baseWant.elementName.bundleName:' + data[i].baseWant.elementName.bundleName + 								'baseWant.elementName.abilityName' +data[i].baseWant.elementName.abilityName);
//////                                for(var j = 0; j <data[i].baseWant.entities.length; j++){
//////                                    console.info('queryRecentAbilityMissionInfos promise baseWant.entities：' 								+data[i].baseWant.entities[j]);
//////                                }
//////                            }
//////                        });
////                break;
////            case 10 :
////                console.info('==============test 11th item============');
////                var stackId = 1;
////                var info = abilityManager.removeMission(stackId).then(data =>
////		            console.log("removeStack promise: " + data)).catch(error =>
////		            console.log("removeStack promise::catch : " + error));
////
////                var stackIdCallBack = 1;
////                var result = abilityManager.removeStack(stackIdCallBack, data => {
////                    console.log("removeStack callback: " + data);
////                });
////                break;
////            case 11 :
////                console.info('==============test 12th item============');
////                var missionIds = [1,3];
////                var info = abilityManager.removeMissions(missionIds).then(data =>
////                    console.info('removeMissions promise: ' + data)).catch(error =>
////                    console.info('removeMissions promise::catch : ' + error));
////
////                var missionIdsCallBack = [1,3];
////                var result = abilityManager.removeMissions(missionIdsCallBack, (error, data) => {
////                    console.info('removeMissions callback: ' + data + ' error.code: ' + error.code);
////                });
////                break;
////            case 12 :
////                console.info('==============test 13th item============');
////                var info = abilityManager.clearMissions().then(data =>
////                    console.info('clearMissions promise:' + data)).catch(error =>
////                    console.info('clearMissions promise::catch : ' + error));
////
////                var result = abilityManager.clearMissions((error, data) => {
////                    console.info('clearMissions callback: ' + data + ' error.code: ' + error.code);
////                });
////                break;
////            case 13 :
////                console.info('==============test 14th item============');
////                var missionId = 1;
////                var info = abilityManager.moveMissionToTop(missionId).then(data =>
////                    console.info('moveMissionToTop promise: ' + data)).catch(error =>
////                    console.info('moveMissionToTop promise::catch : ' + error));
////
////                var missionIdCallBack = 1;
////                var result = abilityManager.moveMissionToTop(missionIdCallBack, (error, data) => {
////                    console.info('moveMissionToTop callback: ' + data + ' error.code: ' + error.code);
////                });
////                break;
////            case 14 :
////                console.info('==============test 15th item============');
////                var bundleName = 'com.ohos.settings';
////                var info = abilityManager.killProcessesByBundleName(bundleName).then(data =>
////                    console.info('killProcessesByBundleName promise: ' + data)).catch(error =>
////                    console.info('killProcessesByBundleName promise::catch : ' + error));
////
////                var bundleNameCallBack = 'com.ohos.settings';
////                var result = abilityManager.killProcessesByBundleName(bundleNameCallBack, (error, data) => {
////                    console.info('killProcessesByBundleName callback: ' + data + ' error.code: ' + error.code);
////                });
////                break;
////            case 15 :
////                console.info('==============test 16th item============');
////                bundle.getBundleInfo('com.example.myapplication',1,OnReceiveEvent);
////                function OnReceiveEvent(err,data) {
////                    console.info("neuXXXXgetBundleInfoXXXX.name: for begin");
////                    console.info("neu========================err.code:" + err.code);
////                    console.info("neu========================err.code:" + err.code);
////                    console.info("neu========================data.name:::" + data.name);
////                }
////
////                bundle.getBundleInfo('com.example.myapplication',1).then((data) => {
////                    console.info("neu========================getBundleInfo callback: for begin");
////                    console.info("neu========================getBundleInfo callback result:" + data.name);
////                });
////
////                break;
////            case 16 :
////                console.info('==============test 17th item============');
////                bundle.getBundleInstaller().then((data) => {
////                    data.install(['/system/app/Settings.hap'], {
////                        param: {
////                            userId: 0,
////                            isKeepData: false
////                        }
////                    }, OnReceiveinstallEvent);
////
////                    function OnReceiveinstallEvent(err,data) {
////                        console.info("==============================install async install1==============================");
////                        console.info("neu========================name: for begin");
////                        console.info("neu========================install result code:" + err.code);
////                        console.info("neu========================install result code:" + data.status);
////                        console.info("neu========================install result msg:" + data.statusMessage);
////                    }
////                });
////                break;
////            case 17 :
////                console.info('==============test 18th item============');
////                bundle.getApplicationInfo('com.ohos.settings', 8, 0).then((data) => {
////                    console.info('**************************getApplicationInfo1********************************');
////                    console.info("neu========================name: for begin");
////                    console.info("neu========================name:" + data.name);
////                    console.info("neu========================description:" + data.description);
////                    console.info("neu========================descriptionId:" + data.descriptionId);
////                    console.info("neu========================iconId:" + data.iconId);
////                    console.info("neu========================label:" + data.label);
////                    console.info("neu========================labelId:" + data.labelId);
////                    console.info("neu========================process:" + data.process);
////                    console.info("neu========================supportedModes:" + data.supportedModes);
////
////                    console.info('getApplicationInfo permissions length [' + data.permissions.length + ']');
////                    for (var j = 0; j < data.permissions.length; j++) {
////                        console.info("neu====================permissions[" + j + "]:" + data.permissions[j]);
////                    }
////                    console.info('getApplicationInfo moduleSourceDirs length [' + data.moduleSourceDirs.length + ']');
////                    for (var j = 0; j < data.moduleSourceDirs.length; j++) {
////                        console.info("neu====================moduleSourceDirs[" + j + "]:" + data.moduleSourceDirs[j]);
////                    }
////                    console.info('getApplicationInfo moduleInfos length [' + data.moduleInfos.length + ']');
////                    for (var j = 0; j < data.moduleInfos.length; j++) {
////                        console.info("neu====================moduleInfos[" + j + "]moduleName:" + data.moduleInfos[j].moduleName);
////                        console.info("neu====================moduleInfos[" + j + "]moduleSourceDir:" + data.moduleInfos[j].moduleSourceDir);
////                    }
////                    console.info("neu========================entryDir:" + data.entryDir);
////                });
////
////                bundle.getApplicationInfo('com.ohos.settings', 8, 0, OnReceiveEventCallBack);
////
////                function OnReceiveEventCallBack(data) {
////                    console.info('**************************getApplicationInfo2********************************');
////                    console.info("neu========================name: for begin");
////                    console.info("neu========================name:" + data.name);
////                    console.info("neu========================description:" + data.description);
////                    console.info("neu========================descriptionId:" + data.descriptionId);
////                    console.info("neu========================iconId:" + data.iconId);
////                    console.info("neu========================label:" + data.label);
////                    console.info("neu========================labelId:" + data.labelId);
////                    console.info("neu========================process:" + data.process);
////                    console.info("neu========================supportedModes:" + data.supportedModes);
////
////                    console.info('getApplicationInfo permissions length [' + data.permissions.length + ']');
////                    for (var j = 0; j < data.permissions.length; j++) {
////                        console.info("neu====================permissions[" + j + "]:" + data.permissions[j]);
////                    }
////                    console.info('getApplicationInfo moduleSourceDirs length [' + data.moduleSourceDirs.length + ']');
////                    for (var j = 0; j < data.moduleSourceDirs.length; j++) {
////                        console.info("neu====================moduleSourceDirs[" + j + "]:" + data.moduleSourceDirs[j]);
////                    }
////                    console.info('getApplicationInfo moduleInfos length [' + data.moduleInfos.length + ']');
////                    for (var j = 0; j < data.moduleInfos.length; j++) {
////                        console.info("neu====================moduleInfos[" + j + "]moduleName:" + data.moduleInfos[j].moduleName);
////                        console.info("neu====================moduleInfos[" + j + "]moduleSourceDir:" + data.moduleInfos[j].moduleSourceDir);
////                    }
////                    console.info("neu========================entryDir:" + data.entryDir);
////                }
////                break;
////            case 18 :
////                console.info('==============test 19th item============');
////                bundle.queryAbilityByWant({
////                    want: {
////                        action: "action.system.home",
////                        entities: ["entity.system.home"],
////                        elementName: {
////                            deviceId: "0",
////                            bundleName: "ohos.samples.ecg",
////                            abilityName: "ohos.samples.ecg.MainAbility",
////                        },
////                    }
////                }, {
////                    params: {
////                        flags: 8,
////                        userId: "0",
////                    }
////                },OnReceiveEvent5);
////
////                function OnReceiveEvent5(err,datainfo) {
////
////                    console.info("neuXXXXXXqueryAbilityByWantXXXXXXX.name: for begin");
////
////                    console.info("neu========================err.code:" + err.code);
////                    console.info("neu========================datainfo.name:" + datainfo.name);
////                }
////                break;
////            case 19 :
////                console.info('==============test 20th item============');
////                bundle.getBundleInfos(8).then((data) => {
////                    console.info('**************************getBundleInfos1********************************');
////                    console.info('xxx getBundleInfos data length [' + data.length + ']');
////                    for (var i = 0; i < data.length; i++) {
////                        console.info("neu========================index[" + i + "].name: for begin");
////                        console.info("neu========================index[" + i + "].name:" + data[i].name);
////                        console.info("neu========================index[" + i + "].vendor:" + data[i].vendor);
////                        console.info("neu========================index[" + i + "].versionCode:" + data[i].versionCode);
////                        console.info("neu========================index[" + i + "].versionName:" + data[i].versionName);
////                        console.info("neu========================index[" + i + "].cpuAbi:" + data[i].cpuAbi);
////                        console.info("neu========================index[" + i + "].compatibleVersion:" + data[i].compatibleVersion);
////                        console.info("neu========================index[" + i + "].targetVersion:" + data[i].targetVersion);
////                        console.info("neu========================index[" + i + "].uid:" + data[i].uid);
////                        console.info("neu========================index[" + i + "].entryModuleName:" + data[i].entryModuleName);
////                        console.info("neu========================index[" + i + "].installTime:" + data[i].installTime);
////                        console.info("neu========================index[" + i + "].updateTime:" + data[i].updateTime);
////                        console.info("neu========================index[" + i + "].appInfo.name:" + data[i].applicationInfo.name);
////                        console.info("neu========================index[" + i + "].appInfo.bundleName:" + data[i].applicationInfo.bundleName);
////                        console.info('getBundleInfos reqPermissions length [' + data[i].reqPermissions.length + ']');
////                        for (var j = 0; j < data[i].reqPermissions.length; j++) {
////                            console.info("neu====================index[" + i + "]reqPermissions[" + j + "]:" + data[i].reqPermissions[j]);
////                        }
////                        console.info('getBundleInfos defPermissions length [' + data[i].defPermissions.length + ']');
////                        for (var j = 0; j < data[i].defPermissions.length; j++) {
////                            console.info("neu====================index[" + i + "]defPermissions[" + j + "]:" + data[i].defPermissions[j]);
////                        }
////
////                        console.info('getBundleInfos hapModuleNames length [' + data[i].hapModuleNames.length + ']');
////                        for (var j = 0; j < data[i].hapModuleNames.length; j++) {
////                            console.info("neu====================index[" + i + "]hapModuleNames[" + j + "]:" + data[i].hapModuleNames[j]);
////                        }
////                        console.info('getBundleInfos moduleNames length [' + data[i].moduleNames.length + ']');
////                        for (var j = 0; j < data[i].moduleNames.length; j++) {
////                            console.info("neu====================index[" + i + "]moduleNames[" + j + "]:" + data[i].moduleNames[j]);
////                        }
////                        console.info('getBundleInfos modulePublicDirs length [' + data[i].modulePublicDirs.length + ']');
////                        for (var j = 0; j < data[i].modulePublicDirs.length; j++) {
////                            console.info("neu====================index[" + i + "]modulePublicDirs[" + j + "]:" + data[i].modulePublicDirs[j]);
////                        }
////                        console.info('getBundleInfos moduleDirs length [' + data[i].moduleDirs.length + ']');
////                        for (var j = 0; j < data[i].moduleDirs.length; j++) {
////                            console.info("neu====================index[" + i + "]moduleDirs[" + j + "]:" + data[i].moduleDirs[j]);
////                        }
////                        console.info('getBundleInfos moduleResPaths length [' + data[i].moduleResPaths.length + ']');
////                        for (var j = 0; j < data[i].moduleResPaths.length; j++) {
////                            console.info("neu====================index[" + i + "]moduleResPaths[" + j + "]:" + data[i].moduleResPaths[j]);
////                        }
////                        console.info('getBundleInfos abilityInfo length [' + data[i].abilityInfos.length + ']');
////                        for (var j = 0; j < data[i].abilityInfos.length; j++) {
////                            console.info("neu====================index[" + i + "]abilityInfos[" + j + "]name:" + data[i].abilityInfos[j].name);
////                            console.info("neu====================index[" + i + "]abilityInfos[" + j + "]package:" + data[i].abilityInfos[j].package);
////                        }
////                    }
////                });
////
////                bundle.getBundleInfos(8, OnReceiveEventCallBack1);
////
////                function OnReceiveEventCallBack1(data) {
////                    console.info('**************************getBundleInfos2********************************');
////                    console.info('xxx getBundleInfos data length [' + data.length + ']');
////                    for (var i = 0; i < data.length; i++) {
////                        console.info("neu========================index[" + i + "].name: for begin");
////                        console.info("neu========================index[" + i + "].name:" + data[i].name);
////                        console.info("neu========================index[" + i + "].vendor:" + data[i].vendor);
////                        console.info("neu========================index[" + i + "].versionCode:" + data[i].versionCode);
////                        console.info("neu========================index[" + i + "].versionName:" + data[i].versionName);
////                        console.info("neu========================index[" + i + "].cpuAbi:" + data[i].cpuAbi);
////                        console.info("neu========================index[" + i + "].compatibleVersion:" + data[i].compatibleVersion);
////                        console.info("neu========================index[" + i + "].targetVersion:" + data[i].targetVersion);
////                        console.info("neu========================index[" + i + "].uid:" + data[i].uid);
////                        console.info("neu========================index[" + i + "].entryModuleName:" + data[i].entryModuleName);
////                        console.info("neu========================index[" + i + "].installTime:" + data[i].installTime);
////                        console.info("neu========================index[" + i + "].updateTime:" + data[i].updateTime);
////                        console.info("neu========================index[" + i + "].appInfo.name:" + data[i].applicationInfo.name);
////                        console.info("neu========================index[" + i + "].appInfo.name:" + data[i].applicationInfo.name);
////                        console.info("neu========================index[" + i + "].appInfo.bundleName:" + data[i].applicationInfo.bundleName);
////                        console.info('getBundleInfos reqPermissions length [' + data[i].reqPermissions.length + ']');
////                        for (var j = 0; j < data[i].reqPermissions.length; j++) {
////                            console.info("neu====================index[" + i + "]reqPermissions[" + j + "]:" + data[i].reqPermissions[j]);
////                        }
////                        console.info('getBundleInfos defPermissions length [' + data[i].defPermissions.length + ']');
////                        for (var j = 0; j < data[i].defPermissions.length; j++) {
////                            console.info("neu====================index[" + i + "]defPermissions[" + j + "]:" + data[i].defPermissions[j]);
////                        }
////
////                        console.info('getBundleInfos hapModuleNames length [' + data[i].hapModuleNames.length + ']');
////                        for (var j = 0; j < data[i].hapModuleNames.length; j++) {
////                            console.info("neu====================index[" + i + "]hapModuleNames[" + j + "]:" + data[i].hapModuleNames[j]);
////                        }
////                        console.info('getBundleInfos moduleNames length [' + data[i].moduleNames.length + ']');
////                        for (var j = 0; j < data[i].moduleNames.length; j++) {
////                            console.info("neu====================index[" + i + "]moduleNames[" + j + "]:" + data[i].moduleNames[j]);
////                        }
////                        console.info('getBundleInfos modulePublicDirs length [' + data[i].modulePublicDirs.length + ']');
////                        for (var j = 0; j < data[i].modulePublicDirs.length; j++) {
////                            console.info("neu====================index[" + i + "]modulePublicDirs[" + j + "]:" + data[i].modulePublicDirs[j]);
////                        }
////                        console.info('getBundleInfos moduleDirs length [' + data[i].moduleDirs.length + ']');
////                        for (var j = 0; j < data[i].moduleDirs.length; j++) {
////                            console.info("neu====================index[" + i + "]moduleDirs[" + j + "]:" + data[i].moduleDirs[j]);
////                        }
////                        console.info('getBundleInfos moduleResPaths length [' + data[i].moduleResPaths.length + ']');
////                        for (var j = 0; j < data[i].moduleResPaths.length; j++) {
////                            console.info("neu====================index[" + i + "]moduleResPaths[" + j + "]:" + data[i].moduleResPaths[j]);
////                        }
////                        console.info('getBundleInfos abilityInfo length [' + data[i].abilityInfos.length + ']');
////                        for (var j = 0; j < data[i].abilityInfos.length; j++) {
////                            console.info("neu====================index[" + i + "]abilityInfos[" + j + "]name:" + data[i].abilityInfos[j].name);
////                            console.info("neu====================index[" + i + "]abilityInfos[" + j + "]package:" + data[i].abilityInfos[j].package);
////                        }
////                    }
////                };
////                break;
////            case 20 :
////                console.info('==============test 21th item============');
////                bundle.getApplicationInfos(8, 0).then((data) => {
////                    console.info('**************************getApplicationInfos1********************************');
////                    console.info('xxx getApplicationInfos data length [' + data.length + ']');
////                    for (var i = 0; i < data.length; i++) {
////                        console.info("neu========================index[" + i + "].name: for begin");
////                        console.info("neu========================index[" + i + "].name:" + data[i].name);
////                        console.info("neu========================index[" + i + "].description:" + data[i].description);
////                        console.info("neu========================index[" + i + "].descriptionId:" + data[i].descriptionId);
////                        console.info("neu========================index[" + i + "].iconId:" + data[i].iconId);
////                        console.info("neu========================index[" + i + "].label:" + data[i].label);
////                        console.info("neu========================index[" + i + "].labelId:" + data[i].labelId);
////                        console.info("neu========================index[" + i + "].process:" + data[i].process);
////                        console.info("neu========================index[" + i + "].supportedModes:" + data[i].supportedModes);
////
////                        console.info('getApplicationInfosAsync permissions length [' + data[i].permissions.length + ']');
////                        for (var j = 0; j < data[i].permissions.length; j++) {
////                            console.info("neu====================index[" + i + "]permissions[" + j + "]:" + data[i].permissions[j]);
////                        }
////                        console.info('getApplicationInfosAsync moduleSourceDirs length [' + data[i].moduleSourceDirs.length + ']');
////                        for (var j = 0; j < data[i].moduleSourceDirs.length; j++) {
////                            console.info("neu====================index[" + i + "]moduleSourceDirs[" + j + "]:" + data[i].moduleSourceDirs[j]);
////                        }
////                        console.info('getApplicationInfosAsync moduleInfos length [' + data[i].moduleInfos.length + ']');
////                        for (var j = 0; j < data[i].moduleInfos.length; j++) {
////                            console.info("neu====================index[" + i + "]moduleInfos[" + j + "]moduleName:" + data[i].moduleInfos[j].moduleName);
////                            console.info("neu====================index[" + i + "]moduleInfos[" + j + "]moduleSourceDir:" + data[i].moduleInfos[j].moduleSourceDir);
////                        }
////                        console.info("neu========================index[" + i + "].entryDir:" + data[i].entryDir);
////                    }
////                });
////
////                bundle.getApplicationInfos(8, 0, OnReceiveEventCallBack2);
////
////                function OnReceiveEventCallBack2(data) {
////                    console.info('**************************getApplicationInfos2********************************');
////                    console.info('xxx getApplicationInfos data length [' + data.length + ']');
////                    for (var i = 0; i < data.length; i++) {
////                        console.info("neu========================index[" + i + "].name: for begin");
////                        console.info("neu========================index[" + i + "].name:" + data[i].name);
////                        console.info("neu========================index[" + i + "].description:" + data[i].description);
////                        console.info("neu========================index[" + i + "].descriptionId:" + data[i].descriptionId);
////                        console.info("neu========================index[" + i + "].iconId:" + data[i].iconId);
////                        console.info("neu========================index[" + i + "].label:" + data[i].label);
////                        console.info("neu========================index[" + i + "].labelId:" + data[i].labelId);
////                        console.info("neu========================index[" + i + "].process:" + data[i].process);
////                        console.info("neu========================index[" + i + "].supportedModes:" + data[i].supportedModes);
////
////                        console.info('getApplicationInfosAsync permissions length [' + data[i].permissions.length + ']');
////                        for (var j = 0; j < data[i].permissions.length; j++) {
////                            console.info("neu====================index[" + i + "]permissions[" + j + "]:" + data[i].permissions[j]);
////                        }
////                        console.info('getApplicationInfosAsync moduleSourceDirs length [' + data[i].moduleSourceDirs.length + ']');
////                        for (var j = 0; j < data[i].moduleSourceDirs.length; j++) {
////                            console.info("neu====================index[" + i + "]moduleSourceDirs[" + j + "]:" + data[i].moduleSourceDirs[j]);
////                        }
////                        console.info('getApplicationInfosAsync moduleInfos length [' + data[i].moduleInfos.length + ']');
////                        for (var j = 0; j < data[i].moduleInfos.length; j++) {
////                            console.info("neu====================index[" + i + "]moduleInfos[" + j + "]moduleName:" + data[i].moduleInfos[j].moduleName);
////                            console.info("neu====================index[" + i + "]moduleInfos[" + j + "]moduleSourceDir:" + data[i].moduleInfos[j].moduleSourceDir);
////                        }
////                        console.info("neu========================index[" + i + "].entryDir:" + data[i].entryDir);
////                    }
////                };
////                break;
////            case 21 :
////                console.info('==============test 22th item============');
//////                bundle.getBundleArchiveInfo('/data/test-api-signed.hap',1).then((data) => {
//////                console.info("neu========================getBundleArchiveInfo: for begin");
//////                console.info("neu========================getBundleArchiveInfo result:" + data.name);
//////                 });
////                await bundle.getBundleArchiveInfo('/data/text_BMS_signed.hap',1,OnReceiveEvent7);
////                function OnReceiveEvent7(data) {
////                    console.info('**************************getBundleArchiveInfo callback********************************');
////                    console.info("neu========================name:" + data.name);
////                    };
////                    break;
////            case 22 :
////                console.info('==============test 23th item============');
////                var info = bundle.getPermissionDef("com.permission.CAMERA",OnReceiveEvent6);
////                console.info('getPermissionDef permissionName'+ info.permissionName);
////                console.info('getPermissionDef bundleName'+ info.bundleName);
////                function OnReceiveEvent6(data) {
////                    console.info('**************************getPermissionDef********************************');
////                    console.info("neu========================permissionName:" + data.permissionName);
////                };
////                break;
////            case 23 :
////            case 24 :
////            case 25 :
////                console.info('==============test 24th item============');
////                function PublishCallback(err) {
////                    console.info("==========================>PublishCallback=======================>");
////                }
////                function SubscriberCallBack004(err, data) {
////                    console.info("==========================>SubscriberCallBack0400=======================>" + data.event);
////                }
////                async function CreateSubscriberCallBack(err, data) {
////                    console.info("==========================>CreateSubscriberCallBack=======================>");
////                    Subscriberdata = data;
////                    await commonEvent.subscribe(Subscriberdata, SubscriberCallBack004);
////                }
////                var CommonEventSubscribeInfo = {
////                    events: ["publish_event0400"],
////                };
////                commonEvent.createSubscriber(
////                    CommonEventSubscribeInfo,
////                    CreateSubscriberCallBack
////                )
////                commonEvent.publish("publish_event0400", PublishCallback);
////                break;
////            case 26 :
////                console.info('==============test 27th item============');
////                var subscribeData;
////                function SubscriberCallBack005(err, data) {
////                    console.info("==========================>SubscriberCallBack0400=======================>" + data.event);
////                }
////                async function CreateSubscriberCallBack2(err, data) {
////                    console.info("==========================>CreateSubscriberCallBack=======================>");
////                    subscribeData = data;
////                    await commonEvent.subscribe(subscribeData, SubscriberCallBack005);
////                }
////                var CommonEventSubscribeInfo = {
////                    events: ["publish_event0400"],
////                };
////                await commonEvent.createSubscriber(
////                    CommonEventSubscribeInfo,
////                    CreateSubscriberCallBack2
////                )
////                commonEvent.unsubscribe(subscribeData);
////                break;
////            case 27:
////                console.info('==============test 27 item=====第一个订阅者=======');
////                function SubscriberCallBackFirst(err, data) {
////                    console.info("==========================>SubscriberCallBackFirst=======================>" + data.event);
////                }
////                async function CreateSubscriberCallBackFirst(err, data) {
////                    console.info("==========================>CreateSubscriberCallBackFirst=======================>");
////                    SubscriberdataFirst = data;
////                    await commonEvent.subscribe(SubscriberdataFirst, SubscriberCallBackFirst);
////                }
////                var CommonEventSubscribeInfoFirst = {
////                    events: ["publish_event_common"],
////                };
////                commonEvent.createSubscriber(
////                    CommonEventSubscribeInfoFirst,
////                    CreateSubscriberCallBackFirst
////                )
////                break;
////            case 28:
////                console.info('==============test 28 item=======第二个订阅者=====');
////                function SubscriberCallBackSecond(err, data) {
////                    console.info("==========================>SubscriberCallBackSecond=======================>" + data.event);
////                }
////                async function CreateSubscriberCallBackSecond(err, data) {
////                    console.info("==========================>CreateSubscriberCallBackSecond=======================>");
////                    SubscriberdataSecond = data;
////                    await commonEvent.subscribe(SubscriberdataSecond, SubscriberCallBackSecond);
////                }
////                var CommonEventSubscribeInfoSecond = {
////                    events: ["publish_event_common"],
////                };
////                commonEvent.createSubscriber(
////                    CommonEventSubscribeInfoSecond,
////                    CreateSubscriberCallBackSecond
////                )
////                break;
////            case 29:
////                console.info('==============test 29 item======第三个订阅者======');
////                function SubscriberCallBackThird(err, data) {
////                    console.info("==========================>SubscriberCallBackThird=======================>" + data.event);
////                }
////                async function CreateSubscriberCallBackThird(err, data) {
////                    console.info("==========================>CreateSubscriberCallBackThird=======================>");
////                    SubscriberdataThird = data;
////                    await commonEvent.subscribe(SubscriberdataThird, SubscriberCallBackThird);
////                }
////                var CommonEventSubscribeInfoThird = {
////                    events: ["publish_event_common"],
////                };
////                commonEvent.createSubscriber(
////                    CommonEventSubscribeInfoThird,
////                    CreateSubscriberCallBackThird
////                )
////                break;
////            case 30:
////                console.info('==============test 30 item=======发布消息=====');
////                function PublishCallbackForTest(err) {
////                    console.info("==========================>PublishCallbackForTest=======================>");
////                }
////                commonEvent.publish("publish_event_common", PublishCallbackForTest);
////                break;
////            case 31 :
////                console.info('=================test 31 item=================');
////                var context = featureAbility.getContext().then(
////                    data=> {
////                        var result = data.onRequestPermissionsFromUserResult(
////                            (err, data) => {
////                                console.log("onRequestPermissionsFromUserResult asyncCallback");
////                                console.log("requestCode : " + data.requestCode);
////                                for(var j = 0; j < data.permissions.length; j++) {
////                                    console.log("permissions : " + data.permissions[j]);
////                                }
////                                for(var j = 0; j < data.grantResults.length; j++) {
////                                    console.log("grantResults : " + data.grantResults[j]);
////                                }
////                            }
////                        );
////                        result = data.requestPermissionsFromUser(["permissions_1", "permissions_2", "permissions_3", "permissions_4","permissions_5"], 580).then(data =>
////                        console.log("then : " + data)
////                        ).catch(error =>
////                        console.log("catch : " + error)
////                        );
////                        console.log("AceApplication : startAbility : " + result);
////                    }
////                ).catch(error =>
////                console.log("getContext promise::catch : " + error)
////                );
////            default:
////                break;
//        }
//    }
//}