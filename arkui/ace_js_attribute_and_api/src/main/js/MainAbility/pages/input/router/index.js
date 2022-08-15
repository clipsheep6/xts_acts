export default {
    data: {
        title: "",
        watchVal:"123"
    },
    onInit() {
        this.$watch("watchVal", "onwatch")
    },
    functionTest1() {
        var function1 = this.$element('function1');
        var result = function1.setStyle("font-size", "50px")
        console.info('setStyle result is ' + result)
    },
    functionTest2() {
        var function2 = this.$element('function2');
        function2.setAttribute("type", "password")
    },
    functionTest3() {

    },
    functionTest4() {
        var function2 = this.$element('function2');
        function2.rotation({
            focus: true
        })
    },
    functionTest5() {
        //将watchVal从123改为456，触发onwatch事件
        this.watchVal = "456"
    },
    onwatch(newVal, oldVal) {
        console.log("watch newVal = " + newVal + ",oldVal =" + oldVal)
    }
}



