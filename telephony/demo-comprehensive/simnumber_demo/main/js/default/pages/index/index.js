import router from '@system.router';
import {queryIccDiallingNumbersApi} from '../../common/js/serverApi.js'
export default {
  data: {
  },
  onInit() {
    queryIccDiallingNumbersApi();
  },
  addNumber() {
    router.push({uri: 'pages/add/add'})
  },
  getNumberList() {
    router.push({uri: 'pages/numberList/numberList'})
  },
}
