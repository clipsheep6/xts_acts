/* import file from '@system.file'
   import app from '@system.app'
   import device from '@system.device'
   import router from '@system.router' */
import {Core, ExpectExtend} from 'deccjsunit/index';

export default {
  data: {
    title: ''
  },
  onInit () {
    this.title = this.$t('strings.world');
  },
  async onShow () {
    console.info('testdemo onShow finish!');
    const core = Core.getInstance();
    const expectExtend = new ExpectExtend({
      'id': 'extend'
    });
    core.addService('expect', expectExtend);
    core.init();

    const configService = core.getDefaultService('config');
    configService.setConfig(this);

    require('../../../test/List.test');
    core.execute();
  },
  onReady () {
  },
};