/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!****************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/Video.ets?entry ***!
  \****************************************************************************************************************************/
class VideoCreateComponent extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__srcs = new ObservedPropertySimple('/resources/rawfile/video/show.mp4', this, "srcs");
        this.__previewUri = new ObservedPropertySimple('/resources/image/dark.jpg', this, "previewUri");
        this.__currentProgressRates = new ObservedPropertySimple(1, this, "currentProgressRates");
        this.__autoPlays = new ObservedPropertySimple(false, this, "autoPlays");
        this.__controlsss = new ObservedPropertySimple(true, this, "controlsss");
        this.myVideoController = new VideoController();
        this.__startStaus = new ObservedPropertySimple(true, this, "startStaus");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.srcs !== undefined) {
            this.srcs = params.srcs;
        }
        if (params.previewUri !== undefined) {
            this.previewUri = params.previewUri;
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
    }
    aboutToBeDeleted() {
        this.__srcs.aboutToBeDeleted();
        this.__previewUri.aboutToBeDeleted();
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
    get previewUri() {
        return this.__previewUri.get();
    }
    set previewUri(newValue) {
        this.__previewUri.set(newValue);
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
    render() {
        Column.create();
        Video.create({
            src: this.srcs,
            previewUri: this.previewUri,
            controller: this.myVideoController
        });
        Video.width(700);
        Video.height(500);
        Video.autoPlay(this.autoPlays);
        Video.muted(true);
        Video.controls(this.controlsss);
        Video.loop(true);
        Video.objectFit(ImageFit.Cover);
        Video.key('video');
        Video.onStart(() => {
            console.info("onStart");
        });
        Video.onPause(() => {
            console.info("onPause");
        });
        Video.onFinish(() => {
            console.info("onFinish");
        });
        Video.onPrepared(() => {
            console.info("onPrepared");
        });
        Video.onSeeking(() => {
            console.info("onSeeking");
        });
        Video.onSeeked(() => {
            console.info("onSeeked");
        });
        Video.onUpdate(() => {
            console.info("onUpdate");
        });
        Video.onError(() => {
            console.info("onError");
        });
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
        Row.pop();
        Row.create();
        Button.createWithLabel("setCurrentTime");
        Button.onClick(() => {
            this.myVideoController.setCurrentTime(9);
        });
        Button.pop();
        Button.createWithLabel("setCurrentTime");
        Button.onClick(() => {
            this.myVideoController.setCurrentTime(9, SeekMode.PreviousKeyframe);
        });
        Button.pop();
        Button.createWithLabel("setCurrentTime");
        Button.onClick(() => {
            this.myVideoController.setCurrentTime(9, SeekMode.NextKeyframe);
        });
        Button.pop();
        Button.createWithLabel("setCurrentTime");
        Button.onClick(() => {
            this.myVideoController.setCurrentTime(9, SeekMode.ClosestKeyframe);
        });
        Button.pop();
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
//# sourceMappingURL=Video.js.map