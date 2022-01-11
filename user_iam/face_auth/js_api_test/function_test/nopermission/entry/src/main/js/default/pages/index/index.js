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
        configService.setConfig(this)
        require('../../../test/ListTest')
        core.execute()
        console.info('onShow end')
    },
    onReady() {
    },
    fileSave(caseNum, codeNum, ...code) {
        console.log(caseNum + ' fileSave start');
        var path = "/data/config.dat"
        let fd = fileio.openSync(path, 0o102, 0o666);
        var message = caseNum + "\r\n" + codeNum + "\r\n";
        for(var i = 0; i < code.length; i++){
            message = message + code[i] + "\r\n";
        }
        fileio.writeSync(fd, message);
        fileio.closeSync(fd);
        console.log(caseNum + ' fileSave end');
    },
    saveNull() {
        console.log('null file faceid.dat start');
        var path = "/data/faceid.dat"
        let fd = fileio.openSync(path, 0o102, 0o666);
        var message = "";
        fileio.writeSync(fd, message);
        fileio.closeSync(fd);
        console.log('null file faceid.dat start end');
    },
}
