/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\PieceCode.ets?entry ***!
  \********************************************************************************************************/
class PieceCode extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__content = new ObservedPropertySimple("piece", this, "content");
        this.__icon = new ObservedPropertySimple("1", this, "icon");
        this.__fontColor = new ObservedPropertyObject("#FF008000", this, "fontColor");
        this.__iconPosition = new ObservedPropertyObject(IconPosition.End, this, "iconPosition");
        this.__fontStyle = new ObservedPropertyObject(FontStyle.Italic, this, "fontStyle");
        this.__showDelete = new ObservedPropertySimple(false, this, "showDelete");
        this.__onActionCalled = new ObservedPropertySimple(false, this, "onActionCalled");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("piece page state change called:" + JSON.stringify(eventData));
                let pieceObj = JSON.parse(eventData.data.pieceObj);
                if (pieceObj) {
                    this.content = pieceObj.content;
                    this.icon = pieceObj.icon;
                }
                if (eventData.data.iconPosition != null) {
                    this.iconPosition = eventData.data.iconPosition;
                }
                if (eventData.data.fontStyle != null) {
                    this.fontStyle = eventData.data.fontStyle;
                }
                if (eventData.data.Color != null) {
                    this.Color = eventData.data.Color;
                }
                if (eventData.data.showDelete != null) {
                    this.showDelete = eventData.data.showDelete;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.content !== undefined) {
            this.content = params.content;
        }
        if (params.icon !== undefined) {
            this.icon = params.icon;
        }
        if (params.fontColor !== undefined) {
            this.fontColor = params.fontColor;
        }
        if (params.iconPosition !== undefined) {
            this.iconPosition = params.iconPosition;
        }
        if (params.fontStyle !== undefined) {
            this.fontStyle = params.fontStyle;
        }
        if (params.showDelete !== undefined) {
            this.showDelete = params.showDelete;
        }
        if (params.onActionCalled !== undefined) {
            this.onActionCalled = params.onActionCalled;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__content.aboutToBeDeleted();
        this.__icon.aboutToBeDeleted();
        this.__fontColor.aboutToBeDeleted();
        this.__iconPosition.aboutToBeDeleted();
        this.__fontStyle.aboutToBeDeleted();
        this.__showDelete.aboutToBeDeleted();
        this.__onActionCalled.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get content() {
        return this.__content.get();
    }
    set content(newValue) {
        this.__content.set(newValue);
    }
    get icon() {
        return this.__icon.get();
    }
    set icon(newValue) {
        this.__icon.set(newValue);
    }
    get fontColor() {
        return this.__fontColor.get();
    }
    set fontColor(newValue) {
        this.__fontColor.set(newValue);
    }
    get iconPosition() {
        return this.__iconPosition.get();
    }
    set iconPosition(newValue) {
        this.__iconPosition.set(newValue);
    }
    get fontStyle() {
        return this.__fontStyle.get();
    }
    set fontStyle(newValue) {
        this.__fontStyle.set(newValue);
    }
    get showDelete() {
        return this.__showDelete.get();
    }
    set showDelete(newValue) {
        this.__showDelete.set(newValue);
    }
    get onActionCalled() {
        return this.__onActionCalled.get();
    }
    set onActionCalled(newValue) {
        this.__onActionCalled.set(newValue);
    }
    onPageShow() {
        console.info('piece page show called');
        var stateChangeEvent = {
            eventId: 154,
        };
    }
    render() {
        Column.create();
        Column.width('100%');
        Column.margin({ top: 300 });
        Column.height('100%');
        Piece.create({ content: this.content, icon: this.icon });
        Piece.iconPosition(ObservedObject.GetRawObject(this.iconPosition));
        Piece.fontColor(this.Color);
        Piece.fontStyle(ObservedObject.GetRawObject(this.fontStyle));
        Piece.showDelete(this.showDelete);
        Piece.onClose(() => {
            console.info("Piece onClose");
            this.onActionCalled = true;
            try {
                var backData = {
                    data: {
                        "ACTION": this.onActionCalled,
                    }
                };
                var backEvent = {
                    eventId: 155,
                };
                console.info("piece onClose start to emit action state");
            }
            catch (err) {
                console.info("piece onClose emit action state err: " + JSON.stringify(err.message));
            }
        });
        Piece.key("piece");
        Piece.pop();
        Button.createWithLabel('close');
        Button.margin(30);
        Button.key('button1');
        Button.onClick(() => {
            this.showDelete = true;
            try {
                var backData = {
                    data: {
                        "showDelete": this.showDelete,
                    }
                };
                var backEvent = {
                    eventId: 156,
                };
                console.info("close to emit action state");
            }
            catch (err) {
                console.info("close action state err: " + JSON.stringify(err.message));
            }
        });
        Button.pop();
        Column.pop();
    }
}
loadDocument(new PieceCode("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=PieceCode.js.map