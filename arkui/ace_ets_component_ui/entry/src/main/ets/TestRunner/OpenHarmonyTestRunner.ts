class MonthViewData {
}

class CalendarDayInfo {
}

/**
 *干支纪日法19世纪对应常数
 */
const CENTURY_19_NUMBER = 31;
const CENTURY_19 = 18;
/**
 *干支纪日法20世纪对应常数
 */
const CENTURY_20_NUMBER = 15;
const CENTURY_20 = 19;
/**
 *干支纪日法21世纪对应常数
 */
const CENTURY_21_NUMBER = 0;
const CENTURY_YEARS = 100;
const MONTH_DAYS = [0,31,28,31,30,31,30,31,31,30,31,30,31];
const NUMBER_THREE = 3;
const NUMBER_FOUR = 4;
const NUMBER_FIVE = 5;
const NUMBER_SIX = 6;
const GAN_ZHI_NUMBER = 60;
class SexagenaryCycle {
    /**
     *干支纪日法
     *
     * @param year 公历年
     * @param month 公历月
     * @param day 公历日
     * @return 对应日期当天的干支纪日法结果数字，60为一个周期，由甲子开始，癸亥结束
     *例：1为甲，2为乙丑，3为丙寅，以此类推
     *计算公式：r = s / 4 * 6 + 5 * (s / 4 * 3 + u) + m + d + x
     *s:公元念书后两位-1。u:s除以4后的余数。m:月基数。d:日基数，x:世纪常数
     */
    getGanZhi(year, month, day) {
        let yearNum = year % CENTURY_YEARS - 1;
        let uuNum = yearNum % NUMBER_FOUR;
        let dayNum = day;
        let isRunYear = year % NUMBER_FOUR;
        let resultNum = Math.floor(yearNum / NUMBER_FOUR) * NUMBER_SIX + NUMBER_FIVE * (Math.floor(yearNum / NUMBER_FOUR) * NUMBER_THREE
        + uuNum) + this.getMonthNum(month) + dayNum + this.getCenturyNum(year) - 1;
        if (isRunYear === 0) {
            resultNum = resultNum + 1;
        }
        return resultNum;
    }
    /**
     *获取对应年份所在的世纪常数
     *
     * @param year 当前公历年份
     * @return 世纪常数
     */
    getCenturyNum(year) {
        let century = Math.floor(year / CENTURY_YEARS);
        if (century === CENTURY_19) {
            return CENTURY_19_NUMBER;
        }
        else if (century === CENTURY_20) {
            return CENTURY_20_NUMBER;
        }
        else {
            return CENTURY_21_NUMBER;
        }
    }
    /**
     *获取对应月份的常数,数值为前几个月的日数总和除以60的余数
     *
     * @param month 当前公历月份
     * @return 当前月份的对应常数
     */
    getMonthNum(month) {
        let monthNum = 0;
        for (let i = 0;i < month; i++) {
            monthNum += MONTH_DAYS[i];
        }
        let monthNumber = monthNum % GAN_ZHI_NUMBER;
        return monthNumber;
    }
}

class LunarTermsInfo {
    constructor(year, month, day) {
        this.mYear = year;
        this.mMonth = month;
        this.mDay = day;
    }
    /**
     *is same year
     *
     * @param year year
     * @return boolean
     */
    isSameYear(year) {
        return this.mYear === year;
    }
    /**
     *is same month
     *
     * @param month month
     * @return boolean
     */
    isSameMonth(month) {
        return this.mMonth === month;
    }
    /**
     *is same day
     *
     * @param day day
     * @return boolean
     */
    isSameDay(day) {
        return this.mDay === day;
    }
}

const J2000 = 2451545;
const E10 = [
    1.75347045673, 0.00000000000, 0.0000000000,
    0.03341656456, 4.66925680417, 6283.0758499914,
    0.00034894275, 4.62610241759, 12566.1516999828,
    0.00003417571, 2.82886579606, 3.5231183490,
    0.00003497056
];
const E11 = [];













































































































































































































































































































































































































































const RAD = 180 / Math.PI;
