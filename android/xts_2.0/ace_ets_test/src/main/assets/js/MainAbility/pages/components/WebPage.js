/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*****************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/components/WebPage.ets?entry ***!
  \*****************************************************************************************************************************************/
class WebComponent extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__javaScriptAccess = new ObservedPropertySimple(true, this, "javaScriptAccess");
        this.__fileAccess = new ObservedPropertySimple(true, this, "fileAccess");
        this.__geolocationAccess = new ObservedPropertySimple(true, this, "geolocationAccess");
        this.__imageAccess = new ObservedPropertySimple(true, this, "imageAccess");
        this.__domStorageAccess = new ObservedPropertySimple(false, this, "domStorageAccess");
        this.__onlineImageAccess = new ObservedPropertySimple(true, this, "onlineImageAccess");
        this.__zoomAccess = new ObservedPropertySimple(true, this, "zoomAccess");
        this.__accessBackward = new ObservedPropertySimple(true, this, "accessBackward");
        this.__accessForward = new ObservedPropertySimple(true, this, "accessForward");
        this.__accessStep = new ObservedPropertySimple(true, this, "accessStep");
        this.__password = new ObservedPropertySimple(true, this, "password");
        this.__tableData = new ObservedPropertySimple(true, this, "tableData");
        this.__wideViewModeAccess = new ObservedPropertySimple(true, this, "wideViewModeAccess");
        this.__overviewModeAccess = new ObservedPropertySimple(true, this, "overviewModeAccess");
        this.__databaseAccess = new ObservedPropertySimple(true, this, "databaseAccess");
        this.__textZoomAtio = new ObservedPropertySimple(1, this, "textZoomAtio");
        this.__mixedMode = new ObservedPropertySimple(MixedMode.None, this, "mixedMode");
        this.__cacheMode = new ObservedPropertySimple(CacheMode.None, this, "cacheMode");
        this.__getHitTest = new ObservedPropertySimple(HitTestType.Unknown, this, "getHitTest");
        this.controller = new WebController();
        this.cookie = new WebCookie();
        this.testObj = {
            test: (data1, data2, data3) => {
                console.log('ets test web  : ' + data1);
                console.log('ets test web  : ' + data2);
                console.log('ets test web  : ' + data3);
                return 'AceString';
            },
            toString: () => {
                console.log('ets test web  : ++++++toString');
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.javaScriptAccess !== undefined) {
            this.javaScriptAccess = params.javaScriptAccess;
        }
        if (params.fileAccess !== undefined) {
            this.fileAccess = params.fileAccess;
        }
        if (params.geolocationAccess !== undefined) {
            this.geolocationAccess = params.geolocationAccess;
        }
        if (params.imageAccess !== undefined) {
            this.imageAccess = params.imageAccess;
        }
        if (params.domStorageAccess !== undefined) {
            this.domStorageAccess = params.domStorageAccess;
        }
        if (params.onlineImageAccess !== undefined) {
            this.onlineImageAccess = params.onlineImageAccess;
        }
        if (params.zoomAccess !== undefined) {
            this.zoomAccess = params.zoomAccess;
        }
        if (params.accessBackward !== undefined) {
            this.accessBackward = params.accessBackward;
        }
        if (params.accessForward !== undefined) {
            this.accessForward = params.accessForward;
        }
        if (params.accessStep !== undefined) {
            this.accessStep = params.accessStep;
        }
        if (params.password !== undefined) {
            this.password = params.password;
        }
        if (params.tableData !== undefined) {
            this.tableData = params.tableData;
        }
        if (params.wideViewModeAccess !== undefined) {
            this.wideViewModeAccess = params.wideViewModeAccess;
        }
        if (params.overviewModeAccess !== undefined) {
            this.overviewModeAccess = params.overviewModeAccess;
        }
        if (params.databaseAccess !== undefined) {
            this.databaseAccess = params.databaseAccess;
        }
        if (params.textZoomAtio !== undefined) {
            this.textZoomAtio = params.textZoomAtio;
        }
        if (params.mixedMode !== undefined) {
            this.mixedMode = params.mixedMode;
        }
        if (params.cacheMode !== undefined) {
            this.cacheMode = params.cacheMode;
        }
        if (params.getHitTest !== undefined) {
            this.getHitTest = params.getHitTest;
        }
        if (params.controller !== undefined) {
            this.controller = params.controller;
        }
        if (params.cookie !== undefined) {
            this.cookie = params.cookie;
        }
        if (params.testObj !== undefined) {
            this.testObj = params.testObj;
        }
    }
    aboutToBeDeleted() {
        this.__javaScriptAccess.aboutToBeDeleted();
        this.__fileAccess.aboutToBeDeleted();
        this.__geolocationAccess.aboutToBeDeleted();
        this.__imageAccess.aboutToBeDeleted();
        this.__domStorageAccess.aboutToBeDeleted();
        this.__onlineImageAccess.aboutToBeDeleted();
        this.__zoomAccess.aboutToBeDeleted();
        this.__accessBackward.aboutToBeDeleted();
        this.__accessForward.aboutToBeDeleted();
        this.__accessStep.aboutToBeDeleted();
        this.__password.aboutToBeDeleted();
        this.__tableData.aboutToBeDeleted();
        this.__wideViewModeAccess.aboutToBeDeleted();
        this.__overviewModeAccess.aboutToBeDeleted();
        this.__databaseAccess.aboutToBeDeleted();
        this.__textZoomAtio.aboutToBeDeleted();
        this.__mixedMode.aboutToBeDeleted();
        this.__cacheMode.aboutToBeDeleted();
        this.__getHitTest.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get javaScriptAccess() {
        return this.__javaScriptAccess.get();
    }
    set javaScriptAccess(newValue) {
        this.__javaScriptAccess.set(newValue);
    }
    get fileAccess() {
        return this.__fileAccess.get();
    }
    set fileAccess(newValue) {
        this.__fileAccess.set(newValue);
    }
    get geolocationAccess() {
        return this.__geolocationAccess.get();
    }
    set geolocationAccess(newValue) {
        this.__geolocationAccess.set(newValue);
    }
    get imageAccess() {
        return this.__imageAccess.get();
    }
    set imageAccess(newValue) {
        this.__imageAccess.set(newValue);
    }
    get domStorageAccess() {
        return this.__domStorageAccess.get();
    }
    set domStorageAccess(newValue) {
        this.__domStorageAccess.set(newValue);
    }
    get onlineImageAccess() {
        return this.__onlineImageAccess.get();
    }
    set onlineImageAccess(newValue) {
        this.__onlineImageAccess.set(newValue);
    }
    get zoomAccess() {
        return this.__zoomAccess.get();
    }
    set zoomAccess(newValue) {
        this.__zoomAccess.set(newValue);
    }
    get accessBackward() {
        return this.__accessBackward.get();
    }
    set accessBackward(newValue) {
        this.__accessBackward.set(newValue);
    }
    get accessForward() {
        return this.__accessForward.get();
    }
    set accessForward(newValue) {
        this.__accessForward.set(newValue);
    }
    get accessStep() {
        return this.__accessStep.get();
    }
    set accessStep(newValue) {
        this.__accessStep.set(newValue);
    }
    get password() {
        return this.__password.get();
    }
    set password(newValue) {
        this.__password.set(newValue);
    }
    get tableData() {
        return this.__tableData.get();
    }
    set tableData(newValue) {
        this.__tableData.set(newValue);
    }
    get wideViewModeAccess() {
        return this.__wideViewModeAccess.get();
    }
    set wideViewModeAccess(newValue) {
        this.__wideViewModeAccess.set(newValue);
    }
    get overviewModeAccess() {
        return this.__overviewModeAccess.get();
    }
    set overviewModeAccess(newValue) {
        this.__overviewModeAccess.set(newValue);
    }
    get databaseAccess() {
        return this.__databaseAccess.get();
    }
    set databaseAccess(newValue) {
        this.__databaseAccess.set(newValue);
    }
    get textZoomAtio() {
        return this.__textZoomAtio.get();
    }
    set textZoomAtio(newValue) {
        this.__textZoomAtio.set(newValue);
    }
    get mixedMode() {
        return this.__mixedMode.get();
    }
    set mixedMode(newValue) {
        this.__mixedMode.set(newValue);
    }
    get cacheMode() {
        return this.__cacheMode.get();
    }
    set cacheMode(newValue) {
        this.__cacheMode.set(newValue);
    }
    get getHitTest() {
        return this.__getHitTest.get();
    }
    set getHitTest(newValue) {
        this.__getHitTest.set(newValue);
    }
    render() {
        Column.create();
        Row.create();
        Button.createWithLabel('混合内容');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            this.mixedMode = MixedMode.All;
        });
        Button.pop();
        Button.createWithLabel('混合内容兼容性模式');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            this.mixedMode = MixedMode.Compatible;
        });
        Button.pop();
        Button.createWithLabel('不允许混合内容');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            this.mixedMode = MixedMode.None;
        });
        Button.pop();
        Button.createWithLabel('确认弹框');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            AlertDialog.show({
                title: 'title',
                message: 'text',
                primaryButton: {
                    value: 'cancel',
                    action: () => {
                        console.info('Callback when the first button is clicked');
                    }
                },
                secondaryButton: {
                    value: 'ok',
                    action: () => {
                        console.info('Callback when the second button is clicked');
                    }
                },
                cancel: () => {
                    console.info('Closed callbacks');
                }
            });
        });
        Button.pop();
        Button.createWithLabel('警告弹框');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            AlertDialog.show({
                title: 'title',
                message: 'text',
                confirm: {
                    value: 'button',
                    action: () => {
                        console.info('Button-clicking callback');
                    }
                },
                cancel: () => {
                    console.info('Closed callbacks');
                }
            });
        });
        Button.pop();
        Row.pop();
        Row.create();
        Button.createWithLabel('先缓存后在线');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            this.cacheMode = CacheMode.Online;
        });
        Button.pop();
        Button.createWithLabel('加载缓存');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            this.cacheMode = CacheMode.Only;
        });
        Button.pop();
        Button.createWithLabel('加载在线');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            this.cacheMode = CacheMode.None;
        });
        Button.pop();
        Button.createWithLabel('设置cookie');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            this.cookie.setCookie();
        });
        Button.pop();
        Button.createWithLabel('保存cookie');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            this.cookie.saveCookie();
        });
        Button.pop();
        Row.pop();
        Row.create();
        Button.createWithLabel(this.accessBackward ? '页面可后退' : '页面不可后退');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            this.accessBackward = this.controller.accessBackward();
        });
        Button.pop();
        Button.createWithLabel(this.accessForward ? '页面可前进' : '页面不可前进');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            this.accessForward = this.controller.accessForward();
        });
        Button.pop();
        Button.createWithLabel(this.accessStep ? '页面可前进1步' : '页面不可前进1步');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            this.accessStep = this.controller.accessStep(1);
        });
        Button.pop();
        Button.createWithLabel('清空JavaScript方法');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            this.controller.deleteJavaScriptRegister('objName');
        });
        Button.pop();
        Button.createWithLabel('Web组件获焦');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            this.controller.requestFocus();
        });
        Button.pop();
        Button.createWithLabel('停止页面加载');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            this.controller.stop();
        });
        Button.pop();
        Row.pop();
        Row.create();
        Button.createWithLabel('页面后退');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            this.controller.backward();
        });
        Button.pop();
        Button.createWithLabel('页面前进');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            this.controller.forward();
        });
        Button.pop();
        Button.createWithLabel('清理历史');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            this.controller.clearHistory();
        });
        Button.pop();
        Button.createWithLabel('获取点击对象类型');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            let getHitTest = this.controller.getHitTest();
            if (getHitTest == HitTestType.Edit) {
                console.log('this getHitTest : Edit');
            }
            else if (getHitTest == HitTestType.Email) {
                console.log('this getHitTest : Email');
            }
            else if (getHitTest == HitTestType.Http) {
                console.log('this getHitTest : Http');
            }
            else if (getHitTest == HitTestType.HttpImg) {
                console.log('this getHitTest : HttpImg');
            }
            else if (getHitTest == HitTestType.Img) {
                console.log('this getHitTest : Img');
            }
            else if (getHitTest == HitTestType.Map) {
                console.log('this getHitTest : Map');
            }
            else if (getHitTest == HitTestType.Phone) {
                console.log('this getHitTest : Phone');
            }
            else {
                getHitTest = HitTestType.Unknown;
                console.log('this getHitTest : Unknown');
            }
        });
        Button.pop();
        Button.createWithLabel('加载数据');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            this.controller.loadData({
                data: "<html><body bgcolor=\"white\">Source : <pre> source:</pre></body></html>",
                mimetype: "text/html",
                encoding: "UTF-8",
                baseUrl: "https://www.baidu.com",
                historyUrl: "https://www.gitee.com"
            });
        });
        Button.pop();
        Button.createWithLabel('加载URL');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            this.controller.loadUrl({
                url: "https://www.baidu.com",
                additionalHttpHeaders: [{ key: 'div', value: 'div' }]
            });
        });
        Button.pop();
        Row.pop();
        Row.create();
        Button.createWithLabel('页面重新激活');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            this.controller.onActive();
        });
        Button.pop();
        Button.createWithLabel('页面暂停渲染');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            this.controller.onInactive();
        });
        Button.pop();
        Button.createWithLabel('刷新页面');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            this.controller.refresh();
        });
        Button.pop();
        Button.createWithLabel('注册JavaScript');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            this.controller.registerJavaScriptProxy({
                obj: this.testObj,
                name: 'objName',
                methodList: ['test', 'toString']
            });
        });
        Button.pop();
        Button.createWithLabel('执行JavaScript脚本');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            this.controller.runJavaScript({
                script: "test()",
                callback: (result) => {
                    console.log('run javascript result : ' + result);
                }
            });
        });
        Button.pop();
        Row.pop();
        Web.create({ src: { "id": 0, "type": 30000, params: ['indextest.html'] }, controller: this.controller });
        Web.domStorageAccess(this.domStorageAccess);
        Web.fileAccess(this.fileAccess);
        Web.geolocationAccess(this.geolocationAccess);
        Web.imageAccess(this.imageAccess);
        Web.javaScriptAccess(this.javaScriptAccess);
        Web.mixedMode(this.mixedMode);
        Web.onlineImageAccess(this.onlineImageAccess);
        Web.zoomAccess(this.zoomAccess);
        Web.cacheMode(this.cacheMode);
        Web.tableData(this.tableData);
        Web.wideViewModeAccess(this.wideViewModeAccess);
        Web.overviewModeAccess(this.overviewModeAccess);
        Web.textZoomAtio(this.textZoomAtio);
        Web.databaseAccess(this.databaseAccess);
        Web.javaScriptProxy({
            obj: this.testObj,
            name: 'objName',
            methodList: ['test', 'toString']
        });
        Web.password(this.password);
        Web.onPageBegin((e) => {
            console.log("webTest : onPageBegin: " + e.url);
        });
        Web.onPageEnd(e => {
            console.log("webTest : onPageEnd: " + e.url);
            this.controller.runJavaScript('test()');
        });
        Web.onProgressChange((e) => {
            console.log("webTest : onProgressChange: " + e.newProgress);
        });
        Web.onTitleReceive((e) => {
            console.log("webTest : onProgressChange: " + e.title);
        });
        Web.onDownloadStart((e) => {
            console.log("webTest : onDownloadStart url : " + e.url);
            console.log("webTest : onDownloadStart userAgent : " + e.userAgent);
            console.log("webTest : onDownloadStart contentDisposition : " + e.contentDisposition);
            console.log("webTest : onDownloadStart mimetype : " + e.mimetype);
            console.log("webTest : onDownloadStart contentLength : " + e.contentLength);
        });
        Web.onGeolocationHide(() => {
            console.log("webTest : onGeolocationHide: ");
        });
        Web.onGeolocationShow((e) => {
            console.log("webTest : onDownloadStart origin : " + e.origin);
            e.geolocation.invoke(e.origin, true, true);
            console.log("webTest : onDownloadStart origin : " + e.geolocation.invoke);
        });
        Web.onRequestSelected(() => {
            console.log("webTest : onRequestSelected: ");
        });
        Web.onAlert((e) => {
            console.log("webTest : onAlert: " + e.url);
            console.log("webTest : onAlert: " + e.message);
            console.log("webTest : onAlert .result : " + e.result);
            console.log("webTest : onAlert .result : " + e.result.handleCancel());
            console.log("webTest : onAlert .result : " + e.result.handleConfirm());
        });
        Web.onBeforeUnload((e) => {
            console.log("webTest : onBeforeUnload: " + e.message);
            console.log("webTest : onBeforeUnload .result : " + e.result);
            console.log("webTest : onBeforeUnload .result : " + e.result.handleCancel());
            console.log("webTest : onBeforeUnload .result : " + e.result.handleConfirm());
        });
        Web.onConfirm((e) => {
            console.log("webTest : onConfirm: " + e.url);
            console.log("webTest : onConfirm: " + e.message);
            console.log("webTest : onConfirm .result : " + e.result);
            console.log("webTest : onConfirm .result : " + e.result.handleCancel());
            console.log("webTest : onConfirm .result : " + e.result.handleConfirm());
        });
        Web.onConsole((e) => {
            console.log("webTest : onConsole .message : " + e.message);
            console.log("webTest : onConsole .message : " + e.message.getMessage());
            console.log("webTest : onConsole .message : " + e.message.getSourceId());
            console.log("webTest : onConsole .message : " + e.message.getLineNumber());
            let level = e.message.getMessageLevel();
            if (level == MessageLevel.Debug) {
                console.log("webTest : onConsole: level Debug");
            }
            else if (level == MessageLevel.Error) {
                console.log("webTest : onConsole: level Error");
            }
            else if (level == MessageLevel.Info) {
                console.log("webTest : onConsole: level Info");
            }
            else if (level == MessageLevel.Log) {
                console.log("webTest : onConsole: level Log");
            }
            else {
                level = MessageLevel.Warn;
                console.log("webTest : onConsole: level Warn");
            }
        });
        Web.onErrorReceive((e) => {
            console.log("webTest : onErrorReceive .request : " + e.request);
            console.log("webTest : onErrorReceive .request : " + e.request.getRequestHeader());
            console.log("webTest : onErrorReceive .request : " + e.request.getRequestUrl());
            console.log("webTest : onErrorReceive .request : " + e.request.isRequestGesture());
            console.log("webTest : onErrorReceive .request : " + e.request.isMainFrame());
            console.log("webTest : onErrorReceive .request : " + e.request.isRedirect());
            console.log("webTest : onErrorReceive .error : " + e.error);
            console.log("webTest : onErrorReceive .error : " + e.error.getErrorInfo());
            console.log("webTest : onErrorReceive .error : " + e.error.getErrorCode());
        });
        Web.onHttpErrorReceive((e) => {
            console.log("webTest : onHttpErrorReceive .request : " + e.request);
            console.log("webTest : onHttpErrorReceive .request : " + e.request.getRequestHeader());
            console.log("webTest : onHttpErrorReceive .request : " + e.request.getRequestUrl());
            console.log("webTest : onHttpErrorReceive .request : " + e.request.isRequestGesture());
            console.log("webTest : onHttpErrorReceive .request : " + e.request.isMainFrame());
            console.log("webTest : onHttpErrorReceive .request : " + e.request.isRedirect());
            console.log("webTest : onHttpErrorReceive .error : " + e.error);
            console.log("webTest : onHttpErrorReceive .error : " + e.error.getErrorInfo());
            console.log("webTest : onHttpErrorReceive .error : " + e.error.getErrorCode());
        });
        Web.onRefreshAccessedHistory((e) => {
            console.log("webTest : onRefreshAccessedHistory .url : " + e.url);
            console.log("webTest : onRefreshAccessedHistory .refreshed : " + e.refreshed);
        });
        Web.onUrlLoadIntercept((e) => {
            console.log("webTest : onUrlLoadIntercept .data : " + e.data);
        });
        Web.onSslErrorReceive((e) => {
            console.log("webTest : onSslErrorReceive .handle : " + e.handle);
            console.log("webTest : onSslErrorReceive .error : " + e.error);
        });
        Web.onRenderExited((e) => {
            console.log("webTest : onRenderExited .detail : " + JSON.stringify(e.detail));
        });
        Web.onFileSelectorShow((e) => {
            console.log("webTest : onFileSelectorShow .callback : " + e.callback);
            console.log("webTest : onFileSelectorShow .fileSelector : " + e.fileSelector);
        });
        Column.pop();
    }
}
loadDocument(new WebComponent("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=WebPage.js.map