/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*******************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\calendar.ets?entry ***!
  \*******************************************************************************************************/
class CalendarComponentExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.calendarController = new CalendarController();
        this.__CalendarDayArray = new ObservedPropertyObject([{
                index: 1,
                lunarMonth: "five",
                lunarDay: "6",
                dayMark: "六",
                dayMarkValue: "儿童节",
                year: 2020,
                month: 11,
                day: 10,
                isFirstOfLunar: false,
                markLunarDay: false
            }], this, "CalendarDayArray");
        this.__currentMonthday = new ObservedPropertyObject({
            year: 2021,
            month: 3,
            data: this.CalendarDayArray
        }, this, "currentMonthday");
        this.__preMonthday = new ObservedPropertyObject({
            year: 2021,
            month: 2,
            data: this.CalendarDayArray
        }, this, "preMonthday");
        this.__nextMonthday = new ObservedPropertyObject({
            year: 2021,
            month: 4,
            data: this.CalendarDayArray
        }, this, "nextMonthday");
        this.__colorValue = new ObservedPropertyObject(Color.Blue, this, "colorValue");
        this.__calendarDay1 = new ObservedPropertyObject({
            index: 6,
            lunarMonth: "111",
            lunarDay: "222",
            dayMark: "333",
            dayMarkValue: "444",
            year: 2022,
            month: 3,
            day: 11,
            isFirstOfLunar: false,
            hasSchedule: false,
            markLunarDay: false
        }, this, "calendarDay1");
        this.__calendarDay2 = new ObservedPropertyObject({
            index: 6,
            lunarMonth: "111",
            lunarDay: "222",
            dayMark: "333",
            dayMarkValue: "444",
            year: 2022,
            month: 3,
            day: 10,
            isFirstOfLunar: false,
            hasSchedule: false,
            markLunarDay: false
        }, this, "calendarDay2");
        this.__calendarDay3 = new ObservedPropertyObject({
            index: 6,
            lunarMonth: "111",
            lunarDay: "222",
            dayMark: "333",
            dayMarkValue: "444",
            year: 2022,
            month: 3,
            day: 12,
            isFirstOfLunar: false,
            hasSchedule: false,
            markLunarDay: false
        }, this, "calendarDay3");
        this.__currentData_ = new ObservedPropertyObject({ year: 2022, month: 3, data: [this.calendarDay1] }, this, "currentData_");
        this.__preData_ = new ObservedPropertyObject({ year: 2022, month: 3, data: [this.calendarDay2] }, this, "preData_");
        this.__nextData_ = new ObservedPropertyObject({ year: 2022, month: 3, data: [this.calendarDay3] }, this, "nextData_");
        this.__colSpace = new ObservedPropertySimple(5, this, "colSpace");
        this.__dailyFiveRowSpace = new ObservedPropertySimple(4, this, "dailyFiveRowSpace");
        this.__dailySixRowSpace = new ObservedPropertySimple(5, this, "dailySixRowSpace");
        this.__lunarHeight = new ObservedPropertySimple(20, this, "lunarHeight");
        this.__underscoreWidth = new ObservedPropertySimple(10, this, "underscoreWidth");
        this.__underscoreLength = new ObservedPropertySimple(6, this, "underscoreLength");
        this.__scheduleMarkerRadius = new ObservedPropertySimple(3, this, "scheduleMarkerRadius");
        this.__boundaryRowOffset = new ObservedPropertySimple(3, this, "boundaryRowOffset");
        this.__weekAndDayRowSpace = new ObservedPropertySimple(3, this, "weekAndDayRowSpace");
        this.__direction = new ObservedPropertyObject(Axis.Horizontal, this, "direction");
        this.__weekStyle = new ObservedPropertyObject({
            weekColor: Color.black,
            weekendDayColor: Color.red,
            weekendLunarColor: Color.green,
            weekFontSize: 1,
            weekHeight: 2,
            weekWidth: 3,
            weekAndDayRowSpace: this.weekAndDayRowSpace
        }, this, "weekStyle");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("Calendar page state change called:" + JSON.stringify(eventData));
                if (eventData.data.colSpace != null) {
                    this.colSpace = eventData.data.colSpace;
                    console.log("Calendar page colSpace value" + this.colSpace);
                }
                if (eventData.data.dailyFiveRowSpace != null) {
                    this.dailyFiveRowSpace = eventData.data.dailyFiveRowSpace;
                    console.log("Calendar page dailyFiveRowSpace value" + this.dailyFiveRowSpace);
                }
                if (eventData.data.dailySixRowSpace != null) {
                    this.dailySixRowSpace = eventData.data.dailySixRowSpace;
                    console.log("Calendar page dailySixRowSpace value" + this.dailySixRowSpace);
                }
                if (eventData.data.underscoreWidth != null) {
                    this.underscoreWidth = eventData.data.underscoreWidth;
                    console.log("Calendar page underscoreWidth value" + this.underscoreWidth);
                }
                if (eventData.data.underscoreLength != null) {
                    this.underscoreLength = eventData.data.underscoreLength;
                    console.log("Calendar page underscoreLength value" + this.underscoreLength);
                }
                if (eventData.data.lunarHeight != null) {
                    this.lunarHeight = eventData.data.lunarHeight;
                    console.log("Calendar page lunarHeight value" + this.lunarHeight);
                }
                if (eventData.data.scheduleMarkerRadius != null) {
                    this.scheduleMarkerRadius = eventData.data.scheduleMarkerRadius;
                    console.log("Calendar page scheduleMarkerRadius value" + this.scheduleMarkerRadius);
                }
                if (eventData.data.boundaryRowOffset != null) {
                    this.boundaryRowOffset = eventData.data.boundaryRowOffset;
                    console.log("Calendar page boundaryRowOffset value" + this.boundaryRowOffset);
                }
                if (eventData.data.weekAndDayRowSpace != null) {
                    this.weekAndDayRowSpace = eventData.data.weekAndDayRowSpace;
                    console.log("Calendar page weekAndDayRowSpace value" + this.weekAndDayRowSpace);
                }
                if (eventData.data.direction != null) {
                    this.direction = eventData.data.direction;
                    console.log("Calendar page direction value" + this.direction);
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.calendarController !== undefined) {
            this.calendarController = params.calendarController;
        }
        if (params.CalendarDayArray !== undefined) {
            this.CalendarDayArray = params.CalendarDayArray;
        }
        if (params.currentMonthday !== undefined) {
            this.currentMonthday = params.currentMonthday;
        }
        if (params.preMonthday !== undefined) {
            this.preMonthday = params.preMonthday;
        }
        if (params.nextMonthday !== undefined) {
            this.nextMonthday = params.nextMonthday;
        }
        if (params.colorValue !== undefined) {
            this.colorValue = params.colorValue;
        }
        if (params.calendarDay1 !== undefined) {
            this.calendarDay1 = params.calendarDay1;
        }
        if (params.calendarDay2 !== undefined) {
            this.calendarDay2 = params.calendarDay2;
        }
        if (params.calendarDay3 !== undefined) {
            this.calendarDay3 = params.calendarDay3;
        }
        if (params.currentData_ !== undefined) {
            this.currentData_ = params.currentData_;
        }
        if (params.preData_ !== undefined) {
            this.preData_ = params.preData_;
        }
        if (params.nextData_ !== undefined) {
            this.nextData_ = params.nextData_;
        }
        if (params.colSpace !== undefined) {
            this.colSpace = params.colSpace;
        }
        if (params.dailyFiveRowSpace !== undefined) {
            this.dailyFiveRowSpace = params.dailyFiveRowSpace;
        }
        if (params.dailySixRowSpace !== undefined) {
            this.dailySixRowSpace = params.dailySixRowSpace;
        }
        if (params.lunarHeight !== undefined) {
            this.lunarHeight = params.lunarHeight;
        }
        if (params.underscoreWidth !== undefined) {
            this.underscoreWidth = params.underscoreWidth;
        }
        if (params.underscoreLength !== undefined) {
            this.underscoreLength = params.underscoreLength;
        }
        if (params.scheduleMarkerRadius !== undefined) {
            this.scheduleMarkerRadius = params.scheduleMarkerRadius;
        }
        if (params.boundaryRowOffset !== undefined) {
            this.boundaryRowOffset = params.boundaryRowOffset;
        }
        if (params.weekAndDayRowSpace !== undefined) {
            this.weekAndDayRowSpace = params.weekAndDayRowSpace;
        }
        if (params.direction !== undefined) {
            this.direction = params.direction;
        }
        if (params.weekStyle !== undefined) {
            this.weekStyle = params.weekStyle;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__CalendarDayArray.aboutToBeDeleted();
        this.__currentMonthday.aboutToBeDeleted();
        this.__preMonthday.aboutToBeDeleted();
        this.__nextMonthday.aboutToBeDeleted();
        this.__colorValue.aboutToBeDeleted();
        this.__calendarDay1.aboutToBeDeleted();
        this.__calendarDay2.aboutToBeDeleted();
        this.__calendarDay3.aboutToBeDeleted();
        this.__currentData_.aboutToBeDeleted();
        this.__preData_.aboutToBeDeleted();
        this.__nextData_.aboutToBeDeleted();
        this.__colSpace.aboutToBeDeleted();
        this.__dailyFiveRowSpace.aboutToBeDeleted();
        this.__dailySixRowSpace.aboutToBeDeleted();
        this.__lunarHeight.aboutToBeDeleted();
        this.__underscoreWidth.aboutToBeDeleted();
        this.__underscoreLength.aboutToBeDeleted();
        this.__scheduleMarkerRadius.aboutToBeDeleted();
        this.__boundaryRowOffset.aboutToBeDeleted();
        this.__weekAndDayRowSpace.aboutToBeDeleted();
        this.__direction.aboutToBeDeleted();
        this.__weekStyle.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get CalendarDayArray() {
        return this.__CalendarDayArray.get();
    }
    set CalendarDayArray(newValue) {
        this.__CalendarDayArray.set(newValue);
    }
    get currentMonthday() {
        return this.__currentMonthday.get();
    }
    set currentMonthday(newValue) {
        this.__currentMonthday.set(newValue);
    }
    get preMonthday() {
        return this.__preMonthday.get();
    }
    set preMonthday(newValue) {
        this.__preMonthday.set(newValue);
    }
    get nextMonthday() {
        return this.__nextMonthday.get();
    }
    set nextMonthday(newValue) {
        this.__nextMonthday.set(newValue);
    }
    get colorValue() {
        return this.__colorValue.get();
    }
    set colorValue(newValue) {
        this.__colorValue.set(newValue);
    }
    get calendarDay1() {
        return this.__calendarDay1.get();
    }
    set calendarDay1(newValue) {
        this.__calendarDay1.set(newValue);
    }
    get calendarDay2() {
        return this.__calendarDay2.get();
    }
    set calendarDay2(newValue) {
        this.__calendarDay2.set(newValue);
    }
    get calendarDay3() {
        return this.__calendarDay3.get();
    }
    set calendarDay3(newValue) {
        this.__calendarDay3.set(newValue);
    }
    get currentData_() {
        return this.__currentData_.get();
    }
    set currentData_(newValue) {
        this.__currentData_.set(newValue);
    }
    get preData_() {
        return this.__preData_.get();
    }
    set preData_(newValue) {
        this.__preData_.set(newValue);
    }
    get nextData_() {
        return this.__nextData_.get();
    }
    set nextData_(newValue) {
        this.__nextData_.set(newValue);
    }
    get colSpace() {
        return this.__colSpace.get();
    }
    set colSpace(newValue) {
        this.__colSpace.set(newValue);
    }
    get dailyFiveRowSpace() {
        return this.__dailyFiveRowSpace.get();
    }
    set dailyFiveRowSpace(newValue) {
        this.__dailyFiveRowSpace.set(newValue);
    }
    get dailySixRowSpace() {
        return this.__dailySixRowSpace.get();
    }
    set dailySixRowSpace(newValue) {
        this.__dailySixRowSpace.set(newValue);
    }
    get lunarHeight() {
        return this.__lunarHeight.get();
    }
    set lunarHeight(newValue) {
        this.__lunarHeight.set(newValue);
    }
    get underscoreWidth() {
        return this.__underscoreWidth.get();
    }
    set underscoreWidth(newValue) {
        this.__underscoreWidth.set(newValue);
    }
    get underscoreLength() {
        return this.__underscoreLength.get();
    }
    set underscoreLength(newValue) {
        this.__underscoreLength.set(newValue);
    }
    get scheduleMarkerRadius() {
        return this.__scheduleMarkerRadius.get();
    }
    set scheduleMarkerRadius(newValue) {
        this.__scheduleMarkerRadius.set(newValue);
    }
    get boundaryRowOffset() {
        return this.__boundaryRowOffset.get();
    }
    set boundaryRowOffset(newValue) {
        this.__boundaryRowOffset.set(newValue);
    }
    get weekAndDayRowSpace() {
        return this.__weekAndDayRowSpace.get();
    }
    set weekAndDayRowSpace(newValue) {
        this.__weekAndDayRowSpace.set(newValue);
    }
    get direction() {
        return this.__direction.get();
    }
    set direction(newValue) {
        this.__direction.set(newValue);
    }
    get weekStyle() {
        return this.__weekStyle.get();
    }
    set weekStyle(newValue) {
        this.__weekStyle.set(newValue);
    }
    onPageShow() {
        console.info('Calendar page show called');
        var stateChangeEvent = {
            eventId: 74,
        };
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Start, justifyContent: FlexAlign.SpaceBetween });
        Flex.debugLine("pages/calendar.ets(167:5)");
        Flex.height(400);
        Flex.padding({ left: 35, right: 35, top: 35 });
        Calendar.create({
            year: 2020,
            month: 5,
            day: 12
        }, this.currentMonthday, this.preMonthday, this.nextMonthday, this.calendarController);
        Calendar.debugLine("pages/calendar.ets(168:7)");
        Calendar.currentDayStyle({
            dayHeight: 30,
            dayWidth: 30,
            gregorianCalendarHeight: 30,
            dayYAxisOffset: 1,
            lunarDayYAxisOffset: 1,
            underscoreXAxisOffset: 1,
            underscoreYAxisOffset: 1,
            scheduleMarkerXAxisOffset: 0,
            scheduleMarkerYAxisOffset: 0,
            colSpace: this.colSpace,
            dailyFiveRowSpace: this.dailyFiveRowSpace,
            dailySixRowSpace: this.dailySixRowSpace,
            lunarHeight: this.lunarHeight,
            underscoreWidth: this.underscoreWidth,
            underscoreLength: this.underscoreLength,
            scheduleMarkerRadius: this.scheduleMarkerRadius,
            boundaryRowOffset: this.boundaryRowOffset
        });
        Calendar.weekStyle(ObservedObject.GetRawObject(this.weekStyle));
        Calendar.direction(ObservedObject.GetRawObject(this.direction));
        Calendar.backgroundColor(0x317aff);
        Calendar.width(100);
        Calendar.height(50);
        Calendar.key('calender');
        Calendar.pop();
        Flex.pop();
    }
}
loadDocument(new CalendarComponentExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=calendar.js.map