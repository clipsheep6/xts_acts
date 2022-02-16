/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
import {Core,ExpectExtend} from 'deccjsunit/index'

export default {
    data: {
        title: ""
    },
    onInit() {
        this.title = this.$t('strings.world');
    },
    onShow(){
        // console.info("webGL_test start1");
        global.el = this.$refs.canvas1;
        global.el2 = this.$refs.canvas2;
        // global.a = this.$element("canvas1")
        
        const core = Core.getInstance()
        const expectExtend = new ExpectExtend({
            'id':'extend'
        })
        // console.info("webGL_test start2");
        core.addService('expect',expectExtend)
        core.init()
        // console.info("webGL_test start3");
        const configService = core.getDefaultService('config')
        this.timeout = 60000
        configService.setConfig(this)
        // console.info("webGL_test start4");
        require('../../test/List.test.js')
        core.execute()
        // console.info("webGL_test start5");

    }
}
