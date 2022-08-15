export default {
    data: {
        title: ""
    },
    onInit() {

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
}



