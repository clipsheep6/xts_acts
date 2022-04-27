/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/line.ets?entry ***!
  \**************************************************************************************************************************************/
class LineExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__startPoint = new ObservedPropertyObject([0, 0], this, "startPoint");
        this.__endPoint = new ObservedPropertyObject([50, 100], this, "endPoint");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("line page state change called:" + JSON.stringify(eventData));
                if (eventData.data.startPoint != null) {
                    this.startPoint[0] = eventData.data.startPoint;
                }
                if (eventData.data.startPointOne != null) {
                    this.startPoint[1] = eventData.data.startPointOne;
                }
                if (eventData.data.endPointOne != null) {
                    this.endPoint[1] = eventData.data.endPointOne;
                }
                if (eventData.data.endPoint != null) {
                    this.endPoint[0] = eventData.data.endPoint;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.startPoint !== undefined) {
            this.startPoint = params.startPoint;
        }
        if (params.endPoint !== undefined) {
            this.endPoint = params.endPoint;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__startPoint.aboutToBeDeleted();
        this.__endPoint.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get startPoint() {
        return this.__startPoint.get();
    }
    set startPoint(newValue) {
        this.__startPoint.set(newValue);
    }
    get endPoint() {
        return this.__endPoint.get();
    }
    set endPoint(newValue) {
        this.__endPoint.set(newValue);
    }
    render() {
        Column.create();
        Column.margin({ top: 5 });
        Line.create({ width: 50, height: 100 });
        Line.startPoint(ObservedObject.GetRawObject(this.startPoint));
        Line.endPoint(ObservedObject.GetRawObject(this.endPoint));
        Line.key('line');
        Column.pop();
    }
    onPageShow() {
        console.info('line page show called');
        var stateChangeEvent = {
            eventId: 131
        };
    }
}
loadDocument(new LineExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=line.js.map