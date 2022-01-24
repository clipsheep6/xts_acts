import prompt from '@system.prompt';
import router from '@system.router';
import {queryIccDiallingNumbersApi, delIccDiallingNumbersApi, updateIccDiallingNumbersApi} from '../../common/js/serverApi.js'
import {SlotObj, ContactType} from '../../utils/simInfo.js';

export default {
  data: {
    list: []
//    list: [
//      {alphaTag: '姓名1', number: 13417154441, recordNumber: 0},
//      {alphaTag: '姓名2', number: 13417154441, recordNumber: 1},
//      {alphaTag: '姓名3', number: 13417154441, recordNumber: 2},
//      {alphaTag: '姓名4', number: 13417154441, recordNumber: 3},
//    ]
  },
  onShow() {
    this.getNumberList();
  },
  async getNumberList() {
    console.log('getNumberList click');
    try {
      const result = await queryIccDiallingNumbersApi(SlotObj.slotId_0, ContactType.GENERAL_CONTACT);
      this.list = result;
      prompt.showToast({message: '获取成功'});
    } catch(ex) {
      prompt.showToast({message: `获取失败: ${ex.message}`});
    }
  },
  goUpdate(item) {
    console.log('update');
    console.log(JSON.stringify(item));
    router.push({
      uri: 'pages/add/add',
      params: {
        diallingNumbersInfo: item,
        optFlag: 'update'
      }
    })
  },
  async update(item) {
    console.log('update');
    console.log(JSON.stringify(item));
    let numInfo = {
      ...item
    }
    numInfo.alphaTag = numInfo.alphaTag + new Date().getTime();
    try {
      const result = await updateIccDiallingNumbersApi(SlotObj.slotId_0, ContactType.GENERAL_CONTACT, numInfo);
      prompt.showToast({message: '更新成功'});
    } catch(ex) {
      prompt.showToast({message: `更新失败  ${ex.message}`});
    }
  },
  async del(item) {
    console.log(JSON.stringify(item));
    try {
      const result = await delIccDiallingNumbersApi(SlotObj.slotId_0, ContactType.GENERAL_CONTACT, item);
      prompt.showToast({message: '删除成功'});
      this.getNumberList();
    } catch(ex) {
      prompt.showToast({message: `删除失败  ${ex.message}`});
    }
  }
}
