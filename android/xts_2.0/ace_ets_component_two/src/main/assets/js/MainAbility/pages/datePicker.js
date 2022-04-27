/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\datePicker.ets?entry ***!
  \*********************************************************************************************************/
class DatePickerExample01 extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.selectedDate = new Date('2021-08-08');
        this.__useMilitaryTime = new ObservedPropertySimple(true, this, "useMilitaryTime");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("DatePicker page state change called:" + JSON.stringify(eventData));
                if (eventData.data.useMilitaryTime != null) {
                    this.useMilitaryTime = eventData.data.useMilitaryTime;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.selectedDate !== undefined) {
            this.selectedDate = params.selectedDate;
        }
        if (params.useMilitaryTime !== undefined) {
            this.useMilitaryTime = params.useMilitaryTime;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__useMilitaryTime.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get useMilitaryTime() {
        return this.__useMilitaryTime.get();
    }
    set useMilitaryTime(newValue) {
        this.__useMilitaryTime.set(newValue);
    }
    render() {
        Column.create();
        Column.width('100%');
        DatePicker.create({
            start: new Date('1970-1-1'),
            end: new Date('2200-1-1'),
            selected: this.selectedDate,
            type: DatePickerType.Date
        });
        DatePicker.key('datePicker');
        DatePicker.lunar(true);
        DatePicker.useMilitaryTime(this.useMilitaryTime);
        DatePicker.onChange((date) => {
            console.info('select current date is: ' + JSON.stringify(date));
            try {
                var backData = {
                    data: {
                        "useMilitaryTime": this.useMilitaryTime,
                    }
                };
                var backEvent = {
                    eventId: 80,
                };
                console.info("DatePicker start to emit action state");
            }
            catch (err) {
                console.info("DatePicker emit action state err: " + JSON.stringify(err.message));
            }
        });
        DatePicker.pop();
        Column.pop();
    }
    onPageShow() {
        console.info('DatePicker page show called');
        var stateChangeEvent = {
            eventId: 81,
        };
    }
}
loadDocument(new DatePickerExample01("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=datePicker.js.map