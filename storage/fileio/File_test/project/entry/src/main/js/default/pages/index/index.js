import device from '@system.device';

import {Core} from 'deccjsunit/lite'

const core = Core.getInstance()

core.init()

require('../../../test/List.test.js')

core.execute()

export default {
    data: {
        title: ""
    },
    onInit() {
        this.title = this.$t('strings.world');
    }
}
