/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*******************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/Calendar.ets?entry ***!
  \*******************************************************************************************************************************/
class calendar extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__curMonth = new ObservedPropertyObject({ year: 0, month: 0, data: [] }, this, "curMonth");
        this.__preMonth = new ObservedPropertyObject({ year: 0, month: 0, data: [] }, this, "preMonth");
        this.__nextMonth = new ObservedPropertyObject({ year: 0, month: 0, data: [] }, this, "nextMonth");
        this.__year = new ObservedPropertySimple(0, this, "year");
        this.__month = new ObservedPropertySimple(0, this, "month");
        this.Controller = new CalendarController();
        this.lunarMonthDays = [
            '初一', '初二', '初三', '初四', '初五', '初六', '初七', '初八', '初九', '初十',
            '十一', '十二', '十三', '十四', '十五', '十六', '十七', '十八', '十九', '二十',
            '廿一', '廿二', '廿三', '廿四', '廿五', '廿六', '廿七', '廿八', '廿九', '三十'
        ];
        this.lunarMonthNames = ['正月', '二月', '三月', '四月', '五月', '六月', '七月', '八月', '九月', '十月', '冬月', '腊月'];
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.curMonth !== undefined) {
            this.curMonth = params.curMonth;
        }
        if (params.preMonth !== undefined) {
            this.preMonth = params.preMonth;
        }
        if (params.nextMonth !== undefined) {
            this.nextMonth = params.nextMonth;
        }
        if (params.year !== undefined) {
            this.year = params.year;
        }
        if (params.month !== undefined) {
            this.month = params.month;
        }
        if (params.Controller !== undefined) {
            this.Controller = params.Controller;
        }
        if (params.lunarMonthDays !== undefined) {
            this.lunarMonthDays = params.lunarMonthDays;
        }
        if (params.lunarMonthNames !== undefined) {
            this.lunarMonthNames = params.lunarMonthNames;
        }
    }
    aboutToBeDeleted() {
        this.__curMonth.aboutToBeDeleted();
        this.__preMonth.aboutToBeDeleted();
        this.__nextMonth.aboutToBeDeleted();
        this.__year.aboutToBeDeleted();
        this.__month.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get curMonth() {
        return this.__curMonth.get();
    }
    set curMonth(newValue) {
        this.__curMonth.set(newValue);
    }
    get preMonth() {
        return this.__preMonth.get();
    }
    set preMonth(newValue) {
        this.__preMonth.set(newValue);
    }
    get nextMonth() {
        return this.__nextMonth.get();
    }
    set nextMonth(newValue) {
        this.__nextMonth.set(newValue);
    }
    get year() {
        return this.__year.get();
    }
    set year(newValue) {
        this.__year.set(newValue);
    }
    get month() {
        return this.__month.get();
    }
    set month(newValue) {
        this.__month.set(newValue);
    }
    render() {
        Flex.create({
            direction: FlexDirection.Column,
            alignItems: ItemAlign.Start
        });
        Flex.margin({ bottom: 10, right: 20, left: 20, top: 0 });
        Flex.height("50%");
        Row.create();
        Text.create(`${this.year} 年 ${this.month + 1} 月`);
        Text.fontSize(20);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Row.pop();
        Calendar.create({
            date: { year: 2021, month: 8, day: 35 },
            currentData: this.curMonth,
            preData: this.preMonth,
            nextData: this.nextMonth,
            controller: this.Controller
        });
        Calendar.showLunar(true);
        Calendar.showHoliday(true);
        Calendar.needSlide(true);
        Calendar.offDays(Week.Tue | Week.Wed);
        Calendar.startOfWeek(Week.Sun);
        Calendar.direction(Axis.Horizontal);
        Calendar.currentDayStyle({
            dayColor: Color.Black,
            lunarColor: Color.Gray,
            markLunarColor: Color.Black,
            dayFontSize: 15,
            lunarDayFontSize: 10,
            boundaryColOffset: 10,
        });
        Calendar.nonCurrentDayStyle({
            nonCurrentMonthDayColor: Color.Black,
            nonCurrentMonthLunarColor: Color.Gray,
            nonCurrentMonthWorkDayMarkColor: Color.Green,
            nonCurrentMonthOffDayMarkColor: Color.Brown,
        });
        Calendar.todayStyle({
            focusedDayColor: Color.Red,
            focusedLunarColor: Color.Orange,
            focusedAreaBackgroundColor: Color.Blue,
            focusedAreaRadius: 20
        });
        Calendar.weekStyle({
            weekColor: Color.Black,
            weekendDayColor: Color.Orange,
            weekendLunarColor: Color.Blue,
            weekFontSize: 20,
            weekHeight: 5,
            weekWidth: 48,
        });
        Calendar.workStateStyle({
            workDayMarkColor: Color.Red,
            offDayMarkColor: Color.Orange,
            workDayMarkSize: 10,
            offDayMarkSize: 2,
            workStateWidth: 12,
            workStateHorizontalMovingDistance: 0,
            workStateVerticalMovingDistance: 12,
        });
        Calendar.onRequestData((request) => {
            switch (request.monthState) {
                case 0:
                    this.year = request.currentYear;
                    this.month = request.currentMonth;
                    this.curMonth.year = request.year;
                    this.curMonth.month = request.month;
                    this.curMonth.data = [];
                    for (var i = 0; i < 35; ++i) {
                        this.curMonth.data.push({
                            index: i,
                            lunarMonth: this.lunarMonthNames[i % 12],
                            lunarDay: this.lunarMonthDays[i % 30],
                            dayMark: "work",
                            dayMarkValue: "",
                            year: request.year,
                            month: request.month,
                            day: i + 1,
                            isFirstOfLunar: false,
                            hasSchedule: false,
                            markLunarDay: false
                        });
                        if (i % 7 == 0 || i % 7 == 6) {
                            this.curMonth.data[i].dayMarkValue = "休";
                        }
                    }
                    break;
                case 1:
                    this.year = request.currentYear;
                    this.month = request.currentMonth;
                    this.preMonth.year = request.year;
                    this.preMonth.month = request.month;
                    this.preMonth.data = [];
                    for (var i = 0; i < 35; ++i) {
                        this.preMonth.data.push({
                            index: i,
                            lunarMonth: this.lunarMonthNames[i % 12],
                            lunarDay: this.lunarMonthDays[i % 30],
                            dayMark: "work",
                            dayMarkValue: "",
                            year: request.year,
                            month: request.month,
                            day: i + 1,
                            isFirstOfLunar: false,
                            hasSchedule: false,
                            markLunarDay: false
                        });
                        if (i % 7 == 0 || i % 7 == 6) {
                            this.preMonth.data[i].dayMarkValue = "休";
                        }
                    }
                    break;
                case 2:
                    this.year = request.currentYear;
                    this.month = request.currentMonth;
                    this.nextMonth.year = request.year;
                    this.nextMonth.month = request.month;
                    this.nextMonth.data = [];
                    for (var i = 0; i < 35; ++i) {
                        this.nextMonth.data.push({
                            index: i,
                            lunarMonth: this.lunarMonthNames[i % 12],
                            lunarDay: this.lunarMonthDays[i % 30],
                            dayMark: "work",
                            dayMarkValue: "",
                            year: request.year,
                            month: request.month,
                            day: i + 1,
                            isFirstOfLunar: false,
                            hasSchedule: false,
                            markLunarDay: false
                        });
                        if (i % 7 == 0 || i % 7 == 6) {
                            this.nextMonth.data[i].dayMarkValue = "休";
                        }
                    }
                    break;
            }
        });
        Calendar.onSelectChange((request) => {
            this.year = request.year;
            this.month = request.month;
            console.info('On Select change: ' + this.year + '/' + this.month);
        });
        Calendar.pop();
        Row.create();
        Button.createWithLabel("back To Today");
        Button.onClick(() => {
            this.Controller.backToToday();
            console.info("back To Today");
        });
        Button.pop();
        Button.createWithLabel("go To");
        Button.onClick(() => {
            this.Controller.goTo({ year: 2021, month: 9, day: 10 });
            console.info("go To : 2021/9/10");
        });
        Button.pop();
        Row.pop();
        Flex.pop();
    }
}
loadDocument(new calendar("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Calendar.js.map