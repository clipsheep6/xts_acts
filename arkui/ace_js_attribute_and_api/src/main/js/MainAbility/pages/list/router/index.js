export default {
    data: {
        title: "",
        "array": [
            {"value": "列表文本"},
            {"value": "列表文本"},
            {"value": "列表文本"},
            {"value": "列表文本"},
        ],
    },
    click()
    {
        console.log('scrollArrow begin...')
        this.$element("list").scrollArrow({ reverse: true, smooth: false });
    }
}