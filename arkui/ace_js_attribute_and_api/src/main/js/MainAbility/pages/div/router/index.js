export default {
    data: {
        title: "",
    },
    functionTest1() {
        var div = this.$element('div1');
        div.scrollTo({
            id: "text12",
            duration: 200,
            timingFunction: "linear",
            complete: () => {
                console.info('scrollTo complete')
            }
        })
    },
    functionTest2() {
        var div = this.$element('div1');
        div.scrollTo({
            id: "text12",
            duration: 200,
            timingFunction: "ease",
            complete: () => {
                console.info('scrollTo complete')
            }
        })
    },
    functionTest3() {
        var div = this.$element('div1');
        div.scrollTo({
            id: "text12",
            duration: 200,
            timingFunction: "ease-in",
            complete: () => {
                console.info('scrollTo complete')
            }
        })
    },
    functionTest4() {
        var div = this.$element('div1');
        div.scrollTo({
            id: "text12",
            duration: 200,
            timingFunction: "ease-out",
            complete: () => {
                console.info('scrollTo complete')
            }
        })
    },
    functionTest5() {
        var div = this.$element('div1');
        div.scrollTo({
            id: "text12",
            duration: 200,
            timingFunction: "ease-in-out",
            complete: () => {
                console.info('scrollTo complete')
            }
        })
    },
    functionTest6() {
        var div = this.$element('div1');
        div.scrollTo({
            id: "text12",
            duration: 200,
            timingFunction: "friction",
            complete: () => {
                console.info('scrollTo complete')
            }
        })
    },
    functionTest7() {
        var div = this.$element('div1');
        div.scrollTo({
            id: "text12",
            duration: 200,
            timingFunction: "extreme-deceleration",
            complete: () => {
                console.info('scrollTo complete')
            }
        })
    },
    functionTest8() {
        var div = this.$element('div1');
        div.scrollTo({
            id: "text12",
            duration: 200,
            timingFunction: "sharp",
            complete: () => {
                console.info('scrollTo complete')
            }
        })
    },
    functionTest9() {
        var div = this.$element('div1');
        div.scrollTo({
            id: "text12",
            duration: 200,
            timingFunction: "rhythm",
            complete: () => {
                console.info('scrollTo complete')
            }
        })
    },
    functionTest10() {
        var div = this.$element('div1');
        div.scrollTo({
            id: "text12",
            duration: 200,
            timingFunction: "smooth",
            complete: () => {
                console.info('scrollTo complete')
            }
        })
    },
    functionTest11() {
        var div = this.$element('div1');
        div.scrollTo({
            id: "text12",
            duration: 200,
            timingFunction: "cubic-bezier",
            complete: () => {
                console.info('scrollTo complete')
            }
        })
    },
    functionTest12() {
        var div = this.$element('div1');
        div.scrollTo({
            id: "text12",
            duration: 200,
            timingFunction: "steps",
            complete: () => {
                console.info('scrollTo complete')
            }
        })
    }
}



