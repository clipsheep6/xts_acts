export default {
    data: {
        title: ""
    },
    onInit() {

    },
    functionTest1() {
        var camera = this.$element('camera1');
        camera.takePhoto({
            quality: 'high'
        })
    },
    functionTest2() {
        var camera = this.$element('camera1');
        camera.takePhoto({
            quality: 'normal'
        })
    },
    functionTest3() {
        var camera = this.$element('camera1');
        camera.takePhoto({
            quality: 'low'
        })
    },
    cameraError() {
        console.info('授权失败！')
    }
}



