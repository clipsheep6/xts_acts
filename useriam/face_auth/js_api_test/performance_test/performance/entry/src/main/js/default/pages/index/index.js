import {Core, ExpectExtend} from 'deccjsunit/index'
import fileio from '@ohos.fileio'

export default {
    data: {
        title: ""
    },
    onInit() {
        this.title = this.$t('strings.world');
    },
    onShow() {
        console.info('onShow start')
        const core = Core.getInstance()
        const expectExtend = new ExpectExtend({
            'id': 'extend'
        })
        core.addService('expect', expectExtend)
        core.init()
        const configService = core.getDefaultService('config')
        this.timeout = 6100000;
        configService.setConfig(this)
        require('../../../test/ListTest')
        core.execute()
        console.info('onShow end')
    },
    onReady() {
    },
}
