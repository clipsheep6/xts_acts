/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!****************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\video.ets?entry ***!
  \****************************************************************************************************/
class VideoCreateComponent extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__srcs = new ObservedPropertySimple("/images/trailer.mp4", this, "srcs");
        this.__previewUris = new ObservedPropertySimple("/images/img.jpeg", this, "previewUris");
        this.__currentProgressRates = new ObservedPropertySimple(1, this, "currentProgressRates");
        this.__autoPlays = new ObservedPropertySimple(true, this, "autoPlays");
        this.__controlsss = new ObservedPropertySimple(true, this, "controlsss");
        this.myVideoController = new VideoController();
        this.__startStaus = new ObservedPropertySimple(true, this, "startStaus");
        this.stateChangCallBack = (eventData) => {
            console.info("[stateChangCallBack] video stateChangCallBack");
            if (eventData != null) {
                console.info("[stateChangCallBack] state change called:" + JSON.stringify(eventData));
                if (eventData.data.progressRates != null) {
                    this.currentProgressRates = eventData.data.progressRates;
                    console.info("currentProgressRates " + this.currentProgressRates);
                }
                if (eventData.data.isStared != null) {
                    this.myVideoController.start();
                }
                if (eventData.data.isStopped != null) {
                    this.myVideoController.stop();
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.srcs !== undefined) {
            this.srcs = params.srcs;
        }
        if (params.previewUris !== undefined) {
            this.previewUris = params.previewUris;
        }
        if (params.currentProgressRates !== undefined) {
            this.currentProgressRates = params.currentProgressRates;
        }
        if (params.autoPlays !== undefined) {
            this.autoPlays = params.autoPlays;
        }
        if (params.controlsss !== undefined) {
            this.controlsss = params.controlsss;
        }
        if (params.myVideoController !== undefined) {
            this.myVideoController = params.myVideoController;
        }
        if (params.startStaus !== undefined) {
            this.startStaus = params.startStaus;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__srcs.aboutToBeDeleted();
        this.__previewUris.aboutToBeDeleted();
        this.__currentProgressRates.aboutToBeDeleted();
        this.__autoPlays.aboutToBeDeleted();
        this.__controlsss.aboutToBeDeleted();
        this.__startStaus.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get srcs() {
        return this.__srcs.get();
    }
    set srcs(newValue) {
        this.__srcs.set(newValue);
    }
    get previewUris() {
        return this.__previewUris.get();
    }
    set previewUris(newValue) {
        this.__previewUris.set(newValue);
    }
    get currentProgressRates() {
        return this.__currentProgressRates.get();
    }
    set currentProgressRates(newValue) {
        this.__currentProgressRates.set(newValue);
    }
    get autoPlays() {
        return this.__autoPlays.get();
    }
    set autoPlays(newValue) {
        this.__autoPlays.set(newValue);
    }
    get controlsss() {
        return this.__controlsss.get();
    }
    set controlsss(newValue) {
        this.__controlsss.set(newValue);
    }
    get startStaus() {
        return this.__startStaus.get();
    }
    set startStaus(newValue) {
        this.__startStaus.set(newValue);
    }
    onPageShow() {
        console.info('[list] page show called');
        var stateChangeEvent = {
            eventId: 235,
        };
    }
    render() {
        Column.create();
        Video.create({
            src: this.srcs,
            previewUri: this.previewUris,
            currentProgressRate: this.currentProgressRates,
            controller: this.myVideoController
        });
        Video.key("video");
        Video.width(700);
        Video.height(500);
        Video.autoPlay(this.autoPlays);
        Video.controls(this.controlsss);
        Row.create();
        Button.createWithLabel("start");
        Button.onClick(() => {
            this.myVideoController.start();
        });
        Button.pop();
        Button.createWithLabel("pause");
        Button.onClick(() => {
            this.myVideoController.pause();
        });
        Button.pop();
        Button.createWithLabel("stop");
        Button.onClick(() => {
            this.myVideoController.stop();
        });
        Button.pop();
        Row.pop();
        Row.create();
        Button.createWithLabel("setCurrentTime");
        Button.onClick(() => {
            this.myVideoController.setCurrentTime(9, SeekMode.Accurate);
        });
        Button.pop();
        Row.pop();
        Column.pop();
    }
}
loadDocument(new VideoCreateComponent("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=video.js.map